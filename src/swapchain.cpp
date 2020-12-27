#include <swapchain.hpp>
#include <data.hpp>
#include <image.hpp>
#include <queue.hpp>
#include <platform.hpp>
#include <overlay.hpp>

namespace fuen {

Swapchain::~Swapchain() {
	destroy();
}

void Swapchain::destroy() {
	if(!dev) {
		return;
	}

	overlay.reset();
	for(auto* img : this->images) {
		dev->images.mustErase(img->handle);
	}

	images.clear();

	// TODO: not sure about this. We don't synchronize access to it
	// in other places since the api for swapchain/overlay retrieval
	// can't be threadsafe, by design.
	std::lock_guard lock(dev->mutex);
	if(dev->lastCreatedSwapchain == this) {
		dev->lastCreatedSwapchain = nullptr;
	}
}

VKAPI_ATTR VkResult VKAPI_CALL CreateSwapchainKHR(
		VkDevice                                    device,
		const VkSwapchainCreateInfoKHR*             pCreateInfo,
		const VkAllocationCallbacks*                pAllocator,
		VkSwapchainKHR*                             pSwapchain) {
	auto& devd = getData<Device>(device);
	auto* platform = findData<Platform>(pCreateInfo->surface);

	auto env = getenv("FUEN_DISABLE_PLATFORM");
	if(env && *env != '0') {
		platform = nullptr;
	}

	// It's important we *first* destroy our image objects coming
	// from this swapchain since they may implicitly destroyed
	// inside the CreateSwapchain call.
	// Even when the new CreateSwapchain call fails, the images might
	// be destroyed via vulkan spec and the old swapchain becomes
	// unusable.
	Swapchain* oldChain {};
	std::unique_ptr<Overlay> savedOverlay {};
	bool recreateOverlay {false};
	if(pCreateInfo->oldSwapchain) {
		oldChain = &devd.swapchains.get(pCreateInfo->oldSwapchain);

		if(oldChain->overlay) {
			if(Overlay::compatible(oldChain->ci, *pCreateInfo)) {
				// have to make sure previous rendering has finished.
				oldChain->overlay->gui.finishDraws();
				savedOverlay = std::move(oldChain->overlay);
			} else {
				recreateOverlay = true;
			}
		}

		// This is important to destroy our handles of the swapchain
		// images.
		oldChain->destroy();
	}

	auto result = devd.dispatch.CreateSwapchainKHR(device, pCreateInfo,
		pAllocator, pSwapchain);
	if(result != VK_SUCCESS) {
		return result;
	}

	auto& swapd = devd.swapchains.add(*pSwapchain);
	swapd.objectType = VK_OBJECT_TYPE_SWAPCHAIN_KHR;
	swapd.dev = &devd;
	swapd.ci = *pCreateInfo;
	swapd.handle = *pSwapchain;

	// add swapchain images to tracked images
	u32 imgCount = 0u;
	VK_CHECK(devd.dispatch.GetSwapchainImagesKHR(devd.handle, swapd.handle, &imgCount, nullptr));
	auto imgs = std::make_unique<VkImage[]>(imgCount);
	VK_CHECK(devd.dispatch.GetSwapchainImagesKHR(devd.handle, swapd.handle, &imgCount, imgs.get()));

	swapd.images.resize(imgCount);
	for(auto i = 0u; i < imgCount; ++i) {
		auto& img = devd.images.add(imgs[i]);
		img.swapchain = &swapd;
		img.swapchainImageID = i;
		img.dev = &devd;
		img.handle = imgs[i];

		swapd.images[i] = &img;
	}

	devd.lastCreatedSwapchain = &swapd;

	if(savedOverlay) {
		swapd.overlay = std::move(savedOverlay);
		swapd.overlay->swapchain = &swapd;
		swapd.overlay->initRenderBuffers();
		if(swapd.overlay->platform) {
			swapd.overlay->platform->resize(swapd.ci.imageExtent.width, swapd.ci.imageExtent.height);
		}
	} else if(recreateOverlay) {
		// Otherwise we have to create a new renderer from scratch
		// TODO: carry over all gui logic. Just recreate rendering logic
		dlg_error("TODO: not implemented");
	} else if(platform) {
		swapd.overlay = std::make_unique<Overlay>();
		swapd.overlay->init(swapd);
		swapd.overlay->platform = platform;
		platform->init(*swapd.dev, swapd.ci.imageExtent.width, swapd.ci.imageExtent.height);
	}

	return result;
}

VKAPI_ATTR void VKAPI_CALL DestroySwapchainKHR(
		VkDevice                                    device,
		VkSwapchainKHR                             	swapchain,
		const VkAllocationCallbacks*                pAllocator) {
	if(!swapchain) {
		return;
	}

	auto& devd = getData<Device>(device);
	devd.swapchains.mustErase(swapchain);
	devd.dispatch.DestroySwapchainKHR(device, swapchain, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL QueuePresentKHR(
		VkQueue                                     queue,
		const VkPresentInfoKHR*                     pPresentInfo) {
	auto& qd = getData<Queue>(queue);

	auto combinedResult = VK_SUCCESS;
	for(auto i = 0u; i < pPresentInfo->swapchainCount; ++i) {
		auto& swapchain = qd.dev->swapchains.get(pPresentInfo->pSwapchains[i]);
		VkResult res;

		if(swapchain.overlay && swapchain.overlay->platform) {
			swapchain.overlay->show = swapchain.overlay->platform->update(swapchain.overlay->gui);
		}

		if(swapchain.overlay && swapchain.overlay->show) {
			auto waitsems = span{pPresentInfo->pWaitSemaphores, pPresentInfo->waitSemaphoreCount};
			res = swapchain.overlay->drawPresent(qd, waitsems, pPresentInfo->pImageIndices[i]);
		} else {
			VkPresentInfoKHR pi {};
			pi.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
			pi.pImageIndices = &pPresentInfo->pImageIndices[i];
			pi.pResults = pPresentInfo->pResults ? &pPresentInfo->pResults[i] : nullptr;
			pi.pSwapchains = &pPresentInfo->pSwapchains[i];
			pi.pWaitSemaphores = pPresentInfo->pWaitSemaphores;
			pi.waitSemaphoreCount = pPresentInfo->waitSemaphoreCount;
			pi.swapchainCount = 1u;
			// TODO: might be bad to not forward this
			// pi.pNext

			std::lock_guard queueLock(qd.dev->queueMutex);
			res = qd.dev->dispatch.QueuePresentKHR(queue, &pi);
		}

		if(pPresentInfo->pResults) {
			pPresentInfo->pResults[i] = res;
		}

		if(res != VK_SUCCESS && combinedResult == VK_SUCCESS) {
			combinedResult = res;
		}
	}

	return combinedResult;
}

} // namespace fuen
