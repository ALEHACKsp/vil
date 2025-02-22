#include <image.hpp>
#include <layer.hpp>
#include <device.hpp>
#include <data.hpp>
#include <ds.hpp>
#include <rp.hpp>

namespace vil {

// Classes
Image::~Image() {
	if(!dev) {
		return;
	}

	std::lock_guard lock(dev->mutex);
	for(auto* view : this->views) {
		view->img = nullptr;
	}
}

ImageView::~ImageView() {
	if(!dev) {
		return;
	}

	std::lock_guard lock(dev->mutex);
	if(this->img) {
		auto it = std::find(this->img->views.begin(), this->img->views.end(), this);
		dlg_assert(it != this->img->views.end());
		this->img->views.erase(it);
	}

	for(auto* fb : this->fbs) {
		auto it = std::find(fb->attachments.begin(), fb->attachments.end(), this);
		dlg_assert(it != fb->attachments.end());
		fb->attachments.erase(it);
	}

	// Can't use for loop here, as descriptor will unregsiter themselves in turn
	while(!this->descriptors.empty()) {
		auto& dsRef = *this->descriptors.begin();
		dlg_assert(dsRef.ds->getImageView(dsRef.binding, dsRef.elem) == this);
		dsRef.ds->invalidateCbsLocked();
		unregisterLocked(*dsRef.ds, dsRef.binding, dsRef.elem);
	}
}

Sampler::~Sampler() {
	if(!dev) {
		return;
	}

	std::lock_guard lock(dev->mutex);

	// Can't use for loop here, as descriptor will unregsiter themselves in turn
	while(!this->descriptors.empty()) {
		auto& dsRef = *this->descriptors.begin();
		dlg_assert(dsRef.ds->getSampler(dsRef.binding, dsRef.elem) == this);
		dsRef.ds->invalidateCbsLocked();
		unregisterLocked(*dsRef.ds, dsRef.binding, dsRef.elem);
	}
}

// Image
VKAPI_ATTR VkResult VKAPI_CALL CreateImage(
		VkDevice                                   	device,
		const VkImageCreateInfo*                    pCreateInfo,
		const VkAllocationCallbacks*                pAllocator,
		VkImage*                                    pImage) {
	auto& dev = getData<Device>(device);

	auto nci = *pCreateInfo;

	bool linearSampling {};
	bool nearestSampling {};

	// If supported, we add the sampled flags to usage so we can
	// display it directly in our gui.
	VkFormatProperties props {};
	dev.ini->dispatch.GetPhysicalDeviceFormatProperties(dev.phdev,
		nci.format, &props);
	auto features = nci.tiling == VK_IMAGE_TILING_OPTIMAL ? props.optimalTilingFeatures : props.linearTilingFeatures;
	if(features & VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT) {
		nci.usage |= VK_IMAGE_USAGE_SAMPLED_BIT;
		nearestSampling = true;

		if(features & VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT) {
			linearSampling = true;
		}
	}

	// NOTE: needed for our own operations on the buffer. Might be better to
	// properly acquire/release it instead though, this might have
	// a performance impact.
	auto concurrent = false;
	if(dev.usedQueueFamilyIndices.size() > 1 &&
			nci.sharingMode != VK_SHARING_MODE_CONCURRENT &&
			nearestSampling) {
		nci.sharingMode = VK_SHARING_MODE_CONCURRENT;
		nci.queueFamilyIndexCount = u32(dev.usedQueueFamilyIndices.size());
		nci.pQueueFamilyIndices = dev.usedQueueFamilyIndices.data();
		concurrent = true;
	}

	// The transferSrc format feature was only added in vulkan 1.1.
	// For vulkan 1.0 we can just assume it I guess.
	// We don't simply unset the transient attachment bit (it would make
	// sense as the memory needs to be non-transient anyways when we hook
	// the renderpass) since that makes things complicated: the memory
	// type changes, GetMemoryCommitment cannot be called and so on.
	// Would have to do a lot of work to fix the aftermath of that change.
	if((!dev.ini->vulkan11 || features & VK_FORMAT_FEATURE_TRANSFER_SRC_BIT)
			&& !(nci.usage & VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT)) {
		nci.usage |= VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
	}

	auto res = dev.dispatch.CreateImage(device, &nci, pAllocator, pImage);
	if(res != VK_SUCCESS) {
		return res;
	}

	auto& img = dev.images.add(*pImage);
	img.objectType = VK_OBJECT_TYPE_IMAGE;
	img.dev = &dev;
	img.handle = *pImage;
	img.ci = *pCreateInfo;
	img.pendingLayout = pCreateInfo->initialLayout;
	img.allowsNearestSampling = nearestSampling;
	img.allowsLinearSampling = linearSampling;
	img.concurrentHooked = concurrent;
	img.hasTransferSrc = nci.usage & VK_IMAGE_USAGE_TRANSFER_SRC_BIT;

	return res;
}

VKAPI_ATTR void VKAPI_CALL DestroyImage(
		VkDevice                                    device,
		VkImage                                     image,
		const VkAllocationCallbacks*                pAllocator) {
	if(!image) {
		return;
	}

	auto& dev = getData<Device>(device);
	dev.images.mustErase(image);
	dev.dispatch.DestroyImage(device, image, pAllocator);
}

void bindImageMemory(Device& dev, const VkBindImageMemoryInfo& bind) {
	auto& img = dev.images.get(bind.image);
	auto& mem = dev.deviceMemories.get(bind.memory);

	dlg_assert(!img.memory);
	dlg_assert(!img.memoryDestroyed);

	// find required size
	VkMemoryRequirements memReqs;
	dev.dispatch.GetImageMemoryRequirements(dev.handle, bind.image, &memReqs);

	img.memory = &mem;
	img.allocationOffset = bind.memoryOffset;
	img.allocationSize = memReqs.size;

	{
		// access to the given memory must be internally synced
		std::lock_guard lock(dev.mutex);
		// mem.allocations.insert(&img);
		mem.allocations.push_back(&img);
	}

	// dlg_trace("Binding image {} ({}) to memory {} ({})", &img, img.handle, &mem, mem.handle);
}

VKAPI_ATTR VkResult VKAPI_CALL BindImageMemory2(
		VkDevice                                    device,
		uint32_t                                    bindInfoCount,
		const VkBindImageMemoryInfo*                pBindInfos) {
	auto& dev = getData<Device>(device);
	for(auto i = 0u; i < bindInfoCount; ++i) {
		auto& bind = pBindInfos[i];
		bindImageMemory(dev, bind);
	}

	return dev.dispatch.BindImageMemory2(device, bindInfoCount, pBindInfos);
}

VKAPI_ATTR VkResult VKAPI_CALL BindImageMemory(
		VkDevice                                    device,
		VkImage                                     image,
		VkDeviceMemory                              memory,
		VkDeviceSize                                memoryOffset) {
	auto& dev = getData<Device>(device);
	bindImageMemory(dev, {{}, {}, image, memory, memoryOffset});
	return dev.dispatch.BindImageMemory(device, image, memory, memoryOffset);
}

// ImageView
VKAPI_ATTR VkResult VKAPI_CALL CreateImageView(
		VkDevice                                    device,
		const VkImageViewCreateInfo*                pCreateInfo,
		const VkAllocationCallbacks*                pAllocator,
		VkImageView*                                pView) {
	auto& dev = getData<Device>(device);
	auto res = dev.dispatch.CreateImageView(device, pCreateInfo, pAllocator, pView);
	if(res != VK_SUCCESS) {
		return res;
	}

	auto& view = dev.imageViews.add(*pView);
	view.objectType = VK_OBJECT_TYPE_IMAGE_VIEW;
	view.handle = *pView;
	view.img = &dev.images.get(pCreateInfo->image);
	view.dev = &dev;
	view.ci = *pCreateInfo;

	{
		std::lock_guard lock(dev.mutex);
		view.img->views.push_back(&view);
	}

	return res;
}

VKAPI_ATTR void VKAPI_CALL DestroyImageView(
		VkDevice                                    device,
		VkImageView                                 imageView,
		const VkAllocationCallbacks*                pAllocator) {
	if(!imageView) {
		return;
	}

	auto& dev = getData<Device>(device);
	dev.imageViews.mustErase(imageView);
	dev.dispatch.DestroyImageView(device, imageView, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL CreateSampler(
		VkDevice                                    device,
		const VkSamplerCreateInfo*                  pCreateInfo,
		const VkAllocationCallbacks*                pAllocator,
		VkSampler*                                  pSampler) {
	auto& dev = getData<Device>(device);
	auto res = dev.dispatch.CreateSampler(device, pCreateInfo, pAllocator, pSampler);
	if(res != VK_SUCCESS) {
		return res;
	}

	auto& view = dev.samplers.add(*pSampler);
	view.dev = &dev;
	view.handle = *pSampler;
	view.ci = *pCreateInfo;
	view.objectType = VK_OBJECT_TYPE_SAMPLER;

	return res;
}

VKAPI_ATTR void VKAPI_CALL DestroySampler(
		VkDevice                                    device,
		VkSampler                                   sampler,
		const VkAllocationCallbacks*                pAllocator) {
	if(!sampler) {
		return;
	}

	auto& dev = getData<Device>(device);
	dev.samplers.mustErase(sampler);
	dev.dispatch.DestroySampler(device, sampler, pAllocator);
}

} // namespace vil
