#include <handle.hpp>
#include <data.hpp>
#include <queue.hpp>
#include <device.hpp>
#include <handles.hpp>

namespace vil {

DeviceHandle::~DeviceHandle() {
	if(!dev) {
		return;
	}

	// Inform command buffers that use this handle that it was
	// destroyed.
	invalidateCbs();

	// Notify device that handle is destroyed. It will forward it
	// to all instances that need to know (e.g. gui)
	notifyDestruction(*dev, *this);
}

void DeviceHandle::invalidateCbsLocked() {
	// nothing can be added/removed while device mutex is locked
	for(auto* ref : refRecords) {
		// If the records still references it command buffer, the record
		// is the current command buffer state. This handle being destroyed
		// means the command buffer must be moved into invalid state.
		if(ref->cb) {
			dlg_assert(ref->cb->lastRecordLocked() == ref);
			ref->cb->invalidateLocked();
		}

		auto [_, success] = ref->destroyed.insert(this);
		dlg_assert(success);
	}

	refRecords.clear();
}

void DeviceHandle::invalidateCbs() {
	// We have to lock the mutex here since other threads might access
	// this->refCbs (e.g. other command buffers being destroyed and removing
	// themselves).
	dlg_assert(this->dev);
	std::lock_guard lock(this->dev->mutex);
	invalidateCbsLocked();
}

const char* name(VkObjectType objectType) {
	switch(objectType) {
		case VK_OBJECT_TYPE_IMAGE: return "Image";
		case VK_OBJECT_TYPE_IMAGE_VIEW: return "ImageView";
		case VK_OBJECT_TYPE_SAMPLER: return "Sampler";
		case VK_OBJECT_TYPE_BUFFER: return "Buffer";
		case VK_OBJECT_TYPE_BUFFER_VIEW: return "BufferView";
		case VK_OBJECT_TYPE_DEVICE_MEMORY: return "DeviceMemory";
		case VK_OBJECT_TYPE_PIPELINE: return "Pipeline";
		case VK_OBJECT_TYPE_PIPELINE_LAYOUT: return "PipelineLayout";
		case VK_OBJECT_TYPE_DESCRIPTOR_SET: return "DescriptorSet";
		case VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT: return "DescriptorSetLayout";
		case VK_OBJECT_TYPE_DESCRIPTOR_POOL: return "DescriptorPool";
		case VK_OBJECT_TYPE_COMMAND_POOL: return "CommandPool";
		case VK_OBJECT_TYPE_COMMAND_BUFFER: return "CommandBuffer";
		case VK_OBJECT_TYPE_FENCE: return "Fence";
		case VK_OBJECT_TYPE_SEMAPHORE: return "Semaphore";
		case VK_OBJECT_TYPE_EVENT: return "Event";
		case VK_OBJECT_TYPE_QUERY_POOL: return "QueryPool";
		case VK_OBJECT_TYPE_SHADER_MODULE: return "ShaderModule";
		case VK_OBJECT_TYPE_QUEUE: return "Queue";
		case VK_OBJECT_TYPE_SWAPCHAIN_KHR: return "Swapchain";
		case VK_OBJECT_TYPE_RENDER_PASS: return "RenderPass";
		case VK_OBJECT_TYPE_FRAMEBUFFER: return "Framebuffer";
		default: return "?";
	}
}

std::string name(const Handle& handle) {
	const auto hn = name(handle.objectType);

	std::string name;
	if(handle.name.empty()) {
		// auto id = handleToU64(vil::handle(handle));
		// name = dlg::format("{} {}{}", hn, std::hex, id);
		name = dlg::format("{}", hn);
	} else {
		name = dlg::format("{} {}", hn, handle.name);
	}

	return name;
}

// type handlers
bool matchesSearch(Handle& handle, std::string_view search) {
	if(search.empty()) {
		return true;
	}

	// TODO: better matching. At least ignore case.
	auto label = name(handle);
	return (label.find(search) != label.npos);
}

template<typename M>
std::vector<Handle*> findHandles(const M& map, std::string_view search) {
	std::vector<Handle*> ret;
	for(auto& entry : map) {
		auto& handle = *entry.second.get();
		if(!matchesSearch(handle, search)) {
			continue;
		}

		ret.push_back(&handle);
	}

	std::sort(ret.begin(), ret.end());
	return ret;
}

template<VkObjectType OT, typename HT, auto DevMapPtr>
struct ObjectTypeImpl : ObjectTypeHandler {
	static const ObjectTypeImpl instance;

	VkObjectType objectType() const override { return OT; }
	Handle* find(Device& dev, u64 id) const override {
		using VKHT = decltype(vil::handle(std::declval<HT>()));
		auto vkht = u64ToHandle<VKHT>(id);

		auto& map = (dev.*DevMapPtr).map;
		auto it = map.find(vkht);
		return it == map.end() ? nullptr : &*it->second;
	}
	std::vector<Handle*> resources(Device& dev, std::string_view search) const override {
		return findHandles((dev.*DevMapPtr).map, search);
	}
	void visit(ResourceVisitor& visitor, Handle& handle) const override {
		dlg_assert(handle.objectType == objectType());
		return visitor.visit(static_cast<HT&>(handle));
	}
};

struct PipelineTypeImpl : ObjectTypeHandler {
	static const PipelineTypeImpl instance;

	VkObjectType objectType() const override { return VK_OBJECT_TYPE_PIPELINE; }
	Handle* find(Device& dev, u64 id) const override {
		auto vkpipe = u64ToHandle<VkPipeline>(id);
		auto it = dev.graphicsPipes.map.find(vkpipe);
		if(it != dev.graphicsPipes.map.end()) {
			return &*it->second;
		}

		auto it2 = dev.computePipes.map.find(vkpipe);
		if(it2 != dev.computePipes.map.end()) {
			return &*it2->second;
		}

		return nullptr;
	}

	std::vector<Handle*> resources(Device& dev, std::string_view search) const override {
		std::vector<Handle*> ret;
		for(auto& entry : dev.graphicsPipes.map) {
			auto& handle = *entry.second.get();
			if(!matchesSearch(handle, search)) {
				continue;
			}

			ret.push_back(&handle);
		}

		for(auto& entry : dev.computePipes.map) {
			auto& handle = *entry.second.get();
			if(!matchesSearch(handle, search)) {
				continue;
			}

			ret.push_back(&handle);
		}

		std::sort(ret.begin(), ret.end());
		return ret;
	}

	void visit(ResourceVisitor& visitor, Handle& handle) const override {
		dlg_assert(handle.objectType == objectType());
		return visitor.visit(static_cast<Pipeline&>(handle));
	}
};

struct QueueTypeImpl : ObjectTypeHandler {
	static const QueueTypeImpl instance;

	VkObjectType objectType() const override { return VK_OBJECT_TYPE_QUEUE; }
	Handle* find(Device& dev, u64 id) const override {
		// NOTE: alternatively (maybe faster but does not really matter)
		// we could use findData<Queue>((VkQueue) id)
		for(auto& queue : dev.queues) {
			if(handleToU64(queue->handle) == id) {
				return queue.get();
			}
		}

		return nullptr;
	}
	std::vector<Handle*> resources(Device& dev, std::string_view search) const override {
		std::vector<Handle*> ret;
		for(auto& queue : dev.queues) {
			// We never return queues created by us, they don't count as
			// resources.
			if(queue->createdByUs || !matchesSearch(*queue, search)) {
				continue;
			}

			ret.push_back(queue.get());
		}

		return ret;
	}
	void visit(ResourceVisitor& visitor, Handle& handle) const override {
		dlg_assert(handle.objectType == objectType());
		return visitor.visit(static_cast<Queue&>(handle));
	}
};

template<VkObjectType OT, typename HT, auto DevMapPtr>
const ObjectTypeImpl<OT, HT, DevMapPtr> ObjectTypeImpl<OT, HT, DevMapPtr>::instance;
const QueueTypeImpl QueueTypeImpl::instance;
const PipelineTypeImpl PipelineTypeImpl::instance;

static const ObjectTypeHandler* typeHandlers[] = {
	&ObjectTypeImpl<VK_OBJECT_TYPE_IMAGE, Image, &Device::images>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_IMAGE_VIEW, ImageView, &Device::imageViews>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_SAMPLER, Sampler, &Device::samplers>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_BUFFER, Buffer, &Device::buffers>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_BUFFER_VIEW, BufferView, &Device::bufferViews>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_COMMAND_BUFFER, CommandBuffer, &Device::commandBuffers>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_COMMAND_POOL, CommandPool, &Device::commandPools>::instance,
	&PipelineTypeImpl::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_FRAMEBUFFER, Framebuffer, &Device::framebuffers>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_DEVICE_MEMORY, DeviceMemory, &Device::deviceMemories>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_RENDER_PASS, RenderPass, &Device::renderPasses>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_PIPELINE_LAYOUT, PipelineLayout, &Device::pipeLayouts>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT, DescriptorSetLayout, &Device::dsLayouts>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_DESCRIPTOR_SET, DescriptorSet, &Device::descriptorSets>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_DESCRIPTOR_POOL, DescriptorPool, &Device::dsPools>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_FENCE, Fence, &Device::fences>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_SEMAPHORE, Semaphore, &Device::semaphores>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_EVENT, Event, &Device::events>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_QUERY_POOL, QueryPool, &Device::queryPools>::instance,
	&ObjectTypeImpl<VK_OBJECT_TYPE_SWAPCHAIN_KHR, Swapchain, &Device::swapchains>::instance,
	&QueueTypeImpl::instance,
};

const span<const ObjectTypeHandler*> ObjectTypeHandler::handlers = typeHandlers;

Handle* findHandle(Device& dev, VkObjectType objectType, u64 handle) {
	for(auto& handler : ObjectTypeHandler::handlers) {
		if(handler->objectType() == objectType) {
			auto* ptr = handler->find(dev, handle);
			if(ptr) {
				return ptr;
			}
		}
	}

	return nullptr;
}

VKAPI_ATTR VkResult VKAPI_CALL SetDebugUtilsObjectNameEXT(
		VkDevice                                    device,
		const VkDebugUtilsObjectNameInfoEXT*        pNameInfo) {
	auto& devd = getData<Device>(device);

	{
		std::lock_guard lock(devd.mutex);
		auto* handle = findHandle(devd, pNameInfo->objectType, pNameInfo->objectHandle);
		if(handle) {
			handle->name = pNameInfo->pObjectName;
		}
	}

	if(!devd.dispatch.SetDebugUtilsObjectNameEXT) {
		return VK_SUCCESS;
	}

	return devd.dispatch.SetDebugUtilsObjectNameEXT(device, pNameInfo);
}

VKAPI_ATTR VkResult VKAPI_CALL SetDebugUtilsObjectTagEXT(
		VkDevice                                    device,
		const VkDebugUtilsObjectTagInfoEXT*         pTagInfo) {
	auto& devd = getData<Device>(device);

	{
		std::lock_guard lock(devd.mutex);
		auto* handle = findHandle(devd, pTagInfo->objectType, pTagInfo->objectHandle);
		if(handle) {
			auto& data = handle->tags[pTagInfo->tagName];
			auto ptr = reinterpret_cast<const std::byte*>(pTagInfo->pTag);
			data = {ptr, ptr + pTagInfo->tagSize};
		}
	}

	if(!devd.dispatch.SetDebugUtilsObjectTagEXT) {
		return VK_SUCCESS;
	}

	return devd.dispatch.SetDebugUtilsObjectTagEXT(device, pTagInfo);
}

} // namespace vil
