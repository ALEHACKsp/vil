#pragma once

#include <vk/vulkan.h>
#include <string>

// Automatically generated header, don't edit.
// See github.com/nyorain/vkpp.
// Generated for vulkan version: 1.1.168

namespace vk {
inline const char* name(VkResult val) {
	switch(val) {
		case VK_SUCCESS: return "Success";
		case VK_NOT_READY: return "NotReady";
		case VK_TIMEOUT: return "Timeout";
		case VK_EVENT_SET: return "EventSet";
		case VK_EVENT_RESET: return "EventReset";
		case VK_INCOMPLETE: return "Incomplete";
		case VK_ERROR_OUT_OF_HOST_MEMORY: return "ErrorOutOfHostMemory";
		case VK_ERROR_OUT_OF_DEVICE_MEMORY: return "ErrorOutOfDeviceMemory";
		case VK_ERROR_INITIALIZATION_FAILED: return "ErrorInitializationFailed";
		case VK_ERROR_DEVICE_LOST: return "ErrorDeviceLost";
		case VK_ERROR_MEMORY_MAP_FAILED: return "ErrorMemoryMapFailed";
		case VK_ERROR_LAYER_NOT_PRESENT: return "ErrorLayerNotPresent";
		case VK_ERROR_EXTENSION_NOT_PRESENT: return "ErrorExtensionNotPresent";
		case VK_ERROR_FEATURE_NOT_PRESENT: return "ErrorFeatureNotPresent";
		case VK_ERROR_INCOMPATIBLE_DRIVER: return "ErrorIncompatibleDriver";
		case VK_ERROR_TOO_MANY_OBJECTS: return "ErrorTooManyObjects";
		case VK_ERROR_FORMAT_NOT_SUPPORTED: return "ErrorFormatNotSupported";
		case VK_ERROR_FRAGMENTED_POOL: return "ErrorFragmentedPool";
		case VK_ERROR_UNKNOWN: return "ErrorUnknown";
		case VK_ERROR_OUT_OF_POOL_MEMORY: return "ErrorOutOfPoolMemory";
		case VK_ERROR_INVALID_EXTERNAL_HANDLE: return "ErrorInvalidExternalHandle";
		case VK_ERROR_FRAGMENTATION: return "ErrorFragmentation";
		case VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS: return "ErrorInvalidOpaqueCaptureAddress";
		case VK_ERROR_SURFACE_LOST_KHR: return "ErrorSurfaceLostKHR";
		case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR: return "ErrorNativeWindowInUseKHR";
		case VK_SUBOPTIMAL_KHR: return "SuboptimalKHR";
		case VK_ERROR_OUT_OF_DATE_KHR: return "ErrorOutOfDateKHR";
		case VK_ERROR_INCOMPATIBLE_DISPLAY_KHR: return "ErrorIncompatibleDisplayKHR";
		case VK_ERROR_VALIDATION_FAILED_EXT: return "ErrorValidationFailedEXT";
		case VK_ERROR_INVALID_SHADER_NV: return "ErrorInvalidShaderNV";
		case VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT: return "ErrorInvalidDrmFormatModifierPlaneLayoutEXT";
		case VK_ERROR_NOT_PERMITTED_EXT: return "ErrorNotPermittedEXT";
		case VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT: return "ErrorFullScreenExclusiveModeLostEXT";
		case VK_THREAD_IDLE_KHR: return "ThreadIdleKHR";
		case VK_THREAD_DONE_KHR: return "ThreadDoneKHR";
		case VK_OPERATION_DEFERRED_KHR: return "OperationDeferredKHR";
		case VK_OPERATION_NOT_DEFERRED_KHR: return "OperationNotDeferredKHR";
		case VK_PIPELINE_COMPILE_REQUIRED_EXT: return "PipelineCompileRequiredEXT";
		default: return "";
	}
}
inline const char* name(VkStructureType val) {
	switch(val) {
		case VK_STRUCTURE_TYPE_APPLICATION_INFO: return "ApplicationInfo";
		case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO: return "InstanceCreateInfo";
		case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO: return "DeviceQueueCreateInfo";
		case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO: return "DeviceCreateInfo";
		case VK_STRUCTURE_TYPE_SUBMIT_INFO: return "SubmitInfo";
		case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO: return "MemoryAllocateInfo";
		case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE: return "MappedMemoryRange";
		case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO: return "BindSparseInfo";
		case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO: return "FenceCreateInfo";
		case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO: return "SemaphoreCreateInfo";
		case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO: return "EventCreateInfo";
		case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO: return "QueryPoolCreateInfo";
		case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO: return "BufferCreateInfo";
		case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO: return "BufferViewCreateInfo";
		case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO: return "ImageCreateInfo";
		case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO: return "ImageViewCreateInfo";
		case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO: return "ShaderModuleCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO: return "PipelineCacheCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO: return "PipelineShaderStageCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO: return "PipelineVertexInputStateCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO: return "PipelineInputAssemblyStateCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO: return "PipelineTessellationStateCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO: return "PipelineViewportStateCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO: return "PipelineRasterizationStateCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO: return "PipelineMultisampleStateCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO: return "PipelineDepthStencilStateCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO: return "PipelineColorBlendStateCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO: return "PipelineDynamicStateCreateInfo";
		case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO: return "GraphicsPipelineCreateInfo";
		case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO: return "ComputePipelineCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO: return "PipelineLayoutCreateInfo";
		case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO: return "SamplerCreateInfo";
		case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO: return "DescriptorSetLayoutCreateInfo";
		case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO: return "DescriptorPoolCreateInfo";
		case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO: return "DescriptorSetAllocateInfo";
		case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET: return "WriteDescriptorSet";
		case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET: return "CopyDescriptorSet";
		case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO: return "FramebufferCreateInfo";
		case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO: return "RenderPassCreateInfo";
		case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO: return "CommandPoolCreateInfo";
		case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO: return "CommandBufferAllocateInfo";
		case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO: return "CommandBufferInheritanceInfo";
		case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO: return "CommandBufferBeginInfo";
		case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO: return "RenderPassBeginInfo";
		case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER: return "BufferMemoryBarrier";
		case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER: return "ImageMemoryBarrier";
		case VK_STRUCTURE_TYPE_MEMORY_BARRIER: return "MemoryBarrier";
		case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO: return "LoaderInstanceCreateInfo";
		case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO: return "LoaderDeviceCreateInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES: return "PhysicalDeviceSubgroupProperties";
		case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO: return "BindBufferMemoryInfo";
		case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO: return "BindImageMemoryInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES: return "PhysicalDevice16bitStorageFeatures";
		case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS: return "MemoryDedicatedRequirements";
		case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO: return "MemoryDedicatedAllocateInfo";
		case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO: return "MemoryAllocateFlagsInfo";
		case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO: return "DeviceGroupRenderPassBeginInfo";
		case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO: return "DeviceGroupCommandBufferBeginInfo";
		case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO: return "DeviceGroupSubmitInfo";
		case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO: return "DeviceGroupBindSparseInfo";
		case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO: return "BindBufferMemoryDeviceGroupInfo";
		case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO: return "BindImageMemoryDeviceGroupInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES: return "PhysicalDeviceGroupProperties";
		case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO: return "DeviceGroupDeviceCreateInfo";
		case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2: return "BufferMemoryRequirementsInfo2";
		case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2: return "ImageMemoryRequirementsInfo2";
		case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2: return "ImageSparseMemoryRequirementsInfo2";
		case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2: return "MemoryRequirements2";
		case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2: return "SparseImageMemoryRequirements2";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: return "PhysicalDeviceFeatures2";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2: return "PhysicalDeviceProperties2";
		case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2: return "FormatProperties2";
		case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2: return "ImageFormatProperties2";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2: return "PhysicalDeviceImageFormatInfo2";
		case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2: return "QueueFamilyProperties2";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2: return "PhysicalDeviceMemoryProperties2";
		case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2: return "SparseImageFormatProperties2";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2: return "PhysicalDeviceSparseImageFormatInfo2";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES: return "PhysicalDevicePointClippingProperties";
		case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO: return "RenderPassInputAttachmentAspectCreateInfo";
		case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO: return "ImageViewUsageCreateInfo";
		case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO: return "PipelineTessellationDomainOriginStateCreateInfo";
		case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO: return "RenderPassMultiviewCreateInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES: return "PhysicalDeviceMultiviewFeatures";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES: return "PhysicalDeviceMultiviewProperties";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES: return "PhysicalDeviceVariablePointersFeatures";
		case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO: return "ProtectedSubmitInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES: return "PhysicalDeviceProtectedMemoryFeatures";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES: return "PhysicalDeviceProtectedMemoryProperties";
		case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2: return "DeviceQueueInfo2";
		case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO: return "SamplerYcbcrConversionCreateInfo";
		case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO: return "SamplerYcbcrConversionInfo";
		case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO: return "BindImagePlaneMemoryInfo";
		case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO: return "ImagePlaneMemoryRequirementsInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES: return "PhysicalDeviceSamplerYcbcrConversionFeatures";
		case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES: return "SamplerYcbcrConversionImageFormatProperties";
		case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO: return "DescriptorUpdateTemplateCreateInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO: return "PhysicalDeviceExternalImageFormatInfo";
		case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES: return "ExternalImageFormatProperties";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO: return "PhysicalDeviceExternalBufferInfo";
		case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES: return "ExternalBufferProperties";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES: return "PhysicalDeviceIdProperties";
		case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO: return "ExternalMemoryBufferCreateInfo";
		case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO: return "ExternalMemoryImageCreateInfo";
		case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO: return "ExportMemoryAllocateInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO: return "PhysicalDeviceExternalFenceInfo";
		case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES: return "ExternalFenceProperties";
		case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO: return "ExportFenceCreateInfo";
		case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO: return "ExportSemaphoreCreateInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO: return "PhysicalDeviceExternalSemaphoreInfo";
		case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES: return "ExternalSemaphoreProperties";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES: return "PhysicalDeviceMaintenance3Properties";
		case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT: return "DescriptorSetLayoutSupport";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES: return "PhysicalDeviceShaderDrawParametersFeatures";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: return "PhysicalDeviceVulkan11Features";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES: return "PhysicalDeviceVulkan11Properties";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: return "PhysicalDeviceVulkan12Features";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES: return "PhysicalDeviceVulkan12Properties";
		case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO: return "ImageFormatListCreateInfo";
		case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2: return "AttachmentDescription2";
		case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2: return "AttachmentReference2";
		case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2: return "SubpassDescription2";
		case VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2: return "SubpassDependency2";
		case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2: return "RenderPassCreateInfo2";
		case VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO: return "SubpassBeginInfo";
		case VK_STRUCTURE_TYPE_SUBPASS_END_INFO: return "SubpassEndInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES: return "PhysicalDevice8bitStorageFeatures";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES: return "PhysicalDeviceDriverProperties";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES: return "PhysicalDeviceShaderAtomicInt64Features";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES: return "PhysicalDeviceShaderFloat16Int8Features";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES: return "PhysicalDeviceFloatControlsProperties";
		case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO: return "DescriptorSetLayoutBindingFlagsCreateInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES: return "PhysicalDeviceDescriptorIndexingFeatures";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES: return "PhysicalDeviceDescriptorIndexingProperties";
		case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO: return "DescriptorSetVariableDescriptorCountAllocateInfo";
		case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT: return "DescriptorSetVariableDescriptorCountLayoutSupport";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES: return "PhysicalDeviceDepthStencilResolveProperties";
		case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE: return "SubpassDescriptionDepthStencilResolve";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES: return "PhysicalDeviceScalarBlockLayoutFeatures";
		case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO: return "ImageStencilUsageCreateInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES: return "PhysicalDeviceSamplerFilterMinmaxProperties";
		case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO: return "SamplerReductionModeCreateInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES: return "PhysicalDeviceVulkanMemoryModelFeatures";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES: return "PhysicalDeviceImagelessFramebufferFeatures";
		case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO: return "FramebufferAttachmentsCreateInfo";
		case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO: return "FramebufferAttachmentImageInfo";
		case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO: return "RenderPassAttachmentBeginInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES: return "PhysicalDeviceUniformBufferStandardLayoutFeatures";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES: return "PhysicalDeviceShaderSubgroupExtendedTypesFeatures";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES: return "PhysicalDeviceSeparateDepthStencilLayoutsFeatures";
		case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT: return "AttachmentReferenceStencilLayout";
		case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT: return "AttachmentDescriptionStencilLayout";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES: return "PhysicalDeviceHostQueryResetFeatures";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES: return "PhysicalDeviceTimelineSemaphoreFeatures";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES: return "PhysicalDeviceTimelineSemaphoreProperties";
		case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO: return "SemaphoreTypeCreateInfo";
		case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO: return "TimelineSemaphoreSubmitInfo";
		case VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO: return "SemaphoreWaitInfo";
		case VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO: return "SemaphoreSignalInfo";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES: return "PhysicalDeviceBufferDeviceAddressFeatures";
		case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO: return "BufferDeviceAddressInfo";
		case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO: return "BufferOpaqueCaptureAddressCreateInfo";
		case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO: return "MemoryOpaqueCaptureAddressAllocateInfo";
		case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO: return "DeviceMemoryOpaqueCaptureAddressInfo";
		case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR: return "SwapchainCreateInfoKHR";
		case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR: return "PresentInfoKHR";
		case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR: return "DeviceGroupPresentCapabilitiesKHR";
		case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR: return "ImageSwapchainCreateInfoKHR";
		case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR: return "BindImageMemorySwapchainInfoKHR";
		case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR: return "AcquireNextImageInfoKHR";
		case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR: return "DeviceGroupPresentInfoKHR";
		case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR: return "DeviceGroupSwapchainCreateInfoKHR";
		case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR: return "DisplayModeCreateInfoKHR";
		case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR: return "DisplaySurfaceCreateInfoKHR";
		case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR: return "DisplayPresentInfoKHR";
		case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR: return "XlibSurfaceCreateInfoKHR";
		case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR: return "XcbSurfaceCreateInfoKHR";
		case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR: return "WaylandSurfaceCreateInfoKHR";
		case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR: return "Win32SurfaceCreateInfoKHR";
		case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT: return "DebugReportCallbackCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD: return "PipelineRasterizationStateRasterizationOrderAMD";
		case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT: return "DebugMarkerObjectNameInfoEXT";
		case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT: return "DebugMarkerObjectTagInfoEXT";
		case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT: return "DebugMarkerMarkerInfoEXT";
		case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV: return "DedicatedAllocationImageCreateInfoNV";
		case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV: return "DedicatedAllocationBufferCreateInfoNV";
		case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV: return "DedicatedAllocationMemoryAllocateInfoNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: return "PhysicalDeviceTransformFeedbackFeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT: return "PhysicalDeviceTransformFeedbackPropertiesEXT";
		case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT: return "PipelineRasterizationStateStreamCreateInfoEXT";
		case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD: return "TextureLodGatherFormatPropertiesAMD";
		case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP: return "StreamDescriptorSurfaceCreateInfoGGP";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: return "PhysicalDeviceCornerSampledImageFeaturesNV";
		case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV: return "ExternalMemoryImageCreateInfoNV";
		case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV: return "ExportMemoryAllocateInfoNV";
		case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV: return "ImportMemoryWin32HandleInfoNV";
		case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV: return "ExportMemoryWin32HandleInfoNV";
		case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV: return "Win32KeyedMutexAcquireReleaseInfoNV";
		case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT: return "ValidationFlagsEXT";
		case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN: return "ViSurfaceCreateInfoNN";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT: return "PhysicalDeviceTextureCompressionAstcHdrFeaturesEXT";
		case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT: return "ImageViewAstcDecodeModeEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT: return "PhysicalDeviceAstcDecodeFeaturesEXT";
		case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR: return "ImportMemoryWin32HandleInfoKHR";
		case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR: return "ExportMemoryWin32HandleInfoKHR";
		case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR: return "MemoryWin32HandlePropertiesKHR";
		case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR: return "MemoryGetWin32HandleInfoKHR";
		case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR: return "ImportMemoryFdInfoKHR";
		case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR: return "MemoryFdPropertiesKHR";
		case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR: return "MemoryGetFdInfoKHR";
		case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR: return "Win32KeyedMutexAcquireReleaseInfoKHR";
		case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: return "ImportSemaphoreWin32HandleInfoKHR";
		case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: return "ExportSemaphoreWin32HandleInfoKHR";
		case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR: return "D3d12FenceSubmitInfoKHR";
		case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR: return "SemaphoreGetWin32HandleInfoKHR";
		case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR: return "ImportSemaphoreFdInfoKHR";
		case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR: return "SemaphoreGetFdInfoKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR: return "PhysicalDevicePushDescriptorPropertiesKHR";
		case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT: return "CommandBufferInheritanceConditionalRenderingInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: return "PhysicalDeviceConditionalRenderingFeaturesEXT";
		case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT: return "ConditionalRenderingBeginInfoEXT";
		case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR: return "PresentRegionsKHR";
		case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV: return "PipelineViewportWScalingStateCreateInfoNV";
		case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT: return "SurfaceCapabilities2EXT";
		case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT: return "DisplayPowerInfoEXT";
		case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT: return "DeviceEventInfoEXT";
		case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT: return "DisplayEventInfoEXT";
		case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT: return "SwapchainCounterCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE: return "PresentTimesInfoGOOGLE";
		case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV: return "PipelineViewportSwizzleStateCreateInfoNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT: return "PhysicalDeviceDiscardRectanglePropertiesEXT";
		case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT: return "PipelineDiscardRectangleStateCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT: return "PhysicalDeviceConservativeRasterizationPropertiesEXT";
		case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT: return "PipelineRasterizationConservativeStateCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: return "PhysicalDeviceDepthClipEnableFeaturesEXT";
		case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT: return "PipelineRasterizationDepthClipStateCreateInfoEXT";
		case VK_STRUCTURE_TYPE_HDR_METADATA_EXT: return "HdrMetadataEXT";
		case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR: return "SharedPresentSurfaceCapabilitiesKHR";
		case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR: return "ImportFenceWin32HandleInfoKHR";
		case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR: return "ExportFenceWin32HandleInfoKHR";
		case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR: return "FenceGetWin32HandleInfoKHR";
		case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR: return "ImportFenceFdInfoKHR";
		case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR: return "FenceGetFdInfoKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: return "PhysicalDevicePerformanceQueryFeaturesKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR: return "PhysicalDevicePerformanceQueryPropertiesKHR";
		case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR: return "QueryPoolPerformanceCreateInfoKHR";
		case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR: return "PerformanceQuerySubmitInfoKHR";
		case VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR: return "AcquireProfilingLockInfoKHR";
		case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR: return "PerformanceCounterKHR";
		case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR: return "PerformanceCounterDescriptionKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR: return "PhysicalDeviceSurfaceInfo2KHR";
		case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR: return "SurfaceCapabilities2KHR";
		case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR: return "SurfaceFormat2KHR";
		case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR: return "DisplayProperties2KHR";
		case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR: return "DisplayPlaneProperties2KHR";
		case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR: return "DisplayModeProperties2KHR";
		case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR: return "DisplayPlaneInfo2KHR";
		case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR: return "DisplayPlaneCapabilities2KHR";
		case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK: return "IosSurfaceCreateInfoMVK";
		case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK: return "MacosSurfaceCreateInfoMVK";
		case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT: return "DebugUtilsObjectNameInfoEXT";
		case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT: return "DebugUtilsObjectTagInfoEXT";
		case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT: return "DebugUtilsLabelEXT";
		case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT: return "DebugUtilsMessengerCallbackDataEXT";
		case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT: return "DebugUtilsMessengerCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT: return "PhysicalDeviceInlineUniformBlockFeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT: return "PhysicalDeviceInlineUniformBlockPropertiesEXT";
		case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT: return "WriteDescriptorSetInlineUniformBlockEXT";
		case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT: return "DescriptorPoolInlineUniformBlockCreateInfoEXT";
		case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT: return "SampleLocationsInfoEXT";
		case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT: return "RenderPassSampleLocationsBeginInfoEXT";
		case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT: return "PipelineSampleLocationsStateCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT: return "PhysicalDeviceSampleLocationsPropertiesEXT";
		case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT: return "MultisamplePropertiesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: return "PhysicalDeviceBlendOperationAdvancedFeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT: return "PhysicalDeviceBlendOperationAdvancedPropertiesEXT";
		case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT: return "PipelineColorBlendAdvancedStateCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV: return "PipelineCoverageToColorStateCreateInfoNV";
		case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR: return "WriteDescriptorSetAccelerationStructureKHR";
		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR: return "AccelerationStructureBuildGeometryInfoKHR";
		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR: return "AccelerationStructureDeviceAddressInfoKHR";
		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR: return "AccelerationStructureGeometryAabbsDataKHR";
		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR: return "AccelerationStructureGeometryInstancesDataKHR";
		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR: return "AccelerationStructureGeometryTrianglesDataKHR";
		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR: return "AccelerationStructureGeometryKHR";
		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR: return "AccelerationStructureVersionInfoKHR";
		case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR: return "CopyAccelerationStructureInfoKHR";
		case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR: return "CopyAccelerationStructureToMemoryInfoKHR";
		case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR: return "CopyMemoryToAccelerationStructureInfoKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR: return "PhysicalDeviceAccelerationStructureFeaturesKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR: return "PhysicalDeviceAccelerationStructurePropertiesKHR";
		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR: return "AccelerationStructureCreateInfoKHR";
		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR: return "AccelerationStructureBuildSizesInfoKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR: return "PhysicalDeviceRayTracingPipelineFeaturesKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR: return "PhysicalDeviceRayTracingPipelinePropertiesKHR";
		case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR: return "RayTracingPipelineCreateInfoKHR";
		case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR: return "RayTracingShaderGroupCreateInfoKHR";
		case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR: return "RayTracingPipelineInterfaceCreateInfoKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR: return "PhysicalDeviceRayQueryFeaturesKHR";
		case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV: return "PipelineCoverageModulationStateCreateInfoNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV: return "PhysicalDeviceShaderSmBuiltinsFeaturesNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV: return "PhysicalDeviceShaderSmBuiltinsPropertiesNV";
		case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT: return "DrmFormatModifierPropertiesListEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT: return "PhysicalDeviceImageDrmFormatModifierInfoEXT";
		case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT: return "ImageDrmFormatModifierListCreateInfoEXT";
		case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT: return "ImageDrmFormatModifierExplicitCreateInfoEXT";
		case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT: return "ImageDrmFormatModifierPropertiesEXT";
		case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT: return "ValidationCacheCreateInfoEXT";
		case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT: return "ShaderModuleValidationCacheCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR: return "PhysicalDevicePortabilitySubsetFeaturesKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR: return "PhysicalDevicePortabilitySubsetPropertiesKHR";
		case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV: return "PipelineViewportShadingRateImageStateCreateInfoNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: return "PhysicalDeviceShadingRateImageFeaturesNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV: return "PhysicalDeviceShadingRateImagePropertiesNV";
		case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV: return "PipelineViewportCoarseSampleOrderStateCreateInfoNV";
		case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV: return "RayTracingPipelineCreateInfoNV";
		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV: return "AccelerationStructureCreateInfoNV";
		case VK_STRUCTURE_TYPE_GEOMETRY_NV: return "GeometryNV";
		case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV: return "GeometryTrianglesNV";
		case VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV: return "GeometryAabbNV";
		case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV: return "BindAccelerationStructureMemoryInfoNV";
		case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV: return "WriteDescriptorSetAccelerationStructureNV";
		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV: return "AccelerationStructureMemoryRequirementsInfoNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV: return "PhysicalDeviceRayTracingPropertiesNV";
		case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV: return "RayTracingShaderGroupCreateInfoNV";
		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV: return "AccelerationStructureInfoNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: return "PhysicalDeviceRepresentativeFragmentTestFeaturesNV";
		case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV: return "PipelineRepresentativeFragmentTestStateCreateInfoNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT: return "PhysicalDeviceImageViewImageFormatInfoEXT";
		case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT: return "FilterCubicImageViewImageFormatPropertiesEXT";
		case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT: return "DeviceQueueGlobalPriorityCreateInfoEXT";
		case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT: return "ImportMemoryHostPointerInfoEXT";
		case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT: return "MemoryHostPointerPropertiesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT: return "PhysicalDeviceExternalMemoryHostPropertiesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: return "PhysicalDeviceShaderClockFeaturesKHR";
		case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD: return "PipelineCompilerControlCreateInfoAMD";
		case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT: return "CalibratedTimestampInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD: return "PhysicalDeviceShaderCorePropertiesAMD";
		case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD: return "DeviceMemoryOverallocationCreateInfoAMD";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT: return "PhysicalDeviceVertexAttributeDivisorPropertiesEXT";
		case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT: return "PipelineVertexInputDivisorStateCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT: return "PhysicalDeviceVertexAttributeDivisorFeaturesEXT";
		case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP: return "PresentFrameTokenGGP";
		case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT: return "PipelineCreationFeedbackCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV: return "PhysicalDeviceComputeShaderDerivativesFeaturesNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: return "PhysicalDeviceMeshShaderFeaturesNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV: return "PhysicalDeviceMeshShaderPropertiesNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV: return "PhysicalDeviceFragmentShaderBarycentricFeaturesNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: return "PhysicalDeviceShaderImageFootprintFeaturesNV";
		case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV: return "PipelineViewportExclusiveScissorStateCreateInfoNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: return "PhysicalDeviceExclusiveScissorFeaturesNV";
		case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV: return "CheckpointDataNV";
		case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV: return "QueueFamilyCheckpointPropertiesNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: return "PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL";
		case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL: return "QueryPoolPerformanceQueryCreateInfoINTEL";
		case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL: return "InitializePerformanceApiInfoINTEL";
		case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL: return "PerformanceMarkerInfoINTEL";
		case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL: return "PerformanceStreamMarkerInfoINTEL";
		case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL: return "PerformanceOverrideInfoINTEL";
		case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL: return "PerformanceConfigurationAcquireInfoINTEL";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT: return "PhysicalDevicePciBusInfoPropertiesEXT";
		case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD: return "DisplayNativeHdrSurfaceCapabilitiesAMD";
		case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD: return "SwapchainDisplayNativeHdrCreateInfoAMD";
		case VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA: return "ImagepipeSurfaceCreateInfoFUCHSIA";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES_KHR: return "PhysicalDeviceShaderTerminateInvocationFeaturesKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: return "PhysicalDeviceFragmentDensityMapFeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT: return "PhysicalDeviceFragmentDensityMapPropertiesEXT";
		case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT: return "RenderPassFragmentDensityMapCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT: return "PhysicalDeviceSubgroupSizeControlPropertiesEXT";
		case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT: return "PipelineShaderStageRequiredSubgroupSizeCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT: return "PhysicalDeviceSubgroupSizeControlFeaturesEXT";
		case VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR: return "FragmentShadingRateAttachmentInfoKHR";
		case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR: return "PipelineFragmentShadingRateStateCreateInfoKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR: return "PhysicalDeviceFragmentShadingRatePropertiesKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR: return "PhysicalDeviceFragmentShadingRateFeaturesKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR: return "PhysicalDeviceFragmentShadingRateKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD: return "PhysicalDeviceShaderCoreProperties2AMD";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: return "PhysicalDeviceCoherentMemoryFeaturesAMD";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT: return "PhysicalDeviceShaderImageAtomicInt64FeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT: return "PhysicalDeviceMemoryBudgetPropertiesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: return "PhysicalDeviceMemoryPriorityFeaturesEXT";
		case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT: return "MemoryPriorityAllocateInfoEXT";
		case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR: return "SurfaceProtectedCapabilitiesKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: return "PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: return "PhysicalDeviceBufferDeviceAddressFeaturesEXT";
		case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT: return "BufferDeviceAddressCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT: return "PhysicalDeviceToolPropertiesEXT";
		case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT: return "ValidationFeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: return "PhysicalDeviceCooperativeMatrixFeaturesNV";
		case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV: return "CooperativeMatrixPropertiesNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV: return "PhysicalDeviceCooperativeMatrixPropertiesNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: return "PhysicalDeviceCoverageReductionModeFeaturesNV";
		case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV: return "PipelineCoverageReductionStateCreateInfoNV";
		case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV: return "FramebufferMixedSamplesCombinationNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: return "PhysicalDeviceFragmentShaderInterlockFeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: return "PhysicalDeviceYcbcrImageArraysFeaturesEXT";
		case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT: return "SurfaceFullScreenExclusiveInfoEXT";
		case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT: return "SurfaceCapabilitiesFullScreenExclusiveEXT";
		case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT: return "SurfaceFullScreenExclusiveWin32InfoEXT";
		case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT: return "HeadlessSurfaceCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT: return "PhysicalDeviceLineRasterizationFeaturesEXT";
		case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT: return "PipelineRasterizationLineStateCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT: return "PhysicalDeviceLineRasterizationPropertiesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT: return "PhysicalDeviceShaderAtomicFloatFeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT: return "PhysicalDeviceIndexTypeUint8FeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT: return "PhysicalDeviceExtendedDynamicStateFeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: return "PhysicalDevicePipelineExecutablePropertiesFeaturesKHR";
		case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR: return "PipelineInfoKHR";
		case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR: return "PipelineExecutablePropertiesKHR";
		case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR: return "PipelineExecutableInfoKHR";
		case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR: return "PipelineExecutableStatisticKHR";
		case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR: return "PipelineExecutableInternalRepresentationKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT: return "PhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV: return "PhysicalDeviceDeviceGeneratedCommandsPropertiesNV";
		case VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV: return "GraphicsShaderGroupCreateInfoNV";
		case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV: return "GraphicsPipelineShaderGroupsCreateInfoNV";
		case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV: return "IndirectCommandsLayoutTokenNV";
		case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV: return "IndirectCommandsLayoutCreateInfoNV";
		case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV: return "GeneratedCommandsInfoNV";
		case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV: return "GeneratedCommandsMemoryRequirementsInfoNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: return "PhysicalDeviceDeviceGeneratedCommandsFeaturesNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: return "PhysicalDeviceTexelBufferAlignmentFeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT: return "PhysicalDeviceTexelBufferAlignmentPropertiesEXT";
		case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM: return "CommandBufferInheritanceRenderPassTransformInfoQCOM";
		case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM: return "RenderPassTransformBeginInfoQCOM";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT: return "PhysicalDeviceDeviceMemoryReportFeaturesEXT";
		case VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT: return "DeviceDeviceMemoryReportCreateInfoEXT";
		case VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT: return "DeviceMemoryReportCallbackDataEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT: return "PhysicalDeviceRobustness2FeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT: return "PhysicalDeviceRobustness2PropertiesEXT";
		case VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT: return "SamplerCustomBorderColorCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT: return "PhysicalDeviceCustomBorderColorPropertiesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT: return "PhysicalDeviceCustomBorderColorFeaturesEXT";
		case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR: return "PipelineLibraryCreateInfoKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT: return "PhysicalDevicePrivateDataFeaturesEXT";
		case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO_EXT: return "DevicePrivateDataCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO_EXT: return "PrivateDataSlotCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT: return "PhysicalDevicePipelineCreationCacheControlFeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: return "PhysicalDeviceDiagnosticsConfigFeaturesNV";
		case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV: return "DeviceDiagnosticsConfigCreateInfoNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES_KHR: return "PhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV: return "PhysicalDeviceFragmentShadingRateEnumsPropertiesNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV: return "PhysicalDeviceFragmentShadingRateEnumsFeaturesNV";
		case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV: return "PipelineFragmentShadingRateEnumStateCreateInfoNV";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT: return "PhysicalDeviceFragmentDensityMap2FeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT: return "PhysicalDeviceFragmentDensityMap2PropertiesEXT";
		case VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM: return "CopyCommandTransformInfoQCOM";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT: return "PhysicalDeviceImageRobustnessFeaturesEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR: return "PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR";
		case VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2_KHR: return "CopyBufferInfo2KHR";
		case VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2_KHR: return "CopyImageInfo2KHR";
		case VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2_KHR: return "CopyBufferToImageInfo2KHR";
		case VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2_KHR: return "CopyImageToBufferInfo2KHR";
		case VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2_KHR: return "BlitImageInfo2KHR";
		case VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2_KHR: return "ResolveImageInfo2KHR";
		case VK_STRUCTURE_TYPE_BUFFER_COPY_2_KHR: return "BufferCopy2KHR";
		case VK_STRUCTURE_TYPE_IMAGE_COPY_2_KHR: return "ImageCopy2KHR";
		case VK_STRUCTURE_TYPE_IMAGE_BLIT_2_KHR: return "ImageBlit2KHR";
		case VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2_KHR: return "BufferImageCopy2KHR";
		case VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2_KHR: return "ImageResolve2KHR";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT: return "PhysicalDevice4444FormatsFeaturesEXT";
		case VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT: return "DirectfbSurfaceCreateInfoEXT";
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_VALVE: return "PhysicalDeviceMutableDescriptorTypeFeaturesVALVE";
		case VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_VALVE: return "MutableDescriptorTypeCreateInfoVALVE";
		default: return "";
	}
}
inline const char* name(VkShaderStageFlagBits val) {
	switch(val) {
		case VK_SHADER_STAGE_VERTEX_BIT: return "Vertex";
		case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT: return "TessellationControl";
		case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT: return "TessellationEvaluation";
		case VK_SHADER_STAGE_GEOMETRY_BIT: return "Geometry";
		case VK_SHADER_STAGE_FRAGMENT_BIT: return "Fragment";
		case VK_SHADER_STAGE_COMPUTE_BIT: return "Compute";
		case VK_SHADER_STAGE_ALL_GRAPHICS: return "AllGraphics";
		case VK_SHADER_STAGE_ALL: return "All";
		case VK_SHADER_STAGE_RAYGEN_BIT_KHR: return "RaygenKHR";
		case VK_SHADER_STAGE_ANY_HIT_BIT_KHR: return "AnyHitKHR";
		case VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR: return "ClosestHitKHR";
		case VK_SHADER_STAGE_MISS_BIT_KHR: return "MissKHR";
		case VK_SHADER_STAGE_INTERSECTION_BIT_KHR: return "IntersectionKHR";
		case VK_SHADER_STAGE_CALLABLE_BIT_KHR: return "CallableKHR";
		case VK_SHADER_STAGE_TASK_BIT_NV: return "TaskNV";
		case VK_SHADER_STAGE_MESH_BIT_NV: return "MeshNV";
		default: return "";
	}
}
inline const char* name(VkSubgroupFeatureFlagBits val) {
	switch(val) {
		case VK_SUBGROUP_FEATURE_BASIC_BIT: return "Basic";
		case VK_SUBGROUP_FEATURE_VOTE_BIT: return "Vote";
		case VK_SUBGROUP_FEATURE_ARITHMETIC_BIT: return "Arithmetic";
		case VK_SUBGROUP_FEATURE_BALLOT_BIT: return "Ballot";
		case VK_SUBGROUP_FEATURE_SHUFFLE_BIT: return "Shuffle";
		case VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT: return "ShuffleRelative";
		case VK_SUBGROUP_FEATURE_CLUSTERED_BIT: return "Clustered";
		case VK_SUBGROUP_FEATURE_QUAD_BIT: return "Quad";
		case VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV: return "PartitionedNV";
		default: return "";
	}
}
inline const char* name(VkPeerMemoryFeatureFlagBits val) {
	switch(val) {
		case VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT: return "CopySrc";
		case VK_PEER_MEMORY_FEATURE_COPY_DST_BIT: return "CopyDst";
		case VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT: return "GenericSrc";
		case VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT: return "GenericDst";
		default: return "";
	}
}
inline const char* name(VkMemoryAllocateFlagBits val) {
	switch(val) {
		case VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT: return "DeviceMask";
		case VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT: return "DeviceAddress";
		case VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT: return "DeviceAddressCaptureReplay";
		default: return "";
	}
}
inline const char* name(VkImageAspectFlagBits val) {
	switch(val) {
		case VK_IMAGE_ASPECT_COLOR_BIT: return "Color";
		case VK_IMAGE_ASPECT_DEPTH_BIT: return "Depth";
		case VK_IMAGE_ASPECT_STENCIL_BIT: return "Stencil";
		case VK_IMAGE_ASPECT_METADATA_BIT: return "Metadata";
		case VK_IMAGE_ASPECT_PLANE_0_BIT: return "Plane0";
		case VK_IMAGE_ASPECT_PLANE_1_BIT: return "Plane1";
		case VK_IMAGE_ASPECT_PLANE_2_BIT: return "Plane2";
		case VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT: return "MemoryPlane0EXT";
		case VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT: return "MemoryPlane1EXT";
		case VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT: return "MemoryPlane2EXT";
		case VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT: return "MemoryPlane3EXT";
		default: return "";
	}
}
inline const char* name(VkSparseImageFormatFlagBits val) {
	switch(val) {
		case VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT: return "SingleMiptail";
		case VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT: return "AlignedMipSize";
		case VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT: return "NonstandardBlockSize";
		default: return "";
	}
}
inline const char* name(VkPhysicalDeviceType val) {
	switch(val) {
		case VK_PHYSICAL_DEVICE_TYPE_OTHER: return "Other";
		case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU: return "IntegratedGpu";
		case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU: return "DiscreteGpu";
		case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU: return "VirtualGpu";
		case VK_PHYSICAL_DEVICE_TYPE_CPU: return "Cpu";
		default: return "";
	}
}
inline const char* name(VkSampleCountFlagBits val) {
	switch(val) {
		case VK_SAMPLE_COUNT_1_BIT: return "1";
		case VK_SAMPLE_COUNT_2_BIT: return "2";
		case VK_SAMPLE_COUNT_4_BIT: return "4";
		case VK_SAMPLE_COUNT_8_BIT: return "8";
		case VK_SAMPLE_COUNT_16_BIT: return "16";
		case VK_SAMPLE_COUNT_32_BIT: return "32";
		case VK_SAMPLE_COUNT_64_BIT: return "64";
		default: return "";
	}
}
inline const char* name(VkFormatFeatureFlagBits val) {
	switch(val) {
		case VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT: return "SampledImage";
		case VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT: return "StorageImage";
		case VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT: return "StorageImageAtomic";
		case VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT: return "UniformTexelBuffer";
		case VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT: return "StorageTexelBuffer";
		case VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT: return "StorageTexelBufferAtomic";
		case VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT: return "VertexBuffer";
		case VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT: return "ColorAttachment";
		case VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT: return "ColorAttachmentBlend";
		case VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT: return "DepthStencilAttachment";
		case VK_FORMAT_FEATURE_BLIT_SRC_BIT: return "BlitSrc";
		case VK_FORMAT_FEATURE_BLIT_DST_BIT: return "BlitDst";
		case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT: return "SampledImageFilterLinear";
		case VK_FORMAT_FEATURE_TRANSFER_SRC_BIT: return "TransferSrc";
		case VK_FORMAT_FEATURE_TRANSFER_DST_BIT: return "TransferDst";
		case VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT: return "MidpointChromaSamples";
		case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT: return "SampledImageYcbcrConversionLinearFilter";
		case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT: return "SampledImageYcbcrConversionSeparateReconstructionFilter";
		case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT: return "SampledImageYcbcrConversionChromaReconstructionExplicit";
		case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT: return "SampledImageYcbcrConversionChromaReconstructionExplicitForceable";
		case VK_FORMAT_FEATURE_DISJOINT_BIT: return "Disjoint";
		case VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT: return "CositedChromaSamples";
		case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT: return "SampledImageFilterMinmax";
		case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG: return "SampledImageFilterCubicIMG";
		case VK_FORMAT_FEATURE_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR: return "AccelerationStructureVertexBufferKHR";
		case VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT: return "FragmentDensityMapEXT";
		case VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR: return "FragmentShadingRateAttachmentKHR";
		default: return "";
	}
}
inline const char* name(VkFormat val) {
	switch(val) {
		case VK_FORMAT_UNDEFINED: return "Undefined";
		case VK_FORMAT_R4G4_UNORM_PACK8: return "R4g4UnormPack8";
		case VK_FORMAT_R4G4B4A4_UNORM_PACK16: return "R4g4b4a4UnormPack16";
		case VK_FORMAT_B4G4R4A4_UNORM_PACK16: return "B4g4r4a4UnormPack16";
		case VK_FORMAT_R5G6B5_UNORM_PACK16: return "R5g6b5UnormPack16";
		case VK_FORMAT_B5G6R5_UNORM_PACK16: return "B5g6r5UnormPack16";
		case VK_FORMAT_R5G5B5A1_UNORM_PACK16: return "R5g5b5a1UnormPack16";
		case VK_FORMAT_B5G5R5A1_UNORM_PACK16: return "B5g5r5a1UnormPack16";
		case VK_FORMAT_A1R5G5B5_UNORM_PACK16: return "A1r5g5b5UnormPack16";
		case VK_FORMAT_R8_UNORM: return "R8Unorm";
		case VK_FORMAT_R8_SNORM: return "R8Snorm";
		case VK_FORMAT_R8_USCALED: return "R8Uscaled";
		case VK_FORMAT_R8_SSCALED: return "R8Sscaled";
		case VK_FORMAT_R8_UINT: return "R8Uint";
		case VK_FORMAT_R8_SINT: return "R8Sint";
		case VK_FORMAT_R8_SRGB: return "R8Srgb";
		case VK_FORMAT_R8G8_UNORM: return "R8g8Unorm";
		case VK_FORMAT_R8G8_SNORM: return "R8g8Snorm";
		case VK_FORMAT_R8G8_USCALED: return "R8g8Uscaled";
		case VK_FORMAT_R8G8_SSCALED: return "R8g8Sscaled";
		case VK_FORMAT_R8G8_UINT: return "R8g8Uint";
		case VK_FORMAT_R8G8_SINT: return "R8g8Sint";
		case VK_FORMAT_R8G8_SRGB: return "R8g8Srgb";
		case VK_FORMAT_R8G8B8_UNORM: return "R8g8b8Unorm";
		case VK_FORMAT_R8G8B8_SNORM: return "R8g8b8Snorm";
		case VK_FORMAT_R8G8B8_USCALED: return "R8g8b8Uscaled";
		case VK_FORMAT_R8G8B8_SSCALED: return "R8g8b8Sscaled";
		case VK_FORMAT_R8G8B8_UINT: return "R8g8b8Uint";
		case VK_FORMAT_R8G8B8_SINT: return "R8g8b8Sint";
		case VK_FORMAT_R8G8B8_SRGB: return "R8g8b8Srgb";
		case VK_FORMAT_B8G8R8_UNORM: return "B8g8r8Unorm";
		case VK_FORMAT_B8G8R8_SNORM: return "B8g8r8Snorm";
		case VK_FORMAT_B8G8R8_USCALED: return "B8g8r8Uscaled";
		case VK_FORMAT_B8G8R8_SSCALED: return "B8g8r8Sscaled";
		case VK_FORMAT_B8G8R8_UINT: return "B8g8r8Uint";
		case VK_FORMAT_B8G8R8_SINT: return "B8g8r8Sint";
		case VK_FORMAT_B8G8R8_SRGB: return "B8g8r8Srgb";
		case VK_FORMAT_R8G8B8A8_UNORM: return "R8g8b8a8Unorm";
		case VK_FORMAT_R8G8B8A8_SNORM: return "R8g8b8a8Snorm";
		case VK_FORMAT_R8G8B8A8_USCALED: return "R8g8b8a8Uscaled";
		case VK_FORMAT_R8G8B8A8_SSCALED: return "R8g8b8a8Sscaled";
		case VK_FORMAT_R8G8B8A8_UINT: return "R8g8b8a8Uint";
		case VK_FORMAT_R8G8B8A8_SINT: return "R8g8b8a8Sint";
		case VK_FORMAT_R8G8B8A8_SRGB: return "R8g8b8a8Srgb";
		case VK_FORMAT_B8G8R8A8_UNORM: return "B8g8r8a8Unorm";
		case VK_FORMAT_B8G8R8A8_SNORM: return "B8g8r8a8Snorm";
		case VK_FORMAT_B8G8R8A8_USCALED: return "B8g8r8a8Uscaled";
		case VK_FORMAT_B8G8R8A8_SSCALED: return "B8g8r8a8Sscaled";
		case VK_FORMAT_B8G8R8A8_UINT: return "B8g8r8a8Uint";
		case VK_FORMAT_B8G8R8A8_SINT: return "B8g8r8a8Sint";
		case VK_FORMAT_B8G8R8A8_SRGB: return "B8g8r8a8Srgb";
		case VK_FORMAT_A8B8G8R8_UNORM_PACK32: return "A8b8g8r8UnormPack32";
		case VK_FORMAT_A8B8G8R8_SNORM_PACK32: return "A8b8g8r8SnormPack32";
		case VK_FORMAT_A8B8G8R8_USCALED_PACK32: return "A8b8g8r8UscaledPack32";
		case VK_FORMAT_A8B8G8R8_SSCALED_PACK32: return "A8b8g8r8SscaledPack32";
		case VK_FORMAT_A8B8G8R8_UINT_PACK32: return "A8b8g8r8UintPack32";
		case VK_FORMAT_A8B8G8R8_SINT_PACK32: return "A8b8g8r8SintPack32";
		case VK_FORMAT_A8B8G8R8_SRGB_PACK32: return "A8b8g8r8SrgbPack32";
		case VK_FORMAT_A2R10G10B10_UNORM_PACK32: return "A2r10g10b10UnormPack32";
		case VK_FORMAT_A2R10G10B10_SNORM_PACK32: return "A2r10g10b10SnormPack32";
		case VK_FORMAT_A2R10G10B10_USCALED_PACK32: return "A2r10g10b10UscaledPack32";
		case VK_FORMAT_A2R10G10B10_SSCALED_PACK32: return "A2r10g10b10SscaledPack32";
		case VK_FORMAT_A2R10G10B10_UINT_PACK32: return "A2r10g10b10UintPack32";
		case VK_FORMAT_A2R10G10B10_SINT_PACK32: return "A2r10g10b10SintPack32";
		case VK_FORMAT_A2B10G10R10_UNORM_PACK32: return "A2b10g10r10UnormPack32";
		case VK_FORMAT_A2B10G10R10_SNORM_PACK32: return "A2b10g10r10SnormPack32";
		case VK_FORMAT_A2B10G10R10_USCALED_PACK32: return "A2b10g10r10UscaledPack32";
		case VK_FORMAT_A2B10G10R10_SSCALED_PACK32: return "A2b10g10r10SscaledPack32";
		case VK_FORMAT_A2B10G10R10_UINT_PACK32: return "A2b10g10r10UintPack32";
		case VK_FORMAT_A2B10G10R10_SINT_PACK32: return "A2b10g10r10SintPack32";
		case VK_FORMAT_R16_UNORM: return "R16Unorm";
		case VK_FORMAT_R16_SNORM: return "R16Snorm";
		case VK_FORMAT_R16_USCALED: return "R16Uscaled";
		case VK_FORMAT_R16_SSCALED: return "R16Sscaled";
		case VK_FORMAT_R16_UINT: return "R16Uint";
		case VK_FORMAT_R16_SINT: return "R16Sint";
		case VK_FORMAT_R16_SFLOAT: return "R16Sfloat";
		case VK_FORMAT_R16G16_UNORM: return "R16g16Unorm";
		case VK_FORMAT_R16G16_SNORM: return "R16g16Snorm";
		case VK_FORMAT_R16G16_USCALED: return "R16g16Uscaled";
		case VK_FORMAT_R16G16_SSCALED: return "R16g16Sscaled";
		case VK_FORMAT_R16G16_UINT: return "R16g16Uint";
		case VK_FORMAT_R16G16_SINT: return "R16g16Sint";
		case VK_FORMAT_R16G16_SFLOAT: return "R16g16Sfloat";
		case VK_FORMAT_R16G16B16_UNORM: return "R16g16b16Unorm";
		case VK_FORMAT_R16G16B16_SNORM: return "R16g16b16Snorm";
		case VK_FORMAT_R16G16B16_USCALED: return "R16g16b16Uscaled";
		case VK_FORMAT_R16G16B16_SSCALED: return "R16g16b16Sscaled";
		case VK_FORMAT_R16G16B16_UINT: return "R16g16b16Uint";
		case VK_FORMAT_R16G16B16_SINT: return "R16g16b16Sint";
		case VK_FORMAT_R16G16B16_SFLOAT: return "R16g16b16Sfloat";
		case VK_FORMAT_R16G16B16A16_UNORM: return "R16g16b16a16Unorm";
		case VK_FORMAT_R16G16B16A16_SNORM: return "R16g16b16a16Snorm";
		case VK_FORMAT_R16G16B16A16_USCALED: return "R16g16b16a16Uscaled";
		case VK_FORMAT_R16G16B16A16_SSCALED: return "R16g16b16a16Sscaled";
		case VK_FORMAT_R16G16B16A16_UINT: return "R16g16b16a16Uint";
		case VK_FORMAT_R16G16B16A16_SINT: return "R16g16b16a16Sint";
		case VK_FORMAT_R16G16B16A16_SFLOAT: return "R16g16b16a16Sfloat";
		case VK_FORMAT_R32_UINT: return "R32Uint";
		case VK_FORMAT_R32_SINT: return "R32Sint";
		case VK_FORMAT_R32_SFLOAT: return "R32Sfloat";
		case VK_FORMAT_R32G32_UINT: return "R32g32Uint";
		case VK_FORMAT_R32G32_SINT: return "R32g32Sint";
		case VK_FORMAT_R32G32_SFLOAT: return "R32g32Sfloat";
		case VK_FORMAT_R32G32B32_UINT: return "R32g32b32Uint";
		case VK_FORMAT_R32G32B32_SINT: return "R32g32b32Sint";
		case VK_FORMAT_R32G32B32_SFLOAT: return "R32g32b32Sfloat";
		case VK_FORMAT_R32G32B32A32_UINT: return "R32g32b32a32Uint";
		case VK_FORMAT_R32G32B32A32_SINT: return "R32g32b32a32Sint";
		case VK_FORMAT_R32G32B32A32_SFLOAT: return "R32g32b32a32Sfloat";
		case VK_FORMAT_R64_UINT: return "R64Uint";
		case VK_FORMAT_R64_SINT: return "R64Sint";
		case VK_FORMAT_R64_SFLOAT: return "R64Sfloat";
		case VK_FORMAT_R64G64_UINT: return "R64g64Uint";
		case VK_FORMAT_R64G64_SINT: return "R64g64Sint";
		case VK_FORMAT_R64G64_SFLOAT: return "R64g64Sfloat";
		case VK_FORMAT_R64G64B64_UINT: return "R64g64b64Uint";
		case VK_FORMAT_R64G64B64_SINT: return "R64g64b64Sint";
		case VK_FORMAT_R64G64B64_SFLOAT: return "R64g64b64Sfloat";
		case VK_FORMAT_R64G64B64A64_UINT: return "R64g64b64a64Uint";
		case VK_FORMAT_R64G64B64A64_SINT: return "R64g64b64a64Sint";
		case VK_FORMAT_R64G64B64A64_SFLOAT: return "R64g64b64a64Sfloat";
		case VK_FORMAT_B10G11R11_UFLOAT_PACK32: return "B10g11r11UfloatPack32";
		case VK_FORMAT_E5B9G9R9_UFLOAT_PACK32: return "E5b9g9r9UfloatPack32";
		case VK_FORMAT_D16_UNORM: return "D16Unorm";
		case VK_FORMAT_X8_D24_UNORM_PACK32: return "X8D24UnormPack32";
		case VK_FORMAT_D32_SFLOAT: return "D32Sfloat";
		case VK_FORMAT_S8_UINT: return "S8Uint";
		case VK_FORMAT_D16_UNORM_S8_UINT: return "D16UnormS8Uint";
		case VK_FORMAT_D24_UNORM_S8_UINT: return "D24UnormS8Uint";
		case VK_FORMAT_D32_SFLOAT_S8_UINT: return "D32SfloatS8Uint";
		case VK_FORMAT_BC1_RGB_UNORM_BLOCK: return "Bc1RgbUnormBlock";
		case VK_FORMAT_BC1_RGB_SRGB_BLOCK: return "Bc1RgbSrgbBlock";
		case VK_FORMAT_BC1_RGBA_UNORM_BLOCK: return "Bc1RgbaUnormBlock";
		case VK_FORMAT_BC1_RGBA_SRGB_BLOCK: return "Bc1RgbaSrgbBlock";
		case VK_FORMAT_BC2_UNORM_BLOCK: return "Bc2UnormBlock";
		case VK_FORMAT_BC2_SRGB_BLOCK: return "Bc2SrgbBlock";
		case VK_FORMAT_BC3_UNORM_BLOCK: return "Bc3UnormBlock";
		case VK_FORMAT_BC3_SRGB_BLOCK: return "Bc3SrgbBlock";
		case VK_FORMAT_BC4_UNORM_BLOCK: return "Bc4UnormBlock";
		case VK_FORMAT_BC4_SNORM_BLOCK: return "Bc4SnormBlock";
		case VK_FORMAT_BC5_UNORM_BLOCK: return "Bc5UnormBlock";
		case VK_FORMAT_BC5_SNORM_BLOCK: return "Bc5SnormBlock";
		case VK_FORMAT_BC6H_UFLOAT_BLOCK: return "Bc6hUfloatBlock";
		case VK_FORMAT_BC6H_SFLOAT_BLOCK: return "Bc6hSfloatBlock";
		case VK_FORMAT_BC7_UNORM_BLOCK: return "Bc7UnormBlock";
		case VK_FORMAT_BC7_SRGB_BLOCK: return "Bc7SrgbBlock";
		case VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK: return "Etc2R8g8b8UnormBlock";
		case VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK: return "Etc2R8g8b8SrgbBlock";
		case VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK: return "Etc2R8g8b8a1UnormBlock";
		case VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK: return "Etc2R8g8b8a1SrgbBlock";
		case VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK: return "Etc2R8g8b8a8UnormBlock";
		case VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK: return "Etc2R8g8b8a8SrgbBlock";
		case VK_FORMAT_EAC_R11_UNORM_BLOCK: return "EacR11UnormBlock";
		case VK_FORMAT_EAC_R11_SNORM_BLOCK: return "EacR11SnormBlock";
		case VK_FORMAT_EAC_R11G11_UNORM_BLOCK: return "EacR11g11UnormBlock";
		case VK_FORMAT_EAC_R11G11_SNORM_BLOCK: return "EacR11g11SnormBlock";
		case VK_FORMAT_ASTC_4x4_UNORM_BLOCK: return "Astc4x4UnormBlock";
		case VK_FORMAT_ASTC_4x4_SRGB_BLOCK: return "Astc4x4SrgbBlock";
		case VK_FORMAT_ASTC_5x4_UNORM_BLOCK: return "Astc5x4UnormBlock";
		case VK_FORMAT_ASTC_5x4_SRGB_BLOCK: return "Astc5x4SrgbBlock";
		case VK_FORMAT_ASTC_5x5_UNORM_BLOCK: return "Astc5x5UnormBlock";
		case VK_FORMAT_ASTC_5x5_SRGB_BLOCK: return "Astc5x5SrgbBlock";
		case VK_FORMAT_ASTC_6x5_UNORM_BLOCK: return "Astc6x5UnormBlock";
		case VK_FORMAT_ASTC_6x5_SRGB_BLOCK: return "Astc6x5SrgbBlock";
		case VK_FORMAT_ASTC_6x6_UNORM_BLOCK: return "Astc6x6UnormBlock";
		case VK_FORMAT_ASTC_6x6_SRGB_BLOCK: return "Astc6x6SrgbBlock";
		case VK_FORMAT_ASTC_8x5_UNORM_BLOCK: return "Astc8x5UnormBlock";
		case VK_FORMAT_ASTC_8x5_SRGB_BLOCK: return "Astc8x5SrgbBlock";
		case VK_FORMAT_ASTC_8x6_UNORM_BLOCK: return "Astc8x6UnormBlock";
		case VK_FORMAT_ASTC_8x6_SRGB_BLOCK: return "Astc8x6SrgbBlock";
		case VK_FORMAT_ASTC_8x8_UNORM_BLOCK: return "Astc8x8UnormBlock";
		case VK_FORMAT_ASTC_8x8_SRGB_BLOCK: return "Astc8x8SrgbBlock";
		case VK_FORMAT_ASTC_10x5_UNORM_BLOCK: return "Astc10x5UnormBlock";
		case VK_FORMAT_ASTC_10x5_SRGB_BLOCK: return "Astc10x5SrgbBlock";
		case VK_FORMAT_ASTC_10x6_UNORM_BLOCK: return "Astc10x6UnormBlock";
		case VK_FORMAT_ASTC_10x6_SRGB_BLOCK: return "Astc10x6SrgbBlock";
		case VK_FORMAT_ASTC_10x8_UNORM_BLOCK: return "Astc10x8UnormBlock";
		case VK_FORMAT_ASTC_10x8_SRGB_BLOCK: return "Astc10x8SrgbBlock";
		case VK_FORMAT_ASTC_10x10_UNORM_BLOCK: return "Astc10x10UnormBlock";
		case VK_FORMAT_ASTC_10x10_SRGB_BLOCK: return "Astc10x10SrgbBlock";
		case VK_FORMAT_ASTC_12x10_UNORM_BLOCK: return "Astc12x10UnormBlock";
		case VK_FORMAT_ASTC_12x10_SRGB_BLOCK: return "Astc12x10SrgbBlock";
		case VK_FORMAT_ASTC_12x12_UNORM_BLOCK: return "Astc12x12UnormBlock";
		case VK_FORMAT_ASTC_12x12_SRGB_BLOCK: return "Astc12x12SrgbBlock";
		case VK_FORMAT_G8B8G8R8_422_UNORM: return "G8b8g8r8422Unorm";
		case VK_FORMAT_B8G8R8G8_422_UNORM: return "B8g8r8g8422Unorm";
		case VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM: return "G8B8R83plane420Unorm";
		case VK_FORMAT_G8_B8R8_2PLANE_420_UNORM: return "G8B8r82plane420Unorm";
		case VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM: return "G8B8R83plane422Unorm";
		case VK_FORMAT_G8_B8R8_2PLANE_422_UNORM: return "G8B8r82plane422Unorm";
		case VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM: return "G8B8R83plane444Unorm";
		case VK_FORMAT_R10X6_UNORM_PACK16: return "R10x6UnormPack16";
		case VK_FORMAT_R10X6G10X6_UNORM_2PACK16: return "R10x6g10x6Unorm2pack16";
		case VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16: return "R10x6g10x6b10x6a10x6Unorm4pack16";
		case VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16: return "G10x6b10x6g10x6r10x6422Unorm4pack16";
		case VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16: return "B10x6g10x6r10x6g10x6422Unorm4pack16";
		case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16: return "G10x6B10x6R10x63plane420Unorm3pack16";
		case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16: return "G10x6B10x6r10x62plane420Unorm3pack16";
		case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16: return "G10x6B10x6R10x63plane422Unorm3pack16";
		case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16: return "G10x6B10x6r10x62plane422Unorm3pack16";
		case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16: return "G10x6B10x6R10x63plane444Unorm3pack16";
		case VK_FORMAT_R12X4_UNORM_PACK16: return "R12x4UnormPack16";
		case VK_FORMAT_R12X4G12X4_UNORM_2PACK16: return "R12x4g12x4Unorm2pack16";
		case VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16: return "R12x4g12x4b12x4a12x4Unorm4pack16";
		case VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16: return "G12x4b12x4g12x4r12x4422Unorm4pack16";
		case VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16: return "B12x4g12x4r12x4g12x4422Unorm4pack16";
		case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16: return "G12x4B12x4R12x43plane420Unorm3pack16";
		case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16: return "G12x4B12x4r12x42plane420Unorm3pack16";
		case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16: return "G12x4B12x4R12x43plane422Unorm3pack16";
		case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16: return "G12x4B12x4r12x42plane422Unorm3pack16";
		case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16: return "G12x4B12x4R12x43plane444Unorm3pack16";
		case VK_FORMAT_G16B16G16R16_422_UNORM: return "G16b16g16r16422Unorm";
		case VK_FORMAT_B16G16R16G16_422_UNORM: return "B16g16r16g16422Unorm";
		case VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM: return "G16B16R163plane420Unorm";
		case VK_FORMAT_G16_B16R16_2PLANE_420_UNORM: return "G16B16r162plane420Unorm";
		case VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM: return "G16B16R163plane422Unorm";
		case VK_FORMAT_G16_B16R16_2PLANE_422_UNORM: return "G16B16r162plane422Unorm";
		case VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM: return "G16B16R163plane444Unorm";
		case VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG: return "Pvrtc12bppUnormBlockIMG";
		case VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG: return "Pvrtc14bppUnormBlockIMG";
		case VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG: return "Pvrtc22bppUnormBlockIMG";
		case VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG: return "Pvrtc24bppUnormBlockIMG";
		case VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG: return "Pvrtc12bppSrgbBlockIMG";
		case VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG: return "Pvrtc14bppSrgbBlockIMG";
		case VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG: return "Pvrtc22bppSrgbBlockIMG";
		case VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG: return "Pvrtc24bppSrgbBlockIMG";
		case VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT: return "Astc4x4SfloatBlockEXT";
		case VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT: return "Astc5x4SfloatBlockEXT";
		case VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT: return "Astc5x5SfloatBlockEXT";
		case VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT: return "Astc6x5SfloatBlockEXT";
		case VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT: return "Astc6x6SfloatBlockEXT";
		case VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT: return "Astc8x5SfloatBlockEXT";
		case VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT: return "Astc8x6SfloatBlockEXT";
		case VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT: return "Astc8x8SfloatBlockEXT";
		case VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT: return "Astc10x5SfloatBlockEXT";
		case VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT: return "Astc10x6SfloatBlockEXT";
		case VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT: return "Astc10x8SfloatBlockEXT";
		case VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT: return "Astc10x10SfloatBlockEXT";
		case VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT: return "Astc12x10SfloatBlockEXT";
		case VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT: return "Astc12x12SfloatBlockEXT";
		case VK_FORMAT_A4R4G4B4_UNORM_PACK16_EXT: return "A4r4g4b4UnormPack16EXT";
		case VK_FORMAT_A4B4G4R4_UNORM_PACK16_EXT: return "A4b4g4r4UnormPack16EXT";
		default: return "";
	}
}
inline const char* name(VkImageType val) {
	switch(val) {
		case VK_IMAGE_TYPE_1D: return "1d";
		case VK_IMAGE_TYPE_2D: return "2d";
		case VK_IMAGE_TYPE_3D: return "3d";
		default: return "";
	}
}
inline const char* name(VkImageTiling val) {
	switch(val) {
		case VK_IMAGE_TILING_OPTIMAL: return "Optimal";
		case VK_IMAGE_TILING_LINEAR: return "Linear";
		case VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT: return "DrmFormatModifierEXT";
		default: return "";
	}
}
inline const char* name(VkImageUsageFlagBits val) {
	switch(val) {
		case VK_IMAGE_USAGE_TRANSFER_SRC_BIT: return "TransferSrc";
		case VK_IMAGE_USAGE_TRANSFER_DST_BIT: return "TransferDst";
		case VK_IMAGE_USAGE_SAMPLED_BIT: return "Sampled";
		case VK_IMAGE_USAGE_STORAGE_BIT: return "Storage";
		case VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT: return "ColorAttachment";
		case VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT: return "DepthStencilAttachment";
		case VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT: return "TransientAttachment";
		case VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT: return "InputAttachment";
		case VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV: return "ShadingRateImageNV";
		case VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT: return "FragmentDensityMapEXT";
		default: return "";
	}
}
inline const char* name(VkImageCreateFlagBits val) {
	switch(val) {
		case VK_IMAGE_CREATE_SPARSE_BINDING_BIT: return "SparseBinding";
		case VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT: return "SparseResidency";
		case VK_IMAGE_CREATE_SPARSE_ALIASED_BIT: return "SparseAliased";
		case VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT: return "MutableFormat";
		case VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT: return "CubeCompatible";
		case VK_IMAGE_CREATE_ALIAS_BIT: return "Alias";
		case VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT: return "SplitInstanceBindRegions";
		case VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT: return "2dArrayCompatible";
		case VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT: return "BlockTexelViewCompatible";
		case VK_IMAGE_CREATE_EXTENDED_USAGE_BIT: return "ExtendedUsage";
		case VK_IMAGE_CREATE_PROTECTED_BIT: return "Protected";
		case VK_IMAGE_CREATE_DISJOINT_BIT: return "Disjoint";
		case VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV: return "CornerSampledNV";
		case VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT: return "SampleLocationsCompatibleDepthEXT";
		case VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT: return "SubsampledEXT";
		default: return "";
	}
}
inline const char* name(VkQueueFlagBits val) {
	switch(val) {
		case VK_QUEUE_GRAPHICS_BIT: return "Graphics";
		case VK_QUEUE_COMPUTE_BIT: return "Compute";
		case VK_QUEUE_TRANSFER_BIT: return "Transfer";
		case VK_QUEUE_SPARSE_BINDING_BIT: return "SparseBinding";
		case VK_QUEUE_PROTECTED_BIT: return "Protected";
		default: return "";
	}
}
inline const char* name(VkMemoryPropertyFlagBits val) {
	switch(val) {
		case VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT: return "DeviceLocal";
		case VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT: return "HostVisible";
		case VK_MEMORY_PROPERTY_HOST_COHERENT_BIT: return "HostCoherent";
		case VK_MEMORY_PROPERTY_HOST_CACHED_BIT: return "HostCached";
		case VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT: return "LazilyAllocated";
		case VK_MEMORY_PROPERTY_PROTECTED_BIT: return "Protected";
		case VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD: return "DeviceCoherentAMD";
		case VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD: return "DeviceUncachedAMD";
		default: return "";
	}
}
inline const char* name(VkMemoryHeapFlagBits val) {
	switch(val) {
		case VK_MEMORY_HEAP_DEVICE_LOCAL_BIT: return "DeviceLocal";
		case VK_MEMORY_HEAP_MULTI_INSTANCE_BIT: return "MultiInstance";
		default: return "";
	}
}
inline const char* name(VkPointClippingBehavior val) {
	switch(val) {
		case VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES: return "AllClipPlanes";
		case VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY: return "UserClipPlanesOnly";
		default: return "";
	}
}
inline const char* name(VkTessellationDomainOrigin val) {
	switch(val) {
		case VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT: return "UpperLeft";
		case VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT: return "LowerLeft";
		default: return "";
	}
}
inline const char* name(VkDeviceQueueCreateFlagBits val) {
	switch(val) {
		case VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT: return "Protected";
		default: return "";
	}
}
inline const char* name(VkSamplerYcbcrModelConversion val) {
	switch(val) {
		case VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY: return "RgbIdentity";
		case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY: return "YcbcrIdentity";
		case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709: return "Ycbcr709";
		case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601: return "Ycbcr601";
		case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020: return "Ycbcr2020";
		default: return "";
	}
}
inline const char* name(VkSamplerYcbcrRange val) {
	switch(val) {
		case VK_SAMPLER_YCBCR_RANGE_ITU_FULL: return "ItuFull";
		case VK_SAMPLER_YCBCR_RANGE_ITU_NARROW: return "ItuNarrow";
		default: return "";
	}
}
inline const char* name(VkComponentSwizzle val) {
	switch(val) {
		case VK_COMPONENT_SWIZZLE_IDENTITY: return "Identity";
		case VK_COMPONENT_SWIZZLE_ZERO: return "Zero";
		case VK_COMPONENT_SWIZZLE_ONE: return "One";
		case VK_COMPONENT_SWIZZLE_R: return "R";
		case VK_COMPONENT_SWIZZLE_G: return "G";
		case VK_COMPONENT_SWIZZLE_B: return "B";
		case VK_COMPONENT_SWIZZLE_A: return "A";
		default: return "";
	}
}
inline const char* name(VkChromaLocation val) {
	switch(val) {
		case VK_CHROMA_LOCATION_COSITED_EVEN: return "CositedEven";
		case VK_CHROMA_LOCATION_MIDPOINT: return "Midpoint";
		default: return "";
	}
}
inline const char* name(VkFilter val) {
	switch(val) {
		case VK_FILTER_NEAREST: return "Nearest";
		case VK_FILTER_LINEAR: return "Linear";
		case VK_FILTER_CUBIC_IMG: return "CubicIMG";
		default: return "";
	}
}
inline const char* name(VkSystemAllocationScope val) {
	switch(val) {
		case VK_SYSTEM_ALLOCATION_SCOPE_COMMAND: return "Command";
		case VK_SYSTEM_ALLOCATION_SCOPE_OBJECT: return "Object";
		case VK_SYSTEM_ALLOCATION_SCOPE_CACHE: return "Cache";
		case VK_SYSTEM_ALLOCATION_SCOPE_DEVICE: return "Device";
		case VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE: return "Instance";
		default: return "";
	}
}
inline const char* name(VkInternalAllocationType val) {
	switch(val) {
		case VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE: return "Executable";
		default: return "";
	}
}
inline const char* name(VkDescriptorUpdateTemplateType val) {
	switch(val) {
		case VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET: return "DescriptorSet";
		case VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR: return "PushDescriptorsKHR";
		default: return "";
	}
}
inline const char* name(VkDescriptorType val) {
	switch(val) {
		case VK_DESCRIPTOR_TYPE_SAMPLER: return "Sampler";
		case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER: return "CombinedImageSampler";
		case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE: return "SampledImage";
		case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE: return "StorageImage";
		case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER: return "UniformTexelBuffer";
		case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER: return "StorageTexelBuffer";
		case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER: return "UniformBuffer";
		case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER: return "StorageBuffer";
		case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC: return "UniformBufferDynamic";
		case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC: return "StorageBufferDynamic";
		case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT: return "InputAttachment";
		case VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT: return "InlineUniformBlockEXT";
		case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR: return "AccelerationStructureKHR";
		case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV: return "AccelerationStructureNV";
		case VK_DESCRIPTOR_TYPE_MUTABLE_VALVE: return "MutableVALVE";
		default: return "";
	}
}
inline const char* name(VkPipelineBindPoint val) {
	switch(val) {
		case VK_PIPELINE_BIND_POINT_GRAPHICS: return "Graphics";
		case VK_PIPELINE_BIND_POINT_COMPUTE: return "Compute";
		case VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR: return "RayTracingKHR";
		default: return "";
	}
}
inline const char* name(VkExternalMemoryHandleTypeFlagBits val) {
	switch(val) {
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT: return "OpaqueFd";
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT: return "OpaqueWin32";
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT: return "OpaqueWin32Kmt";
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT: return "D3d11Texture";
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT: return "D3d11TextureKmt";
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT: return "D3d12Heap";
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT: return "D3d12Resource";
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT: return "DmaBufEXT";
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT: return "HostAllocationEXT";
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT: return "HostMappedForeignMemoryEXT";
		default: return "";
	}
}
inline const char* name(VkExternalMemoryFeatureFlagBits val) {
	switch(val) {
		case VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT: return "DedicatedOnly";
		case VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT: return "Exportable";
		case VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT: return "Importable";
		default: return "";
	}
}
inline const char* name(VkBufferCreateFlagBits val) {
	switch(val) {
		case VK_BUFFER_CREATE_SPARSE_BINDING_BIT: return "SparseBinding";
		case VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT: return "SparseResidency";
		case VK_BUFFER_CREATE_SPARSE_ALIASED_BIT: return "SparseAliased";
		case VK_BUFFER_CREATE_PROTECTED_BIT: return "Protected";
		case VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT: return "DeviceAddressCaptureReplay";
		default: return "";
	}
}
inline const char* name(VkBufferUsageFlagBits val) {
	switch(val) {
		case VK_BUFFER_USAGE_TRANSFER_SRC_BIT: return "TransferSrc";
		case VK_BUFFER_USAGE_TRANSFER_DST_BIT: return "TransferDst";
		case VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT: return "UniformTexelBuffer";
		case VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT: return "StorageTexelBuffer";
		case VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT: return "UniformBuffer";
		case VK_BUFFER_USAGE_STORAGE_BUFFER_BIT: return "StorageBuffer";
		case VK_BUFFER_USAGE_INDEX_BUFFER_BIT: return "IndexBuffer";
		case VK_BUFFER_USAGE_VERTEX_BUFFER_BIT: return "VertexBuffer";
		case VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT: return "IndirectBuffer";
		case VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT: return "ShaderDeviceAddress";
		case VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT: return "TransformFeedbackBufferEXT";
		case VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT: return "TransformFeedbackCounterBufferEXT";
		case VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT: return "ConditionalRenderingEXT";
		case VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR: return "AccelerationStructureBuildInputReadOnlyKHR";
		case VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR: return "AccelerationStructureStorageKHR";
		case VK_BUFFER_USAGE_SHADER_BINDING_TABLE_BIT_KHR: return "ShaderBindingTableKHR";
		default: return "";
	}
}
inline const char* name(VkExternalFenceHandleTypeFlagBits val) {
	switch(val) {
		case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT: return "OpaqueFd";
		case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT: return "OpaqueWin32";
		case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT: return "OpaqueWin32Kmt";
		case VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT: return "SyncFd";
		default: return "";
	}
}
inline const char* name(VkExternalFenceFeatureFlagBits val) {
	switch(val) {
		case VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT: return "Exportable";
		case VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT: return "Importable";
		default: return "";
	}
}
inline const char* name(VkFenceImportFlagBits val) {
	switch(val) {
		case VK_FENCE_IMPORT_TEMPORARY_BIT: return "Temporary";
		default: return "";
	}
}
inline const char* name(VkSemaphoreImportFlagBits val) {
	switch(val) {
		case VK_SEMAPHORE_IMPORT_TEMPORARY_BIT: return "Temporary";
		default: return "";
	}
}
inline const char* name(VkExternalSemaphoreHandleTypeFlagBits val) {
	switch(val) {
		case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT: return "OpaqueFd";
		case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT: return "OpaqueWin32";
		case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT: return "OpaqueWin32Kmt";
		case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT: return "D3d12Fence";
		case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT: return "SyncFd";
		default: return "";
	}
}
inline const char* name(VkExternalSemaphoreFeatureFlagBits val) {
	switch(val) {
		case VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT: return "Exportable";
		case VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT: return "Importable";
		default: return "";
	}
}
inline const char* name(VkDescriptorSetLayoutCreateFlagBits val) {
	switch(val) {
		case VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT: return "UpdateAfterBindPool";
		case VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR: return "PushDescriptorKHR";
		case VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_VALVE: return "HostOnlyPoolVALVE";
		default: return "";
	}
}
inline std::string flagNames(VkShaderStageFlagBits val) {
	std::string ret;
	if((val & VK_SHADER_STAGE_VERTEX_BIT) == VK_SHADER_STAGE_VERTEX_BIT) ret += "Vertex | ";
	if((val & VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT) == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT) ret += "TessellationControl | ";
	if((val & VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT) == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT) ret += "TessellationEvaluation | ";
	if((val & VK_SHADER_STAGE_GEOMETRY_BIT) == VK_SHADER_STAGE_GEOMETRY_BIT) ret += "Geometry | ";
	if((val & VK_SHADER_STAGE_FRAGMENT_BIT) == VK_SHADER_STAGE_FRAGMENT_BIT) ret += "Fragment | ";
	if((val & VK_SHADER_STAGE_COMPUTE_BIT) == VK_SHADER_STAGE_COMPUTE_BIT) ret += "Compute | ";
	if((val & VK_SHADER_STAGE_ALL_GRAPHICS) == VK_SHADER_STAGE_ALL_GRAPHICS) ret += "AllGraphics | ";
	if((val & VK_SHADER_STAGE_ALL) == VK_SHADER_STAGE_ALL) ret += "All | ";
	if((val & VK_SHADER_STAGE_RAYGEN_BIT_KHR) == VK_SHADER_STAGE_RAYGEN_BIT_KHR) ret += "RaygenKHR | ";
	if((val & VK_SHADER_STAGE_ANY_HIT_BIT_KHR) == VK_SHADER_STAGE_ANY_HIT_BIT_KHR) ret += "AnyHitKHR | ";
	if((val & VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR) == VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR) ret += "ClosestHitKHR | ";
	if((val & VK_SHADER_STAGE_MISS_BIT_KHR) == VK_SHADER_STAGE_MISS_BIT_KHR) ret += "MissKHR | ";
	if((val & VK_SHADER_STAGE_INTERSECTION_BIT_KHR) == VK_SHADER_STAGE_INTERSECTION_BIT_KHR) ret += "IntersectionKHR | ";
	if((val & VK_SHADER_STAGE_CALLABLE_BIT_KHR) == VK_SHADER_STAGE_CALLABLE_BIT_KHR) ret += "CallableKHR | ";
	if((val & VK_SHADER_STAGE_TASK_BIT_NV) == VK_SHADER_STAGE_TASK_BIT_NV) ret += "TaskNV | ";
	if((val & VK_SHADER_STAGE_MESH_BIT_NV) == VK_SHADER_STAGE_MESH_BIT_NV) ret += "MeshNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkSubgroupFeatureFlagBits val) {
	std::string ret;
	if((val & VK_SUBGROUP_FEATURE_BASIC_BIT) == VK_SUBGROUP_FEATURE_BASIC_BIT) ret += "Basic | ";
	if((val & VK_SUBGROUP_FEATURE_VOTE_BIT) == VK_SUBGROUP_FEATURE_VOTE_BIT) ret += "Vote | ";
	if((val & VK_SUBGROUP_FEATURE_ARITHMETIC_BIT) == VK_SUBGROUP_FEATURE_ARITHMETIC_BIT) ret += "Arithmetic | ";
	if((val & VK_SUBGROUP_FEATURE_BALLOT_BIT) == VK_SUBGROUP_FEATURE_BALLOT_BIT) ret += "Ballot | ";
	if((val & VK_SUBGROUP_FEATURE_SHUFFLE_BIT) == VK_SUBGROUP_FEATURE_SHUFFLE_BIT) ret += "Shuffle | ";
	if((val & VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT) == VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT) ret += "ShuffleRelative | ";
	if((val & VK_SUBGROUP_FEATURE_CLUSTERED_BIT) == VK_SUBGROUP_FEATURE_CLUSTERED_BIT) ret += "Clustered | ";
	if((val & VK_SUBGROUP_FEATURE_QUAD_BIT) == VK_SUBGROUP_FEATURE_QUAD_BIT) ret += "Quad | ";
	if((val & VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV) == VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV) ret += "PartitionedNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkPeerMemoryFeatureFlagBits val) {
	std::string ret;
	if((val & VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT) == VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT) ret += "CopySrc | ";
	if((val & VK_PEER_MEMORY_FEATURE_COPY_DST_BIT) == VK_PEER_MEMORY_FEATURE_COPY_DST_BIT) ret += "CopyDst | ";
	if((val & VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT) == VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT) ret += "GenericSrc | ";
	if((val & VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT) == VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT) ret += "GenericDst | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkMemoryAllocateFlagBits val) {
	std::string ret;
	if((val & VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT) == VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT) ret += "DeviceMask | ";
	if((val & VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT) == VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT) ret += "DeviceAddress | ";
	if((val & VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT) == VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT) ret += "DeviceAddressCaptureReplay | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkImageAspectFlagBits val) {
	std::string ret;
	if((val & VK_IMAGE_ASPECT_COLOR_BIT) == VK_IMAGE_ASPECT_COLOR_BIT) ret += "Color | ";
	if((val & VK_IMAGE_ASPECT_DEPTH_BIT) == VK_IMAGE_ASPECT_DEPTH_BIT) ret += "Depth | ";
	if((val & VK_IMAGE_ASPECT_STENCIL_BIT) == VK_IMAGE_ASPECT_STENCIL_BIT) ret += "Stencil | ";
	if((val & VK_IMAGE_ASPECT_METADATA_BIT) == VK_IMAGE_ASPECT_METADATA_BIT) ret += "Metadata | ";
	if((val & VK_IMAGE_ASPECT_PLANE_0_BIT) == VK_IMAGE_ASPECT_PLANE_0_BIT) ret += "Plane0 | ";
	if((val & VK_IMAGE_ASPECT_PLANE_1_BIT) == VK_IMAGE_ASPECT_PLANE_1_BIT) ret += "Plane1 | ";
	if((val & VK_IMAGE_ASPECT_PLANE_2_BIT) == VK_IMAGE_ASPECT_PLANE_2_BIT) ret += "Plane2 | ";
	if((val & VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT) == VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT) ret += "MemoryPlane0EXT | ";
	if((val & VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT) == VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT) ret += "MemoryPlane1EXT | ";
	if((val & VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT) == VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT) ret += "MemoryPlane2EXT | ";
	if((val & VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT) == VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT) ret += "MemoryPlane3EXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkSparseImageFormatFlagBits val) {
	std::string ret;
	if((val & VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT) == VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT) ret += "SingleMiptail | ";
	if((val & VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT) == VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT) ret += "AlignedMipSize | ";
	if((val & VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT) == VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT) ret += "NonstandardBlockSize | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkSampleCountFlagBits val) {
	std::string ret;
	if((val & VK_SAMPLE_COUNT_1_BIT) == VK_SAMPLE_COUNT_1_BIT) ret += "1 | ";
	if((val & VK_SAMPLE_COUNT_2_BIT) == VK_SAMPLE_COUNT_2_BIT) ret += "2 | ";
	if((val & VK_SAMPLE_COUNT_4_BIT) == VK_SAMPLE_COUNT_4_BIT) ret += "4 | ";
	if((val & VK_SAMPLE_COUNT_8_BIT) == VK_SAMPLE_COUNT_8_BIT) ret += "8 | ";
	if((val & VK_SAMPLE_COUNT_16_BIT) == VK_SAMPLE_COUNT_16_BIT) ret += "16 | ";
	if((val & VK_SAMPLE_COUNT_32_BIT) == VK_SAMPLE_COUNT_32_BIT) ret += "32 | ";
	if((val & VK_SAMPLE_COUNT_64_BIT) == VK_SAMPLE_COUNT_64_BIT) ret += "64 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkFormatFeatureFlagBits val) {
	std::string ret;
	if((val & VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT) == VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT) ret += "SampledImage | ";
	if((val & VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT) == VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT) ret += "StorageImage | ";
	if((val & VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT) == VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT) ret += "StorageImageAtomic | ";
	if((val & VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT) == VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT) ret += "UniformTexelBuffer | ";
	if((val & VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT) == VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT) ret += "StorageTexelBuffer | ";
	if((val & VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT) == VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT) ret += "StorageTexelBufferAtomic | ";
	if((val & VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT) == VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT) ret += "VertexBuffer | ";
	if((val & VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT) == VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT) ret += "ColorAttachment | ";
	if((val & VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT) == VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT) ret += "ColorAttachmentBlend | ";
	if((val & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT) == VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT) ret += "DepthStencilAttachment | ";
	if((val & VK_FORMAT_FEATURE_BLIT_SRC_BIT) == VK_FORMAT_FEATURE_BLIT_SRC_BIT) ret += "BlitSrc | ";
	if((val & VK_FORMAT_FEATURE_BLIT_DST_BIT) == VK_FORMAT_FEATURE_BLIT_DST_BIT) ret += "BlitDst | ";
	if((val & VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT) == VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT) ret += "SampledImageFilterLinear | ";
	if((val & VK_FORMAT_FEATURE_TRANSFER_SRC_BIT) == VK_FORMAT_FEATURE_TRANSFER_SRC_BIT) ret += "TransferSrc | ";
	if((val & VK_FORMAT_FEATURE_TRANSFER_DST_BIT) == VK_FORMAT_FEATURE_TRANSFER_DST_BIT) ret += "TransferDst | ";
	if((val & VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT) == VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT) ret += "MidpointChromaSamples | ";
	if((val & VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT) == VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT) ret += "SampledImageYcbcrConversionLinearFilter | ";
	if((val & VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT) == VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT) ret += "SampledImageYcbcrConversionSeparateReconstructionFilter | ";
	if((val & VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT) == VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT) ret += "SampledImageYcbcrConversionChromaReconstructionExplicit | ";
	if((val & VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT) == VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT) ret += "SampledImageYcbcrConversionChromaReconstructionExplicitForceable | ";
	if((val & VK_FORMAT_FEATURE_DISJOINT_BIT) == VK_FORMAT_FEATURE_DISJOINT_BIT) ret += "Disjoint | ";
	if((val & VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT) == VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT) ret += "CositedChromaSamples | ";
	if((val & VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT) == VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT) ret += "SampledImageFilterMinmax | ";
	if((val & VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG) == VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG) ret += "SampledImageFilterCubicIMG | ";
	if((val & VK_FORMAT_FEATURE_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR) == VK_FORMAT_FEATURE_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR) ret += "AccelerationStructureVertexBufferKHR | ";
	if((val & VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT) == VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT) ret += "FragmentDensityMapEXT | ";
	if((val & VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR) == VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR) ret += "FragmentShadingRateAttachmentKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkImageUsageFlagBits val) {
	std::string ret;
	if((val & VK_IMAGE_USAGE_TRANSFER_SRC_BIT) == VK_IMAGE_USAGE_TRANSFER_SRC_BIT) ret += "TransferSrc | ";
	if((val & VK_IMAGE_USAGE_TRANSFER_DST_BIT) == VK_IMAGE_USAGE_TRANSFER_DST_BIT) ret += "TransferDst | ";
	if((val & VK_IMAGE_USAGE_SAMPLED_BIT) == VK_IMAGE_USAGE_SAMPLED_BIT) ret += "Sampled | ";
	if((val & VK_IMAGE_USAGE_STORAGE_BIT) == VK_IMAGE_USAGE_STORAGE_BIT) ret += "Storage | ";
	if((val & VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT) == VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT) ret += "ColorAttachment | ";
	if((val & VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT) == VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT) ret += "DepthStencilAttachment | ";
	if((val & VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT) == VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT) ret += "TransientAttachment | ";
	if((val & VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT) == VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT) ret += "InputAttachment | ";
	if((val & VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV) == VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV) ret += "ShadingRateImageNV | ";
	if((val & VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT) == VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT) ret += "FragmentDensityMapEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkImageCreateFlagBits val) {
	std::string ret;
	if((val & VK_IMAGE_CREATE_SPARSE_BINDING_BIT) == VK_IMAGE_CREATE_SPARSE_BINDING_BIT) ret += "SparseBinding | ";
	if((val & VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT) == VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT) ret += "SparseResidency | ";
	if((val & VK_IMAGE_CREATE_SPARSE_ALIASED_BIT) == VK_IMAGE_CREATE_SPARSE_ALIASED_BIT) ret += "SparseAliased | ";
	if((val & VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT) == VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT) ret += "MutableFormat | ";
	if((val & VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT) == VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT) ret += "CubeCompatible | ";
	if((val & VK_IMAGE_CREATE_ALIAS_BIT) == VK_IMAGE_CREATE_ALIAS_BIT) ret += "Alias | ";
	if((val & VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT) == VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT) ret += "SplitInstanceBindRegions | ";
	if((val & VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT) == VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT) ret += "2dArrayCompatible | ";
	if((val & VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT) == VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT) ret += "BlockTexelViewCompatible | ";
	if((val & VK_IMAGE_CREATE_EXTENDED_USAGE_BIT) == VK_IMAGE_CREATE_EXTENDED_USAGE_BIT) ret += "ExtendedUsage | ";
	if((val & VK_IMAGE_CREATE_PROTECTED_BIT) == VK_IMAGE_CREATE_PROTECTED_BIT) ret += "Protected | ";
	if((val & VK_IMAGE_CREATE_DISJOINT_BIT) == VK_IMAGE_CREATE_DISJOINT_BIT) ret += "Disjoint | ";
	if((val & VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV) == VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV) ret += "CornerSampledNV | ";
	if((val & VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT) == VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT) ret += "SampleLocationsCompatibleDepthEXT | ";
	if((val & VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT) == VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT) ret += "SubsampledEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkQueueFlagBits val) {
	std::string ret;
	if((val & VK_QUEUE_GRAPHICS_BIT) == VK_QUEUE_GRAPHICS_BIT) ret += "Graphics | ";
	if((val & VK_QUEUE_COMPUTE_BIT) == VK_QUEUE_COMPUTE_BIT) ret += "Compute | ";
	if((val & VK_QUEUE_TRANSFER_BIT) == VK_QUEUE_TRANSFER_BIT) ret += "Transfer | ";
	if((val & VK_QUEUE_SPARSE_BINDING_BIT) == VK_QUEUE_SPARSE_BINDING_BIT) ret += "SparseBinding | ";
	if((val & VK_QUEUE_PROTECTED_BIT) == VK_QUEUE_PROTECTED_BIT) ret += "Protected | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkMemoryPropertyFlagBits val) {
	std::string ret;
	if((val & VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT) == VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT) ret += "DeviceLocal | ";
	if((val & VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT) == VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT) ret += "HostVisible | ";
	if((val & VK_MEMORY_PROPERTY_HOST_COHERENT_BIT) == VK_MEMORY_PROPERTY_HOST_COHERENT_BIT) ret += "HostCoherent | ";
	if((val & VK_MEMORY_PROPERTY_HOST_CACHED_BIT) == VK_MEMORY_PROPERTY_HOST_CACHED_BIT) ret += "HostCached | ";
	if((val & VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT) == VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT) ret += "LazilyAllocated | ";
	if((val & VK_MEMORY_PROPERTY_PROTECTED_BIT) == VK_MEMORY_PROPERTY_PROTECTED_BIT) ret += "Protected | ";
	if((val & VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD) == VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD) ret += "DeviceCoherentAMD | ";
	if((val & VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD) == VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD) ret += "DeviceUncachedAMD | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkMemoryHeapFlagBits val) {
	std::string ret;
	if((val & VK_MEMORY_HEAP_DEVICE_LOCAL_BIT) == VK_MEMORY_HEAP_DEVICE_LOCAL_BIT) ret += "DeviceLocal | ";
	if((val & VK_MEMORY_HEAP_MULTI_INSTANCE_BIT) == VK_MEMORY_HEAP_MULTI_INSTANCE_BIT) ret += "MultiInstance | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkDeviceQueueCreateFlagBits val) {
	std::string ret;
	if((val & VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT) == VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT) ret += "Protected | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkExternalMemoryHandleTypeFlagBits val) {
	std::string ret;
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT) ret += "OpaqueFd | ";
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT) ret += "OpaqueWin32 | ";
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT) ret += "OpaqueWin32Kmt | ";
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT) ret += "D3d11Texture | ";
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT) ret += "D3d11TextureKmt | ";
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT) ret += "D3d12Heap | ";
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT) ret += "D3d12Resource | ";
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT) ret += "DmaBufEXT | ";
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT) ret += "HostAllocationEXT | ";
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT) ret += "HostMappedForeignMemoryEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkExternalMemoryFeatureFlagBits val) {
	std::string ret;
	if((val & VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT) == VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT) ret += "DedicatedOnly | ";
	if((val & VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT) == VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT) ret += "Exportable | ";
	if((val & VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT) == VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT) ret += "Importable | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkBufferCreateFlagBits val) {
	std::string ret;
	if((val & VK_BUFFER_CREATE_SPARSE_BINDING_BIT) == VK_BUFFER_CREATE_SPARSE_BINDING_BIT) ret += "SparseBinding | ";
	if((val & VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT) == VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT) ret += "SparseResidency | ";
	if((val & VK_BUFFER_CREATE_SPARSE_ALIASED_BIT) == VK_BUFFER_CREATE_SPARSE_ALIASED_BIT) ret += "SparseAliased | ";
	if((val & VK_BUFFER_CREATE_PROTECTED_BIT) == VK_BUFFER_CREATE_PROTECTED_BIT) ret += "Protected | ";
	if((val & VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT) == VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT) ret += "DeviceAddressCaptureReplay | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkBufferUsageFlagBits val) {
	std::string ret;
	if((val & VK_BUFFER_USAGE_TRANSFER_SRC_BIT) == VK_BUFFER_USAGE_TRANSFER_SRC_BIT) ret += "TransferSrc | ";
	if((val & VK_BUFFER_USAGE_TRANSFER_DST_BIT) == VK_BUFFER_USAGE_TRANSFER_DST_BIT) ret += "TransferDst | ";
	if((val & VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT) == VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT) ret += "UniformTexelBuffer | ";
	if((val & VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT) == VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT) ret += "StorageTexelBuffer | ";
	if((val & VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT) == VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT) ret += "UniformBuffer | ";
	if((val & VK_BUFFER_USAGE_STORAGE_BUFFER_BIT) == VK_BUFFER_USAGE_STORAGE_BUFFER_BIT) ret += "StorageBuffer | ";
	if((val & VK_BUFFER_USAGE_INDEX_BUFFER_BIT) == VK_BUFFER_USAGE_INDEX_BUFFER_BIT) ret += "IndexBuffer | ";
	if((val & VK_BUFFER_USAGE_VERTEX_BUFFER_BIT) == VK_BUFFER_USAGE_VERTEX_BUFFER_BIT) ret += "VertexBuffer | ";
	if((val & VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT) == VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT) ret += "IndirectBuffer | ";
	if((val & VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT) == VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT) ret += "ShaderDeviceAddress | ";
	if((val & VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT) == VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT) ret += "TransformFeedbackBufferEXT | ";
	if((val & VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT) == VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT) ret += "TransformFeedbackCounterBufferEXT | ";
	if((val & VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT) == VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT) ret += "ConditionalRenderingEXT | ";
	if((val & VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR) == VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR) ret += "AccelerationStructureBuildInputReadOnlyKHR | ";
	if((val & VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR) == VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR) ret += "AccelerationStructureStorageKHR | ";
	if((val & VK_BUFFER_USAGE_SHADER_BINDING_TABLE_BIT_KHR) == VK_BUFFER_USAGE_SHADER_BINDING_TABLE_BIT_KHR) ret += "ShaderBindingTableKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkExternalFenceHandleTypeFlagBits val) {
	std::string ret;
	if((val & VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT) == VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT) ret += "OpaqueFd | ";
	if((val & VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT) == VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT) ret += "OpaqueWin32 | ";
	if((val & VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT) == VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT) ret += "OpaqueWin32Kmt | ";
	if((val & VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT) == VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT) ret += "SyncFd | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkExternalFenceFeatureFlagBits val) {
	std::string ret;
	if((val & VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT) == VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT) ret += "Exportable | ";
	if((val & VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT) == VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT) ret += "Importable | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkFenceImportFlagBits val) {
	std::string ret;
	if((val & VK_FENCE_IMPORT_TEMPORARY_BIT) == VK_FENCE_IMPORT_TEMPORARY_BIT) ret += "Temporary | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkSemaphoreImportFlagBits val) {
	std::string ret;
	if((val & VK_SEMAPHORE_IMPORT_TEMPORARY_BIT) == VK_SEMAPHORE_IMPORT_TEMPORARY_BIT) ret += "Temporary | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkExternalSemaphoreHandleTypeFlagBits val) {
	std::string ret;
	if((val & VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT) == VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT) ret += "OpaqueFd | ";
	if((val & VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT) == VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT) ret += "OpaqueWin32 | ";
	if((val & VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT) == VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT) ret += "OpaqueWin32Kmt | ";
	if((val & VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT) == VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT) ret += "D3d12Fence | ";
	if((val & VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT) == VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT) ret += "SyncFd | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkExternalSemaphoreFeatureFlagBits val) {
	std::string ret;
	if((val & VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT) == VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT) ret += "Exportable | ";
	if((val & VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT) == VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT) ret += "Importable | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkDescriptorSetLayoutCreateFlagBits val) {
	std::string ret;
	if((val & VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT) == VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT) ret += "UpdateAfterBindPool | ";
	if((val & VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR) == VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR) ret += "PushDescriptorKHR | ";
	if((val & VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_VALVE) == VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_VALVE) ret += "HostOnlyPoolVALVE | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkAccessFlagBits val) {
	switch(val) {
		case VK_ACCESS_INDIRECT_COMMAND_READ_BIT: return "IndirectCommandRead";
		case VK_ACCESS_INDEX_READ_BIT: return "IndexRead";
		case VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT: return "VertexAttributeRead";
		case VK_ACCESS_UNIFORM_READ_BIT: return "UniformRead";
		case VK_ACCESS_INPUT_ATTACHMENT_READ_BIT: return "InputAttachmentRead";
		case VK_ACCESS_SHADER_READ_BIT: return "ShaderRead";
		case VK_ACCESS_SHADER_WRITE_BIT: return "ShaderWrite";
		case VK_ACCESS_COLOR_ATTACHMENT_READ_BIT: return "ColorAttachmentRead";
		case VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT: return "ColorAttachmentWrite";
		case VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT: return "DepthStencilAttachmentRead";
		case VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT: return "DepthStencilAttachmentWrite";
		case VK_ACCESS_TRANSFER_READ_BIT: return "TransferRead";
		case VK_ACCESS_TRANSFER_WRITE_BIT: return "TransferWrite";
		case VK_ACCESS_HOST_READ_BIT: return "HostRead";
		case VK_ACCESS_HOST_WRITE_BIT: return "HostWrite";
		case VK_ACCESS_MEMORY_READ_BIT: return "MemoryRead";
		case VK_ACCESS_MEMORY_WRITE_BIT: return "MemoryWrite";
		case VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT: return "TransformFeedbackWriteEXT";
		case VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT: return "TransformFeedbackCounterReadEXT";
		case VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT: return "TransformFeedbackCounterWriteEXT";
		case VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT: return "ConditionalRenderingReadEXT";
		case VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT: return "ColorAttachmentReadNoncoherentEXT";
		case VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_KHR: return "AccelerationStructureReadKHR";
		case VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_KHR: return "AccelerationStructureWriteKHR";
		case VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV: return "ShadingRateImageReadNV";
		case VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT: return "FragmentDensityMapReadEXT";
		case VK_ACCESS_COMMAND_PREPROCESS_READ_BIT_NV: return "CommandPreprocessReadNV";
		case VK_ACCESS_COMMAND_PREPROCESS_WRITE_BIT_NV: return "CommandPreprocessWriteNV";
		default: return "";
	}
}
inline const char* name(VkImageLayout val) {
	switch(val) {
		case VK_IMAGE_LAYOUT_UNDEFINED: return "Undefined";
		case VK_IMAGE_LAYOUT_GENERAL: return "General";
		case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL: return "ColorAttachmentOptimal";
		case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL: return "DepthStencilAttachmentOptimal";
		case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL: return "DepthStencilReadOnlyOptimal";
		case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL: return "ShaderReadOnlyOptimal";
		case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL: return "TransferSrcOptimal";
		case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL: return "TransferDstOptimal";
		case VK_IMAGE_LAYOUT_PREINITIALIZED: return "Preinitialized";
		case VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL: return "DepthReadOnlyStencilAttachmentOptimal";
		case VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL: return "DepthAttachmentStencilReadOnlyOptimal";
		case VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL: return "DepthAttachmentOptimal";
		case VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL: return "DepthReadOnlyOptimal";
		case VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL: return "StencilAttachmentOptimal";
		case VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL: return "StencilReadOnlyOptimal";
		case VK_IMAGE_LAYOUT_PRESENT_SRC_KHR: return "PresentSrcKHR";
		case VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR: return "SharedPresentKHR";
		case VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV: return "ShadingRateOptimalNV";
		case VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT: return "FragmentDensityMapOptimalEXT";
		default: return "";
	}
}
inline const char* name(VkObjectType val) {
	switch(val) {
		case VK_OBJECT_TYPE_UNKNOWN: return "Unknown";
		case VK_OBJECT_TYPE_INSTANCE: return "Instance";
		case VK_OBJECT_TYPE_PHYSICAL_DEVICE: return "PhysicalDevice";
		case VK_OBJECT_TYPE_DEVICE: return "Device";
		case VK_OBJECT_TYPE_QUEUE: return "Queue";
		case VK_OBJECT_TYPE_SEMAPHORE: return "Semaphore";
		case VK_OBJECT_TYPE_COMMAND_BUFFER: return "CommandBuffer";
		case VK_OBJECT_TYPE_FENCE: return "Fence";
		case VK_OBJECT_TYPE_DEVICE_MEMORY: return "DeviceMemory";
		case VK_OBJECT_TYPE_BUFFER: return "Buffer";
		case VK_OBJECT_TYPE_IMAGE: return "Image";
		case VK_OBJECT_TYPE_EVENT: return "Event";
		case VK_OBJECT_TYPE_QUERY_POOL: return "QueryPool";
		case VK_OBJECT_TYPE_BUFFER_VIEW: return "BufferView";
		case VK_OBJECT_TYPE_IMAGE_VIEW: return "ImageView";
		case VK_OBJECT_TYPE_SHADER_MODULE: return "ShaderModule";
		case VK_OBJECT_TYPE_PIPELINE_CACHE: return "PipelineCache";
		case VK_OBJECT_TYPE_PIPELINE_LAYOUT: return "PipelineLayout";
		case VK_OBJECT_TYPE_RENDER_PASS: return "RenderPass";
		case VK_OBJECT_TYPE_PIPELINE: return "Pipeline";
		case VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT: return "DescriptorSetLayout";
		case VK_OBJECT_TYPE_SAMPLER: return "Sampler";
		case VK_OBJECT_TYPE_DESCRIPTOR_POOL: return "DescriptorPool";
		case VK_OBJECT_TYPE_DESCRIPTOR_SET: return "DescriptorSet";
		case VK_OBJECT_TYPE_FRAMEBUFFER: return "Framebuffer";
		case VK_OBJECT_TYPE_COMMAND_POOL: return "CommandPool";
		case VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION: return "SamplerYcbcrConversion";
		case VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE: return "DescriptorUpdateTemplate";
		case VK_OBJECT_TYPE_SURFACE_KHR: return "SurfaceKHR";
		case VK_OBJECT_TYPE_SWAPCHAIN_KHR: return "SwapchainKHR";
		case VK_OBJECT_TYPE_DISPLAY_KHR: return "DisplayKHR";
		case VK_OBJECT_TYPE_DISPLAY_MODE_KHR: return "DisplayModeKHR";
		case VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT: return "DebugReportCallbackEXT";
		case VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT: return "DebugUtilsMessengerEXT";
		case VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR: return "AccelerationStructureKHR";
		case VK_OBJECT_TYPE_VALIDATION_CACHE_EXT: return "ValidationCacheEXT";
		case VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV: return "AccelerationStructureNV";
		case VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL: return "PerformanceConfigurationINTEL";
		case VK_OBJECT_TYPE_DEFERRED_OPERATION_KHR: return "DeferredOperationKHR";
		case VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NV: return "IndirectCommandsLayoutNV";
		case VK_OBJECT_TYPE_PRIVATE_DATA_SLOT_EXT: return "PrivateDataSlotEXT";
		default: return "";
	}
}
inline const char* name(VkVendorId val) {
	switch(val) {
		case VK_VENDOR_ID_VIV: return "VIV";
		case VK_VENDOR_ID_VSI: return "VSI";
		case VK_VENDOR_ID_KAZAN: return "Kazan";
		case VK_VENDOR_ID_CODEPLAY: return "Codeplay";
		case VK_VENDOR_ID_MESA: return "MESA";
		case VK_VENDOR_ID_POCL: return "Pocl";
		default: return "";
	}
}
inline const char* name(VkPipelineCacheHeaderVersion val) {
	switch(val) {
		case VK_PIPELINE_CACHE_HEADER_VERSION_ONE: return "One";
		default: return "";
	}
}
inline const char* name(VkPipelineStageFlagBits val) {
	switch(val) {
		case VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT: return "TopOfPipe";
		case VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT: return "DrawIndirect";
		case VK_PIPELINE_STAGE_VERTEX_INPUT_BIT: return "VertexInput";
		case VK_PIPELINE_STAGE_VERTEX_SHADER_BIT: return "VertexShader";
		case VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT: return "TessellationControlShader";
		case VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT: return "TessellationEvaluationShader";
		case VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT: return "GeometryShader";
		case VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT: return "FragmentShader";
		case VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT: return "EarlyFragmentTests";
		case VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT: return "LateFragmentTests";
		case VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT: return "ColorAttachmentOutput";
		case VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT: return "ComputeShader";
		case VK_PIPELINE_STAGE_TRANSFER_BIT: return "Transfer";
		case VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT: return "BottomOfPipe";
		case VK_PIPELINE_STAGE_HOST_BIT: return "Host";
		case VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT: return "AllGraphics";
		case VK_PIPELINE_STAGE_ALL_COMMANDS_BIT: return "AllCommands";
		case VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT: return "TransformFeedbackEXT";
		case VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT: return "ConditionalRenderingEXT";
		case VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR: return "AccelerationStructureBuildKHR";
		case VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR: return "RayTracingShaderKHR";
		case VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV: return "ShadingRateImageNV";
		case VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV: return "TaskShaderNV";
		case VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV: return "MeshShaderNV";
		case VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT: return "FragmentDensityProcessEXT";
		case VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_NV: return "CommandPreprocessNV";
		default: return "";
	}
}
inline const char* name(VkSparseMemoryBindFlagBits val) {
	switch(val) {
		case VK_SPARSE_MEMORY_BIND_METADATA_BIT: return "Metadata";
		default: return "";
	}
}
inline const char* name(VkFenceCreateFlagBits val) {
	switch(val) {
		case VK_FENCE_CREATE_SIGNALED_BIT: return "Signaled";
		default: return "";
	}
}
inline const char* name(VkQueryPipelineStatisticFlagBits val) {
	switch(val) {
		case VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT: return "InputAssemblyVertices";
		case VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT: return "InputAssemblyPrimitives";
		case VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT: return "VertexShaderInvocations";
		case VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT: return "GeometryShaderInvocations";
		case VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT: return "GeometryShaderPrimitives";
		case VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT: return "ClippingInvocations";
		case VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT: return "ClippingPrimitives";
		case VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT: return "FragmentShaderInvocations";
		case VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT: return "TessellationControlShaderPatches";
		case VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT: return "TessellationEvaluationShaderInvocations";
		case VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT: return "ComputeShaderInvocations";
		default: return "";
	}
}
inline const char* name(VkQueryType val) {
	switch(val) {
		case VK_QUERY_TYPE_OCCLUSION: return "Occlusion";
		case VK_QUERY_TYPE_PIPELINE_STATISTICS: return "PipelineStatistics";
		case VK_QUERY_TYPE_TIMESTAMP: return "Timestamp";
		case VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT: return "TransformFeedbackStreamEXT";
		case VK_QUERY_TYPE_PERFORMANCE_QUERY_KHR: return "PerformanceQueryKHR";
		case VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_KHR: return "AccelerationStructureCompactedSizeKHR";
		case VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SERIALIZATION_SIZE_KHR: return "AccelerationStructureSerializationSizeKHR";
		case VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV: return "AccelerationStructureCompactedSizeNV";
		case VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL: return "PerformanceQueryINTEL";
		default: return "";
	}
}
inline const char* name(VkQueryResultFlagBits val) {
	switch(val) {
		case VK_QUERY_RESULT_64_BIT: return "64";
		case VK_QUERY_RESULT_WAIT_BIT: return "Wait";
		case VK_QUERY_RESULT_WITH_AVAILABILITY_BIT: return "WithAvailability";
		case VK_QUERY_RESULT_PARTIAL_BIT: return "Partial";
		default: return "";
	}
}
inline const char* name(VkSharingMode val) {
	switch(val) {
		case VK_SHARING_MODE_EXCLUSIVE: return "Exclusive";
		case VK_SHARING_MODE_CONCURRENT: return "Concurrent";
		default: return "";
	}
}
inline const char* name(VkImageViewCreateFlagBits val) {
	switch(val) {
		case VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT: return "FragmentDensityMapDynamicEXT";
		case VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DEFERRED_BIT_EXT: return "FragmentDensityMapDeferredEXT";
		default: return "";
	}
}
inline const char* name(VkImageViewType val) {
	switch(val) {
		case VK_IMAGE_VIEW_TYPE_1D: return "1d";
		case VK_IMAGE_VIEW_TYPE_2D: return "2d";
		case VK_IMAGE_VIEW_TYPE_3D: return "3d";
		case VK_IMAGE_VIEW_TYPE_CUBE: return "Cube";
		case VK_IMAGE_VIEW_TYPE_1D_ARRAY: return "1dArray";
		case VK_IMAGE_VIEW_TYPE_2D_ARRAY: return "2dArray";
		case VK_IMAGE_VIEW_TYPE_CUBE_ARRAY: return "CubeArray";
		default: return "";
	}
}
inline const char* name(VkShaderModuleCreateFlagBits val) {
	switch(val) {
		default: return "";
	}
}
inline const char* name(VkPipelineCacheCreateFlagBits val) {
	switch(val) {
		case VK_PIPELINE_CACHE_CREATE_EXTERNALLY_SYNCHRONIZED_BIT_EXT: return "ExternallySynchronizedEXT";
		default: return "";
	}
}
inline const char* name(VkBlendFactor val) {
	switch(val) {
		case VK_BLEND_FACTOR_ZERO: return "Zero";
		case VK_BLEND_FACTOR_ONE: return "One";
		case VK_BLEND_FACTOR_SRC_COLOR: return "SrcColor";
		case VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR: return "OneMinusSrcColor";
		case VK_BLEND_FACTOR_DST_COLOR: return "DstColor";
		case VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR: return "OneMinusDstColor";
		case VK_BLEND_FACTOR_SRC_ALPHA: return "SrcAlpha";
		case VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA: return "OneMinusSrcAlpha";
		case VK_BLEND_FACTOR_DST_ALPHA: return "DstAlpha";
		case VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA: return "OneMinusDstAlpha";
		case VK_BLEND_FACTOR_CONSTANT_COLOR: return "ConstantColor";
		case VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR: return "OneMinusConstantColor";
		case VK_BLEND_FACTOR_CONSTANT_ALPHA: return "ConstantAlpha";
		case VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA: return "OneMinusConstantAlpha";
		case VK_BLEND_FACTOR_SRC_ALPHA_SATURATE: return "SrcAlphaSaturate";
		case VK_BLEND_FACTOR_SRC1_COLOR: return "Src1Color";
		case VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR: return "OneMinusSrc1Color";
		case VK_BLEND_FACTOR_SRC1_ALPHA: return "Src1Alpha";
		case VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA: return "OneMinusSrc1Alpha";
		default: return "";
	}
}
inline const char* name(VkBlendOp val) {
	switch(val) {
		case VK_BLEND_OP_ADD: return "Add";
		case VK_BLEND_OP_SUBTRACT: return "Subtract";
		case VK_BLEND_OP_REVERSE_SUBTRACT: return "ReverseSubtract";
		case VK_BLEND_OP_MIN: return "Min";
		case VK_BLEND_OP_MAX: return "Max";
		case VK_BLEND_OP_ZERO_EXT: return "ZeroEXT";
		case VK_BLEND_OP_SRC_EXT: return "SrcEXT";
		case VK_BLEND_OP_DST_EXT: return "DstEXT";
		case VK_BLEND_OP_SRC_OVER_EXT: return "SrcOverEXT";
		case VK_BLEND_OP_DST_OVER_EXT: return "DstOverEXT";
		case VK_BLEND_OP_SRC_IN_EXT: return "SrcInEXT";
		case VK_BLEND_OP_DST_IN_EXT: return "DstInEXT";
		case VK_BLEND_OP_SRC_OUT_EXT: return "SrcOutEXT";
		case VK_BLEND_OP_DST_OUT_EXT: return "DstOutEXT";
		case VK_BLEND_OP_SRC_ATOP_EXT: return "SrcAtopEXT";
		case VK_BLEND_OP_DST_ATOP_EXT: return "DstAtopEXT";
		case VK_BLEND_OP_XOR_EXT: return "XorEXT";
		case VK_BLEND_OP_MULTIPLY_EXT: return "MultiplyEXT";
		case VK_BLEND_OP_SCREEN_EXT: return "ScreenEXT";
		case VK_BLEND_OP_OVERLAY_EXT: return "OverlayEXT";
		case VK_BLEND_OP_DARKEN_EXT: return "DarkenEXT";
		case VK_BLEND_OP_LIGHTEN_EXT: return "LightenEXT";
		case VK_BLEND_OP_COLORDODGE_EXT: return "ColordodgeEXT";
		case VK_BLEND_OP_COLORBURN_EXT: return "ColorburnEXT";
		case VK_BLEND_OP_HARDLIGHT_EXT: return "HardlightEXT";
		case VK_BLEND_OP_SOFTLIGHT_EXT: return "SoftlightEXT";
		case VK_BLEND_OP_DIFFERENCE_EXT: return "DifferenceEXT";
		case VK_BLEND_OP_EXCLUSION_EXT: return "ExclusionEXT";
		case VK_BLEND_OP_INVERT_EXT: return "InvertEXT";
		case VK_BLEND_OP_INVERT_RGB_EXT: return "InvertRgbEXT";
		case VK_BLEND_OP_LINEARDODGE_EXT: return "LineardodgeEXT";
		case VK_BLEND_OP_LINEARBURN_EXT: return "LinearburnEXT";
		case VK_BLEND_OP_VIVIDLIGHT_EXT: return "VividlightEXT";
		case VK_BLEND_OP_LINEARLIGHT_EXT: return "LinearlightEXT";
		case VK_BLEND_OP_PINLIGHT_EXT: return "PinlightEXT";
		case VK_BLEND_OP_HARDMIX_EXT: return "HardmixEXT";
		case VK_BLEND_OP_HSL_HUE_EXT: return "HslHueEXT";
		case VK_BLEND_OP_HSL_SATURATION_EXT: return "HslSaturationEXT";
		case VK_BLEND_OP_HSL_COLOR_EXT: return "HslColorEXT";
		case VK_BLEND_OP_HSL_LUMINOSITY_EXT: return "HslLuminosityEXT";
		case VK_BLEND_OP_PLUS_EXT: return "PlusEXT";
		case VK_BLEND_OP_PLUS_CLAMPED_EXT: return "PlusClampedEXT";
		case VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT: return "PlusClampedAlphaEXT";
		case VK_BLEND_OP_PLUS_DARKER_EXT: return "PlusDarkerEXT";
		case VK_BLEND_OP_MINUS_EXT: return "MinusEXT";
		case VK_BLEND_OP_MINUS_CLAMPED_EXT: return "MinusClampedEXT";
		case VK_BLEND_OP_CONTRAST_EXT: return "ContrastEXT";
		case VK_BLEND_OP_INVERT_OVG_EXT: return "InvertOvgEXT";
		case VK_BLEND_OP_RED_EXT: return "RedEXT";
		case VK_BLEND_OP_GREEN_EXT: return "GreenEXT";
		case VK_BLEND_OP_BLUE_EXT: return "BlueEXT";
		default: return "";
	}
}
inline const char* name(VkColorComponentFlagBits val) {
	switch(val) {
		case VK_COLOR_COMPONENT_R_BIT: return "R";
		case VK_COLOR_COMPONENT_G_BIT: return "G";
		case VK_COLOR_COMPONENT_B_BIT: return "B";
		case VK_COLOR_COMPONENT_A_BIT: return "A";
		default: return "";
	}
}
inline const char* name(VkCompareOp val) {
	switch(val) {
		case VK_COMPARE_OP_NEVER: return "Never";
		case VK_COMPARE_OP_LESS: return "Less";
		case VK_COMPARE_OP_EQUAL: return "Equal";
		case VK_COMPARE_OP_LESS_OR_EQUAL: return "LessOrEqual";
		case VK_COMPARE_OP_GREATER: return "Greater";
		case VK_COMPARE_OP_NOT_EQUAL: return "NotEqual";
		case VK_COMPARE_OP_GREATER_OR_EQUAL: return "GreaterOrEqual";
		case VK_COMPARE_OP_ALWAYS: return "Always";
		default: return "";
	}
}
inline const char* name(VkPipelineCreateFlagBits val) {
	switch(val) {
		case VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT: return "DisableOptimization";
		case VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT: return "AllowDerivatives";
		case VK_PIPELINE_CREATE_DERIVATIVE_BIT: return "Derivative";
		case VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT: return "ViewIndexFromDeviceIndex";
		case VK_PIPELINE_CREATE_DISPATCH_BASE_BIT: return "DispatchBase";
		case VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR: return "RayTracingNoNullAnyHitShadersKHR";
		case VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR: return "RayTracingNoNullClosestHitShadersKHR";
		case VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR: return "RayTracingNoNullMissShadersKHR";
		case VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR: return "RayTracingNoNullIntersectionShadersKHR";
		case VK_PIPELINE_CREATE_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR: return "RayTracingSkipTrianglesKHR";
		case VK_PIPELINE_CREATE_RAY_TRACING_SKIP_AABBS_BIT_KHR: return "RayTracingSkipAabbsKHR";
		case VK_PIPELINE_CREATE_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR: return "RayTracingShaderGroupHandleCaptureReplayKHR";
		case VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV: return "DeferCompileNV";
		case VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR: return "CaptureStatisticsKHR";
		case VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR: return "CaptureInternalRepresentationsKHR";
		case VK_PIPELINE_CREATE_INDIRECT_BINDABLE_BIT_NV: return "IndirectBindableNV";
		case VK_PIPELINE_CREATE_LIBRARY_BIT_KHR: return "LibraryKHR";
		case VK_PIPELINE_CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT_EXT: return "FailOnPipelineCompileRequiredEXT";
		case VK_PIPELINE_CREATE_EARLY_RETURN_ON_FAILURE_BIT_EXT: return "EarlyReturnOnFailureEXT";
		default: return "";
	}
}
inline const char* name(VkPipelineShaderStageCreateFlagBits val) {
	switch(val) {
		case VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT: return "AllowVaryingSubgroupSizeEXT";
		case VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT: return "RequireFullSubgroupsEXT";
		default: return "";
	}
}
inline const char* name(VkCullModeFlagBits val) {
	switch(val) {
		case VK_CULL_MODE_NONE: return "None";
		case VK_CULL_MODE_BACK_BIT: return "Back";
		case VK_CULL_MODE_FRONT_AND_BACK: return "FrontAndBack";
		default: return "";
	}
}
inline const char* name(VkDynamicState val) {
	switch(val) {
		case VK_DYNAMIC_STATE_VIEWPORT: return "Viewport";
		case VK_DYNAMIC_STATE_SCISSOR: return "Scissor";
		case VK_DYNAMIC_STATE_LINE_WIDTH: return "LineWidth";
		case VK_DYNAMIC_STATE_DEPTH_BIAS: return "DepthBias";
		case VK_DYNAMIC_STATE_BLEND_CONSTANTS: return "BlendConstants";
		case VK_DYNAMIC_STATE_DEPTH_BOUNDS: return "DepthBounds";
		case VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK: return "StencilCompareMask";
		case VK_DYNAMIC_STATE_STENCIL_WRITE_MASK: return "StencilWriteMask";
		case VK_DYNAMIC_STATE_STENCIL_REFERENCE: return "StencilReference";
		case VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV: return "ViewportWScalingNV";
		case VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT: return "DiscardRectangleEXT";
		case VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT: return "SampleLocationsEXT";
		case VK_DYNAMIC_STATE_RAY_TRACING_PIPELINE_STACK_SIZE_KHR: return "RayTracingPipelineStackSizeKHR";
		case VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV: return "ViewportShadingRatePaletteNV";
		case VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV: return "ViewportCoarseSampleOrderNV";
		case VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV: return "ExclusiveScissorNV";
		case VK_DYNAMIC_STATE_FRAGMENT_SHADING_RATE_KHR: return "FragmentShadingRateKHR";
		case VK_DYNAMIC_STATE_LINE_STIPPLE_EXT: return "LineStippleEXT";
		case VK_DYNAMIC_STATE_CULL_MODE_EXT: return "CullModeEXT";
		case VK_DYNAMIC_STATE_FRONT_FACE_EXT: return "FrontFaceEXT";
		case VK_DYNAMIC_STATE_PRIMITIVE_TOPOLOGY_EXT: return "PrimitiveTopologyEXT";
		case VK_DYNAMIC_STATE_VIEWPORT_WITH_COUNT_EXT: return "ViewportWithCountEXT";
		case VK_DYNAMIC_STATE_SCISSOR_WITH_COUNT_EXT: return "ScissorWithCountEXT";
		case VK_DYNAMIC_STATE_VERTEX_INPUT_BINDING_STRIDE_EXT: return "VertexInputBindingStrideEXT";
		case VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE_EXT: return "DepthTestEnableEXT";
		case VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE_EXT: return "DepthWriteEnableEXT";
		case VK_DYNAMIC_STATE_DEPTH_COMPARE_OP_EXT: return "DepthCompareOpEXT";
		case VK_DYNAMIC_STATE_DEPTH_BOUNDS_TEST_ENABLE_EXT: return "DepthBoundsTestEnableEXT";
		case VK_DYNAMIC_STATE_STENCIL_TEST_ENABLE_EXT: return "StencilTestEnableEXT";
		case VK_DYNAMIC_STATE_STENCIL_OP_EXT: return "StencilOpEXT";
		default: return "";
	}
}
inline const char* name(VkFrontFace val) {
	switch(val) {
		case VK_FRONT_FACE_COUNTER_CLOCKWISE: return "CounterClockwise";
		case VK_FRONT_FACE_CLOCKWISE: return "Clockwise";
		default: return "";
	}
}
inline const char* name(VkVertexInputRate val) {
	switch(val) {
		case VK_VERTEX_INPUT_RATE_VERTEX: return "Vertex";
		case VK_VERTEX_INPUT_RATE_INSTANCE: return "Instance";
		default: return "";
	}
}
inline const char* name(VkPrimitiveTopology val) {
	switch(val) {
		case VK_PRIMITIVE_TOPOLOGY_POINT_LIST: return "PointList";
		case VK_PRIMITIVE_TOPOLOGY_LINE_LIST: return "LineList";
		case VK_PRIMITIVE_TOPOLOGY_LINE_STRIP: return "LineStrip";
		case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST: return "TriangleList";
		case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP: return "TriangleStrip";
		case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN: return "TriangleFan";
		case VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY: return "LineListWithAdjacency";
		case VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY: return "LineStripWithAdjacency";
		case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY: return "TriangleListWithAdjacency";
		case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY: return "TriangleStripWithAdjacency";
		case VK_PRIMITIVE_TOPOLOGY_PATCH_LIST: return "PatchList";
		default: return "";
	}
}
inline const char* name(VkPolygonMode val) {
	switch(val) {
		case VK_POLYGON_MODE_FILL: return "Fill";
		case VK_POLYGON_MODE_LINE: return "Line";
		case VK_POLYGON_MODE_POINT: return "Point";
		case VK_POLYGON_MODE_FILL_RECTANGLE_NV: return "FillRectangleNV";
		default: return "";
	}
}
inline const char* name(VkStencilOp val) {
	switch(val) {
		case VK_STENCIL_OP_KEEP: return "Keep";
		case VK_STENCIL_OP_ZERO: return "Zero";
		case VK_STENCIL_OP_REPLACE: return "Replace";
		case VK_STENCIL_OP_INCREMENT_AND_CLAMP: return "IncrementAndClamp";
		case VK_STENCIL_OP_DECREMENT_AND_CLAMP: return "DecrementAndClamp";
		case VK_STENCIL_OP_INVERT: return "Invert";
		case VK_STENCIL_OP_INCREMENT_AND_WRAP: return "IncrementAndWrap";
		case VK_STENCIL_OP_DECREMENT_AND_WRAP: return "DecrementAndWrap";
		default: return "";
	}
}
inline const char* name(VkLogicOp val) {
	switch(val) {
		case VK_LOGIC_OP_CLEAR: return "Clear";
		case VK_LOGIC_OP_AND: return "And";
		case VK_LOGIC_OP_AND_REVERSE: return "AndReverse";
		case VK_LOGIC_OP_COPY: return "Copy";
		case VK_LOGIC_OP_AND_INVERTED: return "AndInverted";
		case VK_LOGIC_OP_NO_OP: return "NoOp";
		case VK_LOGIC_OP_XOR: return "Xor";
		case VK_LOGIC_OP_OR: return "Or";
		case VK_LOGIC_OP_NOR: return "Nor";
		case VK_LOGIC_OP_EQUIVALENT: return "Equivalent";
		case VK_LOGIC_OP_INVERT: return "Invert";
		case VK_LOGIC_OP_OR_REVERSE: return "OrReverse";
		case VK_LOGIC_OP_COPY_INVERTED: return "CopyInverted";
		case VK_LOGIC_OP_OR_INVERTED: return "OrInverted";
		case VK_LOGIC_OP_NAND: return "Nand";
		case VK_LOGIC_OP_SET: return "Set";
		default: return "";
	}
}
inline const char* name(VkBorderColor val) {
	switch(val) {
		case VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK: return "FloatTransparentBlack";
		case VK_BORDER_COLOR_INT_TRANSPARENT_BLACK: return "IntTransparentBlack";
		case VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK: return "FloatOpaqueBlack";
		case VK_BORDER_COLOR_INT_OPAQUE_BLACK: return "IntOpaqueBlack";
		case VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE: return "FloatOpaqueWhite";
		case VK_BORDER_COLOR_INT_OPAQUE_WHITE: return "IntOpaqueWhite";
		case VK_BORDER_COLOR_FLOAT_CUSTOM_EXT: return "FloatCustomEXT";
		case VK_BORDER_COLOR_INT_CUSTOM_EXT: return "IntCustomEXT";
		default: return "";
	}
}
inline const char* name(VkSamplerAddressMode val) {
	switch(val) {
		case VK_SAMPLER_ADDRESS_MODE_REPEAT: return "Repeat";
		case VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT: return "MirroredRepeat";
		case VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE: return "ClampToEdge";
		case VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER: return "ClampToBorder";
		case VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE: return "MirrorClampToEdge";
		default: return "";
	}
}
inline const char* name(VkSamplerCreateFlagBits val) {
	switch(val) {
		case VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT: return "SubsampledEXT";
		case VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT: return "SubsampledCoarseReconstructionEXT";
		default: return "";
	}
}
inline const char* name(VkSamplerMipmapMode val) {
	switch(val) {
		case VK_SAMPLER_MIPMAP_MODE_NEAREST: return "Nearest";
		case VK_SAMPLER_MIPMAP_MODE_LINEAR: return "Linear";
		default: return "";
	}
}
inline const char* name(VkDescriptorPoolCreateFlagBits val) {
	switch(val) {
		case VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT: return "FreeDescriptorSet";
		case VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT: return "UpdateAfterBind";
		case VK_DESCRIPTOR_POOL_CREATE_HOST_ONLY_BIT_VALVE: return "HostOnlyVALVE";
		default: return "";
	}
}
inline const char* name(VkAttachmentDescriptionFlagBits val) {
	switch(val) {
		case VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT: return "MayAlias";
		default: return "";
	}
}
inline const char* name(VkAttachmentLoadOp val) {
	switch(val) {
		case VK_ATTACHMENT_LOAD_OP_LOAD: return "Load";
		case VK_ATTACHMENT_LOAD_OP_CLEAR: return "Clear";
		case VK_ATTACHMENT_LOAD_OP_DONT_CARE: return "DontCare";
		default: return "";
	}
}
inline const char* name(VkAttachmentStoreOp val) {
	switch(val) {
		case VK_ATTACHMENT_STORE_OP_STORE: return "Store";
		case VK_ATTACHMENT_STORE_OP_DONT_CARE: return "DontCare";
		case VK_ATTACHMENT_STORE_OP_NONE_QCOM: return "NoneQCOM";
		default: return "";
	}
}
inline const char* name(VkDependencyFlagBits val) {
	switch(val) {
		case VK_DEPENDENCY_BY_REGION_BIT: return "ByRegion";
		case VK_DEPENDENCY_DEVICE_GROUP_BIT: return "DeviceGroup";
		case VK_DEPENDENCY_VIEW_LOCAL_BIT: return "ViewLocal";
		default: return "";
	}
}
inline const char* name(VkFramebufferCreateFlagBits val) {
	switch(val) {
		case VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT: return "Imageless";
		default: return "";
	}
}
inline const char* name(VkRenderPassCreateFlagBits val) {
	switch(val) {
		case VK_RENDER_PASS_CREATE_TRANSFORM_BIT_QCOM: return "TransformQCOM";
		default: return "";
	}
}
inline const char* name(VkSubpassDescriptionFlagBits val) {
	switch(val) {
		case VK_SUBPASS_DESCRIPTION_FRAGMENT_REGION_BIT_QCOM: return "FragmentRegionQCOM";
		case VK_SUBPASS_DESCRIPTION_SHADER_RESOLVE_BIT_QCOM: return "ShaderResolveQCOM";
		default: return "";
	}
}
inline const char* name(VkCommandPoolCreateFlagBits val) {
	switch(val) {
		case VK_COMMAND_POOL_CREATE_TRANSIENT_BIT: return "Transient";
		case VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT: return "ResetCommandBuffer";
		case VK_COMMAND_POOL_CREATE_PROTECTED_BIT: return "Protected";
		default: return "";
	}
}
inline const char* name(VkCommandPoolResetFlagBits val) {
	switch(val) {
		case VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT: return "ReleaseResources";
		default: return "";
	}
}
inline const char* name(VkCommandBufferLevel val) {
	switch(val) {
		case VK_COMMAND_BUFFER_LEVEL_PRIMARY: return "Primary";
		case VK_COMMAND_BUFFER_LEVEL_SECONDARY: return "Secondary";
		default: return "";
	}
}
inline const char* name(VkCommandBufferUsageFlagBits val) {
	switch(val) {
		case VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT: return "OneTimeSubmit";
		case VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT: return "RenderPassContinue";
		case VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT: return "SimultaneousUse";
		default: return "";
	}
}
inline const char* name(VkQueryControlFlagBits val) {
	switch(val) {
		case VK_QUERY_CONTROL_PRECISE_BIT: return "Precise";
		default: return "";
	}
}
inline const char* name(VkCommandBufferResetFlagBits val) {
	switch(val) {
		case VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT: return "ReleaseResources";
		default: return "";
	}
}
inline const char* name(VkIndexType val) {
	switch(val) {
		case VK_INDEX_TYPE_UINT16: return "Uint16";
		case VK_INDEX_TYPE_UINT32: return "Uint32";
		case VK_INDEX_TYPE_NONE_KHR: return "NoneKHR";
		case VK_INDEX_TYPE_UINT8_EXT: return "Uint8EXT";
		default: return "";
	}
}
inline const char* name(VkStencilFaceFlagBits val) {
	switch(val) {
		case VK_STENCIL_FACE_FRONT_BIT: return "Front";
		case VK_STENCIL_FACE_BACK_BIT: return "Back";
		case VK_STENCIL_FACE_FRONT_AND_BACK: return "FrontAndBack";
		default: return "";
	}
}
inline const char* name(VkSubpassContents val) {
	switch(val) {
		case VK_SUBPASS_CONTENTS_INLINE: return "Inline";
		case VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS: return "SecondaryCommandBuffers";
		default: return "";
	}
}
inline std::string flagNames(VkAccessFlagBits val) {
	std::string ret;
	if((val & VK_ACCESS_INDIRECT_COMMAND_READ_BIT) == VK_ACCESS_INDIRECT_COMMAND_READ_BIT) ret += "IndirectCommandRead | ";
	if((val & VK_ACCESS_INDEX_READ_BIT) == VK_ACCESS_INDEX_READ_BIT) ret += "IndexRead | ";
	if((val & VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT) == VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT) ret += "VertexAttributeRead | ";
	if((val & VK_ACCESS_UNIFORM_READ_BIT) == VK_ACCESS_UNIFORM_READ_BIT) ret += "UniformRead | ";
	if((val & VK_ACCESS_INPUT_ATTACHMENT_READ_BIT) == VK_ACCESS_INPUT_ATTACHMENT_READ_BIT) ret += "InputAttachmentRead | ";
	if((val & VK_ACCESS_SHADER_READ_BIT) == VK_ACCESS_SHADER_READ_BIT) ret += "ShaderRead | ";
	if((val & VK_ACCESS_SHADER_WRITE_BIT) == VK_ACCESS_SHADER_WRITE_BIT) ret += "ShaderWrite | ";
	if((val & VK_ACCESS_COLOR_ATTACHMENT_READ_BIT) == VK_ACCESS_COLOR_ATTACHMENT_READ_BIT) ret += "ColorAttachmentRead | ";
	if((val & VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT) == VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT) ret += "ColorAttachmentWrite | ";
	if((val & VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT) == VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT) ret += "DepthStencilAttachmentRead | ";
	if((val & VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT) == VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT) ret += "DepthStencilAttachmentWrite | ";
	if((val & VK_ACCESS_TRANSFER_READ_BIT) == VK_ACCESS_TRANSFER_READ_BIT) ret += "TransferRead | ";
	if((val & VK_ACCESS_TRANSFER_WRITE_BIT) == VK_ACCESS_TRANSFER_WRITE_BIT) ret += "TransferWrite | ";
	if((val & VK_ACCESS_HOST_READ_BIT) == VK_ACCESS_HOST_READ_BIT) ret += "HostRead | ";
	if((val & VK_ACCESS_HOST_WRITE_BIT) == VK_ACCESS_HOST_WRITE_BIT) ret += "HostWrite | ";
	if((val & VK_ACCESS_MEMORY_READ_BIT) == VK_ACCESS_MEMORY_READ_BIT) ret += "MemoryRead | ";
	if((val & VK_ACCESS_MEMORY_WRITE_BIT) == VK_ACCESS_MEMORY_WRITE_BIT) ret += "MemoryWrite | ";
	if((val & VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT) == VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT) ret += "TransformFeedbackWriteEXT | ";
	if((val & VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT) == VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT) ret += "TransformFeedbackCounterReadEXT | ";
	if((val & VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT) == VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT) ret += "TransformFeedbackCounterWriteEXT | ";
	if((val & VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT) == VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT) ret += "ConditionalRenderingReadEXT | ";
	if((val & VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT) == VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT) ret += "ColorAttachmentReadNoncoherentEXT | ";
	if((val & VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_KHR) == VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_KHR) ret += "AccelerationStructureReadKHR | ";
	if((val & VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_KHR) == VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_KHR) ret += "AccelerationStructureWriteKHR | ";
	if((val & VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV) == VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV) ret += "ShadingRateImageReadNV | ";
	if((val & VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT) == VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT) ret += "FragmentDensityMapReadEXT | ";
	if((val & VK_ACCESS_COMMAND_PREPROCESS_READ_BIT_NV) == VK_ACCESS_COMMAND_PREPROCESS_READ_BIT_NV) ret += "CommandPreprocessReadNV | ";
	if((val & VK_ACCESS_COMMAND_PREPROCESS_WRITE_BIT_NV) == VK_ACCESS_COMMAND_PREPROCESS_WRITE_BIT_NV) ret += "CommandPreprocessWriteNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkPipelineStageFlagBits val) {
	std::string ret;
	if((val & VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT) == VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT) ret += "TopOfPipe | ";
	if((val & VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT) == VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT) ret += "DrawIndirect | ";
	if((val & VK_PIPELINE_STAGE_VERTEX_INPUT_BIT) == VK_PIPELINE_STAGE_VERTEX_INPUT_BIT) ret += "VertexInput | ";
	if((val & VK_PIPELINE_STAGE_VERTEX_SHADER_BIT) == VK_PIPELINE_STAGE_VERTEX_SHADER_BIT) ret += "VertexShader | ";
	if((val & VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT) == VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT) ret += "TessellationControlShader | ";
	if((val & VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT) == VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT) ret += "TessellationEvaluationShader | ";
	if((val & VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT) == VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT) ret += "GeometryShader | ";
	if((val & VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT) == VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT) ret += "FragmentShader | ";
	if((val & VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT) == VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT) ret += "EarlyFragmentTests | ";
	if((val & VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT) == VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT) ret += "LateFragmentTests | ";
	if((val & VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT) == VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT) ret += "ColorAttachmentOutput | ";
	if((val & VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT) == VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT) ret += "ComputeShader | ";
	if((val & VK_PIPELINE_STAGE_TRANSFER_BIT) == VK_PIPELINE_STAGE_TRANSFER_BIT) ret += "Transfer | ";
	if((val & VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT) == VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT) ret += "BottomOfPipe | ";
	if((val & VK_PIPELINE_STAGE_HOST_BIT) == VK_PIPELINE_STAGE_HOST_BIT) ret += "Host | ";
	if((val & VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT) == VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT) ret += "AllGraphics | ";
	if((val & VK_PIPELINE_STAGE_ALL_COMMANDS_BIT) == VK_PIPELINE_STAGE_ALL_COMMANDS_BIT) ret += "AllCommands | ";
	if((val & VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT) == VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT) ret += "TransformFeedbackEXT | ";
	if((val & VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT) == VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT) ret += "ConditionalRenderingEXT | ";
	if((val & VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR) == VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR) ret += "AccelerationStructureBuildKHR | ";
	if((val & VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR) == VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR) ret += "RayTracingShaderKHR | ";
	if((val & VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV) == VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV) ret += "ShadingRateImageNV | ";
	if((val & VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV) == VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV) ret += "TaskShaderNV | ";
	if((val & VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV) == VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV) ret += "MeshShaderNV | ";
	if((val & VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT) == VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT) ret += "FragmentDensityProcessEXT | ";
	if((val & VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_NV) == VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_NV) ret += "CommandPreprocessNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkSparseMemoryBindFlagBits val) {
	std::string ret;
	if((val & VK_SPARSE_MEMORY_BIND_METADATA_BIT) == VK_SPARSE_MEMORY_BIND_METADATA_BIT) ret += "Metadata | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkFenceCreateFlagBits val) {
	std::string ret;
	if((val & VK_FENCE_CREATE_SIGNALED_BIT) == VK_FENCE_CREATE_SIGNALED_BIT) ret += "Signaled | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkQueryPipelineStatisticFlagBits val) {
	std::string ret;
	if((val & VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT) == VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT) ret += "InputAssemblyVertices | ";
	if((val & VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT) == VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT) ret += "InputAssemblyPrimitives | ";
	if((val & VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT) == VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT) ret += "VertexShaderInvocations | ";
	if((val & VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT) == VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT) ret += "GeometryShaderInvocations | ";
	if((val & VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT) == VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT) ret += "GeometryShaderPrimitives | ";
	if((val & VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT) == VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT) ret += "ClippingInvocations | ";
	if((val & VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT) == VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT) ret += "ClippingPrimitives | ";
	if((val & VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT) == VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT) ret += "FragmentShaderInvocations | ";
	if((val & VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT) == VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT) ret += "TessellationControlShaderPatches | ";
	if((val & VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT) == VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT) ret += "TessellationEvaluationShaderInvocations | ";
	if((val & VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT) == VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT) ret += "ComputeShaderInvocations | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkQueryResultFlagBits val) {
	std::string ret;
	if((val & VK_QUERY_RESULT_64_BIT) == VK_QUERY_RESULT_64_BIT) ret += "64 | ";
	if((val & VK_QUERY_RESULT_WAIT_BIT) == VK_QUERY_RESULT_WAIT_BIT) ret += "Wait | ";
	if((val & VK_QUERY_RESULT_WITH_AVAILABILITY_BIT) == VK_QUERY_RESULT_WITH_AVAILABILITY_BIT) ret += "WithAvailability | ";
	if((val & VK_QUERY_RESULT_PARTIAL_BIT) == VK_QUERY_RESULT_PARTIAL_BIT) ret += "Partial | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkImageViewCreateFlagBits val) {
	std::string ret;
	if((val & VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT) == VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT) ret += "FragmentDensityMapDynamicEXT | ";
	if((val & VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DEFERRED_BIT_EXT) == VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DEFERRED_BIT_EXT) ret += "FragmentDensityMapDeferredEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkShaderModuleCreateFlagBits) {
	std::string ret;
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkPipelineCacheCreateFlagBits val) {
	std::string ret;
	if((val & VK_PIPELINE_CACHE_CREATE_EXTERNALLY_SYNCHRONIZED_BIT_EXT) == VK_PIPELINE_CACHE_CREATE_EXTERNALLY_SYNCHRONIZED_BIT_EXT) ret += "ExternallySynchronizedEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkColorComponentFlagBits val) {
	std::string ret;
	if((val & VK_COLOR_COMPONENT_R_BIT) == VK_COLOR_COMPONENT_R_BIT) ret += "R | ";
	if((val & VK_COLOR_COMPONENT_G_BIT) == VK_COLOR_COMPONENT_G_BIT) ret += "G | ";
	if((val & VK_COLOR_COMPONENT_B_BIT) == VK_COLOR_COMPONENT_B_BIT) ret += "B | ";
	if((val & VK_COLOR_COMPONENT_A_BIT) == VK_COLOR_COMPONENT_A_BIT) ret += "A | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkPipelineCreateFlagBits val) {
	std::string ret;
	if((val & VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT) == VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT) ret += "DisableOptimization | ";
	if((val & VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT) == VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT) ret += "AllowDerivatives | ";
	if((val & VK_PIPELINE_CREATE_DERIVATIVE_BIT) == VK_PIPELINE_CREATE_DERIVATIVE_BIT) ret += "Derivative | ";
	if((val & VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT) == VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT) ret += "ViewIndexFromDeviceIndex | ";
	if((val & VK_PIPELINE_CREATE_DISPATCH_BASE_BIT) == VK_PIPELINE_CREATE_DISPATCH_BASE_BIT) ret += "DispatchBase | ";
	if((val & VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR) == VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR) ret += "RayTracingNoNullAnyHitShadersKHR | ";
	if((val & VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR) == VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR) ret += "RayTracingNoNullClosestHitShadersKHR | ";
	if((val & VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR) == VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR) ret += "RayTracingNoNullMissShadersKHR | ";
	if((val & VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR) == VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR) ret += "RayTracingNoNullIntersectionShadersKHR | ";
	if((val & VK_PIPELINE_CREATE_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR) == VK_PIPELINE_CREATE_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR) ret += "RayTracingSkipTrianglesKHR | ";
	if((val & VK_PIPELINE_CREATE_RAY_TRACING_SKIP_AABBS_BIT_KHR) == VK_PIPELINE_CREATE_RAY_TRACING_SKIP_AABBS_BIT_KHR) ret += "RayTracingSkipAabbsKHR | ";
	if((val & VK_PIPELINE_CREATE_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR) == VK_PIPELINE_CREATE_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR) ret += "RayTracingShaderGroupHandleCaptureReplayKHR | ";
	if((val & VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV) == VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV) ret += "DeferCompileNV | ";
	if((val & VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR) == VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR) ret += "CaptureStatisticsKHR | ";
	if((val & VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR) == VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR) ret += "CaptureInternalRepresentationsKHR | ";
	if((val & VK_PIPELINE_CREATE_INDIRECT_BINDABLE_BIT_NV) == VK_PIPELINE_CREATE_INDIRECT_BINDABLE_BIT_NV) ret += "IndirectBindableNV | ";
	if((val & VK_PIPELINE_CREATE_LIBRARY_BIT_KHR) == VK_PIPELINE_CREATE_LIBRARY_BIT_KHR) ret += "LibraryKHR | ";
	if((val & VK_PIPELINE_CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT_EXT) == VK_PIPELINE_CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT_EXT) ret += "FailOnPipelineCompileRequiredEXT | ";
	if((val & VK_PIPELINE_CREATE_EARLY_RETURN_ON_FAILURE_BIT_EXT) == VK_PIPELINE_CREATE_EARLY_RETURN_ON_FAILURE_BIT_EXT) ret += "EarlyReturnOnFailureEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkPipelineShaderStageCreateFlagBits val) {
	std::string ret;
	if((val & VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT) == VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT) ret += "AllowVaryingSubgroupSizeEXT | ";
	if((val & VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT) == VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT) ret += "RequireFullSubgroupsEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkCullModeFlagBits val) {
	std::string ret;
	if((val & VK_CULL_MODE_NONE) == VK_CULL_MODE_NONE) ret += "None | ";
	if((val & VK_CULL_MODE_BACK_BIT) == VK_CULL_MODE_BACK_BIT) ret += "Back | ";
	if((val & VK_CULL_MODE_FRONT_AND_BACK) == VK_CULL_MODE_FRONT_AND_BACK) ret += "FrontAndBack | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkSamplerCreateFlagBits val) {
	std::string ret;
	if((val & VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT) == VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT) ret += "SubsampledEXT | ";
	if((val & VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT) == VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT) ret += "SubsampledCoarseReconstructionEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkDescriptorPoolCreateFlagBits val) {
	std::string ret;
	if((val & VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT) == VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT) ret += "FreeDescriptorSet | ";
	if((val & VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT) == VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT) ret += "UpdateAfterBind | ";
	if((val & VK_DESCRIPTOR_POOL_CREATE_HOST_ONLY_BIT_VALVE) == VK_DESCRIPTOR_POOL_CREATE_HOST_ONLY_BIT_VALVE) ret += "HostOnlyVALVE | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkAttachmentDescriptionFlagBits val) {
	std::string ret;
	if((val & VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT) == VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT) ret += "MayAlias | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkDependencyFlagBits val) {
	std::string ret;
	if((val & VK_DEPENDENCY_BY_REGION_BIT) == VK_DEPENDENCY_BY_REGION_BIT) ret += "ByRegion | ";
	if((val & VK_DEPENDENCY_DEVICE_GROUP_BIT) == VK_DEPENDENCY_DEVICE_GROUP_BIT) ret += "DeviceGroup | ";
	if((val & VK_DEPENDENCY_VIEW_LOCAL_BIT) == VK_DEPENDENCY_VIEW_LOCAL_BIT) ret += "ViewLocal | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkFramebufferCreateFlagBits val) {
	std::string ret;
	if((val & VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT) == VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT) ret += "Imageless | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkRenderPassCreateFlagBits val) {
	std::string ret;
	if((val & VK_RENDER_PASS_CREATE_TRANSFORM_BIT_QCOM) == VK_RENDER_PASS_CREATE_TRANSFORM_BIT_QCOM) ret += "TransformQCOM | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkSubpassDescriptionFlagBits val) {
	std::string ret;
	if((val & VK_SUBPASS_DESCRIPTION_FRAGMENT_REGION_BIT_QCOM) == VK_SUBPASS_DESCRIPTION_FRAGMENT_REGION_BIT_QCOM) ret += "FragmentRegionQCOM | ";
	if((val & VK_SUBPASS_DESCRIPTION_SHADER_RESOLVE_BIT_QCOM) == VK_SUBPASS_DESCRIPTION_SHADER_RESOLVE_BIT_QCOM) ret += "ShaderResolveQCOM | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkCommandPoolCreateFlagBits val) {
	std::string ret;
	if((val & VK_COMMAND_POOL_CREATE_TRANSIENT_BIT) == VK_COMMAND_POOL_CREATE_TRANSIENT_BIT) ret += "Transient | ";
	if((val & VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT) == VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT) ret += "ResetCommandBuffer | ";
	if((val & VK_COMMAND_POOL_CREATE_PROTECTED_BIT) == VK_COMMAND_POOL_CREATE_PROTECTED_BIT) ret += "Protected | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkCommandPoolResetFlagBits val) {
	std::string ret;
	if((val & VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT) == VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT) ret += "ReleaseResources | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkCommandBufferUsageFlagBits val) {
	std::string ret;
	if((val & VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT) == VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT) ret += "OneTimeSubmit | ";
	if((val & VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT) == VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT) ret += "RenderPassContinue | ";
	if((val & VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT) == VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT) ret += "SimultaneousUse | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkQueryControlFlagBits val) {
	std::string ret;
	if((val & VK_QUERY_CONTROL_PRECISE_BIT) == VK_QUERY_CONTROL_PRECISE_BIT) ret += "Precise | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkCommandBufferResetFlagBits val) {
	std::string ret;
	if((val & VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT) == VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT) ret += "ReleaseResources | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkStencilFaceFlagBits val) {
	std::string ret;
	if((val & VK_STENCIL_FACE_FRONT_BIT) == VK_STENCIL_FACE_FRONT_BIT) ret += "Front | ";
	if((val & VK_STENCIL_FACE_BACK_BIT) == VK_STENCIL_FACE_BACK_BIT) ret += "Back | ";
	if((val & VK_STENCIL_FACE_FRONT_AND_BACK) == VK_STENCIL_FACE_FRONT_AND_BACK) ret += "FrontAndBack | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkSurfaceTransformFlagBitsKHR val) {
	switch(val) {
		case VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR: return "IdentityKHR";
		case VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR: return "Rotate90KHR";
		case VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR: return "Rotate180KHR";
		case VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR: return "Rotate270KHR";
		case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR: return "HorizontalMirrorKHR";
		case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR: return "HorizontalMirrorRotate90KHR";
		case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR: return "HorizontalMirrorRotate180KHR";
		case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR: return "HorizontalMirrorRotate270KHR";
		case VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR: return "InheritKHR";
		default: return "";
	}
}
inline const char* name(VkPresentModeKHR val) {
	switch(val) {
		case VK_PRESENT_MODE_IMMEDIATE_KHR: return "ImmediateKHR";
		case VK_PRESENT_MODE_MAILBOX_KHR: return "MailboxKHR";
		case VK_PRESENT_MODE_FIFO_KHR: return "FifoKHR";
		case VK_PRESENT_MODE_FIFO_RELAXED_KHR: return "FifoRelaxedKHR";
		case VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR: return "SharedDemandRefreshKHR";
		case VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR: return "SharedContinuousRefreshKHR";
		default: return "";
	}
}
inline const char* name(VkColorSpaceKHR val) {
	switch(val) {
		case VK_COLOR_SPACE_SRGB_NONLINEAR_KHR: return "SrgbNonlinearKHR";
		case VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT: return "DisplayP3NonlinearEXT";
		case VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT: return "ExtendedSrgbLinearEXT";
		case VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT: return "DisplayP3LinearEXT";
		case VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT: return "DciP3NonlinearEXT";
		case VK_COLOR_SPACE_BT709_LINEAR_EXT: return "Bt709LinearEXT";
		case VK_COLOR_SPACE_BT709_NONLINEAR_EXT: return "Bt709NonlinearEXT";
		case VK_COLOR_SPACE_BT2020_LINEAR_EXT: return "Bt2020LinearEXT";
		case VK_COLOR_SPACE_HDR10_ST2084_EXT: return "Hdr10St2084EXT";
		case VK_COLOR_SPACE_DOLBYVISION_EXT: return "DolbyvisionEXT";
		case VK_COLOR_SPACE_HDR10_HLG_EXT: return "Hdr10HlgEXT";
		case VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT: return "AdobergbLinearEXT";
		case VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT: return "AdobergbNonlinearEXT";
		case VK_COLOR_SPACE_PASS_THROUGH_EXT: return "PassThroughEXT";
		case VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT: return "ExtendedSrgbNonlinearEXT";
		case VK_COLOR_SPACE_DISPLAY_NATIVE_AMD: return "DisplayNativeAMD";
		default: return "";
	}
}
inline const char* name(VkCompositeAlphaFlagBitsKHR val) {
	switch(val) {
		case VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR: return "OpaqueKHR";
		case VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR: return "PreMultipliedKHR";
		case VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR: return "PostMultipliedKHR";
		case VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR: return "InheritKHR";
		default: return "";
	}
}
inline std::string flagNames(VkCompositeAlphaFlagBitsKHR val) {
	std::string ret;
	if((val & VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR) == VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR) ret += "OpaqueKHR | ";
	if((val & VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR) == VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR) ret += "PreMultipliedKHR | ";
	if((val & VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR) == VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR) ret += "PostMultipliedKHR | ";
	if((val & VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR) == VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR) ret += "InheritKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkSurfaceTransformFlagBitsKHR val) {
	std::string ret;
	if((val & VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR) == VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR) ret += "IdentityKHR | ";
	if((val & VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR) == VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR) ret += "Rotate90KHR | ";
	if((val & VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR) == VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR) ret += "Rotate180KHR | ";
	if((val & VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR) == VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR) ret += "Rotate270KHR | ";
	if((val & VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR) == VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR) ret += "HorizontalMirrorKHR | ";
	if((val & VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR) == VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR) ret += "HorizontalMirrorRotate90KHR | ";
	if((val & VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR) == VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR) ret += "HorizontalMirrorRotate180KHR | ";
	if((val & VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR) == VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR) ret += "HorizontalMirrorRotate270KHR | ";
	if((val & VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR) == VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR) ret += "InheritKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkSwapchainCreateFlagBitsKHR val) {
	switch(val) {
		case VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR: return "SplitInstanceBindRegionsKHR";
		case VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR: return "ProtectedKHR";
		case VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR: return "MutableFormatKHR";
		default: return "";
	}
}
inline const char* name(VkDeviceGroupPresentModeFlagBitsKHR val) {
	switch(val) {
		case VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR: return "LocalKHR";
		case VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR: return "RemoteKHR";
		case VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR: return "SumKHR";
		case VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR: return "LocalMultiDeviceKHR";
		default: return "";
	}
}
inline std::string flagNames(VkSwapchainCreateFlagBitsKHR val) {
	std::string ret;
	if((val & VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR) == VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR) ret += "SplitInstanceBindRegionsKHR | ";
	if((val & VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR) == VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR) ret += "ProtectedKHR | ";
	if((val & VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR) == VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR) ret += "MutableFormatKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkDeviceGroupPresentModeFlagBitsKHR val) {
	std::string ret;
	if((val & VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR) == VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR) ret += "LocalKHR | ";
	if((val & VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR) == VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR) ret += "RemoteKHR | ";
	if((val & VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR) == VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR) ret += "SumKHR | ";
	if((val & VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR) == VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR) ret += "LocalMultiDeviceKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkDisplayPlaneAlphaFlagBitsKHR val) {
	switch(val) {
		case VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR: return "OpaqueKHR";
		case VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR: return "GlobalKHR";
		case VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR: return "PerPixelKHR";
		case VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR: return "PerPixelPremultipliedKHR";
		default: return "";
	}
}
inline std::string flagNames(VkDisplayPlaneAlphaFlagBitsKHR val) {
	std::string ret;
	if((val & VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR) == VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR) ret += "OpaqueKHR | ";
	if((val & VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR) == VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR) ret += "GlobalKHR | ";
	if((val & VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR) == VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR) ret += "PerPixelKHR | ";
	if((val & VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR) == VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR) ret += "PerPixelPremultipliedKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkDebugReportFlagBitsEXT val) {
	switch(val) {
		case VK_DEBUG_REPORT_INFORMATION_BIT_EXT: return "InformationEXT";
		case VK_DEBUG_REPORT_WARNING_BIT_EXT: return "WarningEXT";
		case VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT: return "PerformanceWarningEXT";
		case VK_DEBUG_REPORT_ERROR_BIT_EXT: return "ErrorEXT";
		case VK_DEBUG_REPORT_DEBUG_BIT_EXT: return "DebugEXT";
		default: return "";
	}
}
inline const char* name(VkDebugReportObjectTypeEXT val) {
	switch(val) {
		case VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT: return "UnknownEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT: return "InstanceEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT: return "PhysicalDeviceEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT: return "DeviceEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT: return "QueueEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT: return "SemaphoreEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT: return "CommandBufferEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT: return "FenceEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT: return "DeviceMemoryEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT: return "BufferEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT: return "ImageEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT: return "ventEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT: return "QueryPoolEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT: return "BufferViewEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT: return "ImageViewEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT: return "ShaderModuleEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT: return "PipelineCacheEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT: return "PipelineLayoutEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT: return "RenderPassEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT: return "PipelineEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT: return "DescriptorSetLayoutEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT: return "SamplerEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT: return "DescriptorPoolEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT: return "DescriptorSetEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT: return "FramebufferEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT: return "CommandPoolEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT: return "SurfaceKhrEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT: return "SwapchainKhrEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT: return "DebugReportCallbackExtEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT: return "DisplayKhrEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT: return "DisplayModeKhrEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT: return "ValidationCacheExtEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT: return "SamplerYcbcrConversionEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT: return "DescriptorUpdateTemplateEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR_EXT: return "AccelerationStructureKhrEXT";
		case VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT: return "AccelerationStructureNvEXT";
		default: return "";
	}
}
inline std::string flagNames(VkDebugReportFlagBitsEXT val) {
	std::string ret;
	if((val & VK_DEBUG_REPORT_INFORMATION_BIT_EXT) == VK_DEBUG_REPORT_INFORMATION_BIT_EXT) ret += "InformationEXT | ";
	if((val & VK_DEBUG_REPORT_WARNING_BIT_EXT) == VK_DEBUG_REPORT_WARNING_BIT_EXT) ret += "WarningEXT | ";
	if((val & VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT) == VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT) ret += "PerformanceWarningEXT | ";
	if((val & VK_DEBUG_REPORT_ERROR_BIT_EXT) == VK_DEBUG_REPORT_ERROR_BIT_EXT) ret += "ErrorEXT | ";
	if((val & VK_DEBUG_REPORT_DEBUG_BIT_EXT) == VK_DEBUG_REPORT_DEBUG_BIT_EXT) ret += "DebugEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkRasterizationOrderAMD val) {
	switch(val) {
		case VK_RASTERIZATION_ORDER_STRICT_AMD: return "StrictAMD";
		case VK_RASTERIZATION_ORDER_RELAXED_AMD: return "RelaxedAMD";
		default: return "";
	}
}
inline const char* name(VkShaderInfoTypeAMD val) {
	switch(val) {
		case VK_SHADER_INFO_TYPE_STATISTICS_AMD: return "StatisticsAMD";
		case VK_SHADER_INFO_TYPE_BINARY_AMD: return "BinaryAMD";
		case VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD: return "DisassemblyAMD";
		default: return "";
	}
}
inline const char* name(VkExternalMemoryHandleTypeFlagBitsNV val) {
	switch(val) {
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV: return "OpaqueWin32NV";
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV: return "OpaqueWin32KmtNV";
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV: return "D3d11ImageNV";
		case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV: return "D3d11ImageKmtNV";
		default: return "";
	}
}
inline const char* name(VkExternalMemoryFeatureFlagBitsNV val) {
	switch(val) {
		case VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV: return "DedicatedOnlyNV";
		case VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV: return "ExportableNV";
		case VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV: return "ImportableNV";
		default: return "";
	}
}
inline std::string flagNames(VkExternalMemoryHandleTypeFlagBitsNV val) {
	std::string ret;
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV) ret += "OpaqueWin32NV | ";
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV) ret += "OpaqueWin32KmtNV | ";
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV) ret += "D3d11ImageNV | ";
	if((val & VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV) == VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV) ret += "D3d11ImageKmtNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkExternalMemoryFeatureFlagBitsNV val) {
	std::string ret;
	if((val & VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV) == VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV) ret += "DedicatedOnlyNV | ";
	if((val & VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV) == VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV) ret += "ExportableNV | ";
	if((val & VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV) == VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV) ret += "ImportableNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkValidationCheckEXT val) {
	switch(val) {
		case VK_VALIDATION_CHECK_ALL_EXT: return "AllEXT";
		case VK_VALIDATION_CHECK_SHADERS_EXT: return "ShadersEXT";
		default: return "";
	}
}
inline const char* name(VkConditionalRenderingFlagBitsEXT val) {
	switch(val) {
		case VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT: return "InvertedEXT";
		default: return "";
	}
}
inline std::string flagNames(VkConditionalRenderingFlagBitsEXT val) {
	std::string ret;
	if((val & VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT) == VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT) ret += "InvertedEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkSurfaceCounterFlagBitsEXT val) {
	switch(val) {
		case VK_SURFACE_COUNTER_VBLANK_BIT_EXT: return "VblankEXT";
		default: return "";
	}
}
inline std::string flagNames(VkSurfaceCounterFlagBitsEXT val) {
	std::string ret;
	if((val & VK_SURFACE_COUNTER_VBLANK_BIT_EXT) == VK_SURFACE_COUNTER_VBLANK_BIT_EXT) ret += "VblankEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkDisplayPowerStateEXT val) {
	switch(val) {
		case VK_DISPLAY_POWER_STATE_OFF_EXT: return "OffEXT";
		case VK_DISPLAY_POWER_STATE_SUSPEND_EXT: return "SuspendEXT";
		case VK_DISPLAY_POWER_STATE_ON_EXT: return "OnEXT";
		default: return "";
	}
}
inline const char* name(VkDeviceEventTypeEXT val) {
	switch(val) {
		case VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT: return "DisplayHotplugEXT";
		default: return "";
	}
}
inline const char* name(VkDisplayEventTypeEXT val) {
	switch(val) {
		case VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT: return "FirstPixelOutEXT";
		default: return "";
	}
}
inline const char* name(VkViewportCoordinateSwizzleNV val) {
	switch(val) {
		case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV: return "PositiveXNV";
		case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV: return "egativeXNV";
		case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV: return "PositiveYNV";
		case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV: return "egativeYNV";
		case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV: return "PositiveZNV";
		case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV: return "egativeZNV";
		case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV: return "PositiveWNV";
		case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV: return "egativeWNV";
		default: return "";
	}
}
inline const char* name(VkDiscardRectangleModeEXT val) {
	switch(val) {
		case VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT: return "InclusiveEXT";
		case VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT: return "xclusiveEXT";
		default: return "";
	}
}
inline const char* name(VkConservativeRasterizationModeEXT val) {
	switch(val) {
		case VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT: return "DisabledEXT";
		case VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT: return "OverestimateEXT";
		case VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT: return "UnderestimateEXT";
		default: return "";
	}
}
inline const char* name(VkPerformanceCounterUnitKHR val) {
	switch(val) {
		case VK_PERFORMANCE_COUNTER_UNIT_GENERIC_KHR: return "GenericKHR";
		case VK_PERFORMANCE_COUNTER_UNIT_PERCENTAGE_KHR: return "PercentageKHR";
		case VK_PERFORMANCE_COUNTER_UNIT_NANOSECONDS_KHR: return "NanosecondsKHR";
		case VK_PERFORMANCE_COUNTER_UNIT_BYTES_KHR: return "BytesKHR";
		case VK_PERFORMANCE_COUNTER_UNIT_BYTES_PER_SECOND_KHR: return "BytesPerSecondKHR";
		case VK_PERFORMANCE_COUNTER_UNIT_KELVIN_KHR: return "elvinKHR";
		case VK_PERFORMANCE_COUNTER_UNIT_WATTS_KHR: return "WattsKHR";
		case VK_PERFORMANCE_COUNTER_UNIT_VOLTS_KHR: return "VoltsKHR";
		case VK_PERFORMANCE_COUNTER_UNIT_AMPS_KHR: return "AmpsKHR";
		case VK_PERFORMANCE_COUNTER_UNIT_HERTZ_KHR: return "HertzKHR";
		case VK_PERFORMANCE_COUNTER_UNIT_CYCLES_KHR: return "CyclesKHR";
		default: return "";
	}
}
inline const char* name(VkPerformanceCounterScopeKHR val) {
	switch(val) {
		case VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_BUFFER_KHR: return "CommandBufferKHR";
		case VK_PERFORMANCE_COUNTER_SCOPE_RENDER_PASS_KHR: return "RenderPassKHR";
		case VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_KHR: return "CommandKHR";
		default: return "";
	}
}
inline const char* name(VkPerformanceCounterStorageKHR val) {
	switch(val) {
		case VK_PERFORMANCE_COUNTER_STORAGE_INT32_KHR: return "Int32KHR";
		case VK_PERFORMANCE_COUNTER_STORAGE_INT64_KHR: return "Int64KHR";
		case VK_PERFORMANCE_COUNTER_STORAGE_UINT32_KHR: return "Uint32KHR";
		case VK_PERFORMANCE_COUNTER_STORAGE_UINT64_KHR: return "Uint64KHR";
		case VK_PERFORMANCE_COUNTER_STORAGE_FLOAT32_KHR: return "Float32KHR";
		case VK_PERFORMANCE_COUNTER_STORAGE_FLOAT64_KHR: return "Float64KHR";
		default: return "";
	}
}
inline const char* name(VkPerformanceCounterDescriptionFlagBitsKHR val) {
	switch(val) {
		case VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR: return "PerformanceImpactingKHR";
		case VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR: return "ConcurrentlyImpactedKHR";
		default: return "";
	}
}
inline const char* name(VkAcquireProfilingLockFlagBitsKHR val) {
	switch(val) {
		default: return "";
	}
}
inline std::string flagNames(VkPerformanceCounterDescriptionFlagBitsKHR val) {
	std::string ret;
	if((val & VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR) == VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR) ret += "PerformanceImpactingKHR | ";
	if((val & VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR) == VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR) ret += "ConcurrentlyImpactedKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkAcquireProfilingLockFlagBitsKHR) {
	std::string ret;
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkDebugUtilsMessageSeverityFlagBitsEXT val) {
	switch(val) {
		case VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT: return "VerboseEXT";
		case VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT: return "InfoEXT";
		case VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT: return "WarningEXT";
		case VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT: return "ErrorEXT";
		default: return "";
	}
}
inline const char* name(VkDebugUtilsMessageTypeFlagBitsEXT val) {
	switch(val) {
		case VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT: return "GeneralEXT";
		case VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT: return "ValidationEXT";
		case VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT: return "PerformanceEXT";
		default: return "";
	}
}
inline std::string flagNames(VkDebugUtilsMessageTypeFlagBitsEXT val) {
	std::string ret;
	if((val & VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT) == VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT) ret += "GeneralEXT | ";
	if((val & VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT) == VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT) ret += "ValidationEXT | ";
	if((val & VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT) == VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT) ret += "PerformanceEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkDebugUtilsMessageSeverityFlagBitsEXT val) {
	std::string ret;
	if((val & VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT) == VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT) ret += "VerboseEXT | ";
	if((val & VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT) == VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT) ret += "InfoEXT | ";
	if((val & VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT) == VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT) ret += "WarningEXT | ";
	if((val & VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT) == VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT) ret += "ErrorEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkBlendOverlapEXT val) {
	switch(val) {
		case VK_BLEND_OVERLAP_UNCORRELATED_EXT: return "UncorrelatedEXT";
		case VK_BLEND_OVERLAP_DISJOINT_EXT: return "DisjointEXT";
		case VK_BLEND_OVERLAP_CONJOINT_EXT: return "ConjointEXT";
		default: return "";
	}
}
inline const char* name(VkAccelerationStructureTypeKHR val) {
	switch(val) {
		case VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR: return "TopLevelKHR";
		case VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR: return "BottomLevelKHR";
		case VK_ACCELERATION_STRUCTURE_TYPE_GENERIC_KHR: return "GenericKHR";
		default: return "";
	}
}
inline const char* name(VkBuildAccelerationStructureFlagBitsKHR val) {
	switch(val) {
		case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_KHR: return "AllowUpdateKHR";
		case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_KHR: return "AllowCompactionKHR";
		case VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR: return "PreferFastTraceKHR";
		case VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR: return "PreferFastBuildKHR";
		case VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_KHR: return "LowMemoryKHR";
		default: return "";
	}
}
inline const char* name(VkBuildAccelerationStructureModeKHR val) {
	switch(val) {
		case VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR: return "BuildKHR";
		case VK_BUILD_ACCELERATION_STRUCTURE_MODE_UPDATE_KHR: return "UpdateKHR";
		default: return "";
	}
}
inline const char* name(VkGeometryTypeKHR val) {
	switch(val) {
		case VK_GEOMETRY_TYPE_TRIANGLES_KHR: return "TrianglesKHR";
		case VK_GEOMETRY_TYPE_AABBS_KHR: return "AabbsKHR";
		case VK_GEOMETRY_TYPE_INSTANCES_KHR: return "InstancesKHR";
		default: return "";
	}
}
inline const char* name(VkGeometryFlagBitsKHR val) {
	switch(val) {
		case VK_GEOMETRY_OPAQUE_BIT_KHR: return "OpaqueKHR";
		case VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR: return "NoDuplicateAnyHitInvocationKHR";
		default: return "";
	}
}
inline const char* name(VkAccelerationStructureBuildTypeKHR val) {
	switch(val) {
		case VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_KHR: return "HostKHR";
		case VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR: return "DeviceKHR";
		case VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_OR_DEVICE_KHR: return "HostOrDeviceKHR";
		default: return "";
	}
}
inline const char* name(VkGeometryInstanceFlagBitsKHR val) {
	switch(val) {
		case VK_GEOMETRY_INSTANCE_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR: return "TriangleFacingCullDisableKHR";
		case VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_KHR: return "TriangleFrontCounterclockwiseKHR";
		case VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_KHR: return "ForceOpaqueKHR";
		case VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_KHR: return "ForceNoOpaqueKHR";
		default: return "";
	}
}
inline const char* name(VkAccelerationStructureCreateFlagBitsKHR val) {
	switch(val) {
		case VK_ACCELERATION_STRUCTURE_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR: return "DeviceAddressCaptureReplayKHR";
		default: return "";
	}
}
inline const char* name(VkCopyAccelerationStructureModeKHR val) {
	switch(val) {
		case VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_KHR: return "CloneKHR";
		case VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_KHR: return "CompactKHR";
		case VK_COPY_ACCELERATION_STRUCTURE_MODE_SERIALIZE_KHR: return "SerializeKHR";
		case VK_COPY_ACCELERATION_STRUCTURE_MODE_DESERIALIZE_KHR: return "DeserializeKHR";
		default: return "";
	}
}
inline const char* name(VkAccelerationStructureCompatibilityKHR val) {
	switch(val) {
		case VK_ACCELERATION_STRUCTURE_COMPATIBILITY_COMPATIBLE_KHR: return "CompatibleKHR";
		case VK_ACCELERATION_STRUCTURE_COMPATIBILITY_INCOMPATIBLE_KHR: return "IncompatibleKHR";
		default: return "";
	}
}
inline std::string flagNames(VkBuildAccelerationStructureFlagBitsKHR val) {
	std::string ret;
	if((val & VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_KHR) == VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_KHR) ret += "AllowUpdateKHR | ";
	if((val & VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_KHR) == VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_KHR) ret += "AllowCompactionKHR | ";
	if((val & VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR) == VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR) ret += "PreferFastTraceKHR | ";
	if((val & VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR) == VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR) ret += "PreferFastBuildKHR | ";
	if((val & VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_KHR) == VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_KHR) ret += "LowMemoryKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkGeometryFlagBitsKHR val) {
	std::string ret;
	if((val & VK_GEOMETRY_OPAQUE_BIT_KHR) == VK_GEOMETRY_OPAQUE_BIT_KHR) ret += "OpaqueKHR | ";
	if((val & VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR) == VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR) ret += "NoDuplicateAnyHitInvocationKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkGeometryInstanceFlagBitsKHR val) {
	std::string ret;
	if((val & VK_GEOMETRY_INSTANCE_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR) == VK_GEOMETRY_INSTANCE_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR) ret += "TriangleFacingCullDisableKHR | ";
	if((val & VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_KHR) == VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_KHR) ret += "TriangleFrontCounterclockwiseKHR | ";
	if((val & VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_KHR) == VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_KHR) ret += "ForceOpaqueKHR | ";
	if((val & VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_KHR) == VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_KHR) ret += "ForceNoOpaqueKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkAccelerationStructureCreateFlagBitsKHR val) {
	std::string ret;
	if((val & VK_ACCELERATION_STRUCTURE_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR) == VK_ACCELERATION_STRUCTURE_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR) ret += "DeviceAddressCaptureReplayKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkRayTracingShaderGroupTypeKHR val) {
	switch(val) {
		case VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_KHR: return "GeneralKHR";
		case VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_KHR: return "TrianglesHitGroupKHR";
		case VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_KHR: return "ProceduralHitGroupKHR";
		default: return "";
	}
}
inline const char* name(VkShaderGroupShaderKHR val) {
	switch(val) {
		case VK_SHADER_GROUP_SHADER_GENERAL_KHR: return "GeneralKHR";
		case VK_SHADER_GROUP_SHADER_CLOSEST_HIT_KHR: return "ClosestHitKHR";
		case VK_SHADER_GROUP_SHADER_ANY_HIT_KHR: return "AnyHitKHR";
		case VK_SHADER_GROUP_SHADER_INTERSECTION_KHR: return "IntersectionKHR";
		default: return "";
	}
}
inline const char* name(VkCoverageModulationModeNV val) {
	switch(val) {
		case VK_COVERAGE_MODULATION_MODE_NONE_NV: return "oneNV";
		case VK_COVERAGE_MODULATION_MODE_RGB_NV: return "RgbNV";
		case VK_COVERAGE_MODULATION_MODE_ALPHA_NV: return "AlphaNV";
		case VK_COVERAGE_MODULATION_MODE_RGBA_NV: return "RgbaNV";
		default: return "";
	}
}
inline const char* name(VkValidationCacheHeaderVersionEXT val) {
	switch(val) {
		case VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT: return "OneEXT";
		default: return "";
	}
}
inline const char* name(VkShadingRatePaletteEntryNV val) {
	switch(val) {
		case VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV: return "oInvocationsNV";
		case VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV: return "16InvocationsPerPixelNV";
		case VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV: return "8InvocationsPerPixelNV";
		case VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV: return "4InvocationsPerPixelNV";
		case VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV: return "2InvocationsPerPixelNV";
		case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV: return "1InvocationPerPixelNV";
		case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV: return "1InvocationPer2x1PixelsNV";
		case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV: return "1InvocationPer1x2PixelsNV";
		case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV: return "1InvocationPer2x2PixelsNV";
		case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV: return "1InvocationPer4x2PixelsNV";
		case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV: return "1InvocationPer2x4PixelsNV";
		case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV: return "1InvocationPer4x4PixelsNV";
		default: return "";
	}
}
inline const char* name(VkCoarseSampleOrderTypeNV val) {
	switch(val) {
		case VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV: return "DefaultNV";
		case VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV: return "CustomNV";
		case VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV: return "PixelMajorNV";
		case VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV: return "SampleMajorNV";
		default: return "";
	}
}
inline const char* name(VkAccelerationStructureMemoryRequirementsTypeNV val) {
	switch(val) {
		case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV: return "ObjectNV";
		case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV: return "BuildScratchNV";
		case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV: return "UpdateScratchNV";
		default: return "";
	}
}
inline const char* name(VkQueueGlobalPriorityEXT val) {
	switch(val) {
		case VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT: return "LowEXT";
		case VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT: return "MediumEXT";
		case VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT: return "HighEXT";
		case VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT: return "RealtimeEXT";
		default: return "";
	}
}
inline const char* name(VkPipelineCompilerControlFlagBitsAMD val) {
	switch(val) {
		default: return "";
	}
}
inline std::string flagNames(VkPipelineCompilerControlFlagBitsAMD) {
	std::string ret;
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkTimeDomainEXT val) {
	switch(val) {
		case VK_TIME_DOMAIN_DEVICE_EXT: return "DeviceEXT";
		case VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT: return "ClockMonotonicEXT";
		case VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT: return "ClockMonotonicRawEXT";
		case VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT: return "QueryPerformanceCounterEXT";
		default: return "";
	}
}
inline const char* name(VkMemoryOverallocationBehaviorAMD val) {
	switch(val) {
		case VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD: return "DefaultAMD";
		case VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD: return "llowedAMD";
		case VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD: return "DisallowedAMD";
		default: return "";
	}
}
inline const char* name(VkPipelineCreationFeedbackFlagBitsEXT val) {
	switch(val) {
		case VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT: return "ValidEXT";
		case VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT: return "ApplicationPipelineCacheHitEXT";
		case VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT: return "BasePipelineAccelerationEXT";
		default: return "";
	}
}
inline std::string flagNames(VkPipelineCreationFeedbackFlagBitsEXT val) {
	std::string ret;
	if((val & VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT) == VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT) ret += "ValidEXT | ";
	if((val & VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT) == VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT) ret += "ApplicationPipelineCacheHitEXT | ";
	if((val & VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT) == VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT) ret += "BasePipelineAccelerationEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkSemaphoreWaitFlagBits val) {
	switch(val) {
		case VK_SEMAPHORE_WAIT_ANY_BIT: return "Any";
		default: return "";
	}
}
inline std::string flagNames(VkSemaphoreWaitFlagBits val) {
	std::string ret;
	if((val & VK_SEMAPHORE_WAIT_ANY_BIT) == VK_SEMAPHORE_WAIT_ANY_BIT) ret += "Any | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkPerformanceConfigurationTypeINTEL val) {
	switch(val) {
		case VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL: return "CommandQueueMetricsDiscoveryActivatedINTEL";
		default: return "";
	}
}
inline const char* name(VkQueryPoolSamplingModeINTEL val) {
	switch(val) {
		case VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL: return "ManualINTEL";
		default: return "";
	}
}
inline const char* name(VkPerformanceOverrideTypeINTEL val) {
	switch(val) {
		case VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL: return "NullHardwareINTEL";
		case VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL: return "FlushGpuCachesINTEL";
		default: return "";
	}
}
inline const char* name(VkPerformanceParameterTypeINTEL val) {
	switch(val) {
		case VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL: return "HwCountersSupportedINTEL";
		case VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL: return "StreamMarkerValidBitsINTEL";
		default: return "";
	}
}
inline const char* name(VkPerformanceValueTypeINTEL val) {
	switch(val) {
		case VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL: return "Uint32INTEL";
		case VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL: return "Uint64INTEL";
		case VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL: return "FloatINTEL";
		case VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL: return "BoolINTEL";
		case VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL: return "StringINTEL";
		default: return "";
	}
}
inline const char* name(VkFragmentShadingRateCombinerOpKHR val) {
	switch(val) {
		case VK_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_KHR: return "eepKHR";
		case VK_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_KHR: return "ReplaceKHR";
		case VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_KHR: return "MinKHR";
		case VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_KHR: return "MaxKHR";
		case VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_KHR: return "MulKHR";
		default: return "";
	}
}
inline const char* name(VkShaderCorePropertiesFlagBitsAMD val) {
	switch(val) {
		default: return "";
	}
}
inline std::string flagNames(VkShaderCorePropertiesFlagBitsAMD) {
	std::string ret;
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkToolPurposeFlagBitsEXT val) {
	switch(val) {
		case VK_TOOL_PURPOSE_VALIDATION_BIT_EXT: return "ValidationEXT";
		case VK_TOOL_PURPOSE_PROFILING_BIT_EXT: return "ProfilingEXT";
		case VK_TOOL_PURPOSE_TRACING_BIT_EXT: return "TracingEXT";
		case VK_TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT_EXT: return "AdditionalFeaturesEXT";
		case VK_TOOL_PURPOSE_MODIFYING_FEATURES_BIT_EXT: return "ModifyingFeaturesEXT";
		case VK_TOOL_PURPOSE_DEBUG_REPORTING_BIT_EXT: return "DebugReportingEXT";
		case VK_TOOL_PURPOSE_DEBUG_MARKERS_BIT_EXT: return "DebugMarkersEXT";
		default: return "";
	}
}
inline std::string flagNames(VkToolPurposeFlagBitsEXT val) {
	std::string ret;
	if((val & VK_TOOL_PURPOSE_VALIDATION_BIT_EXT) == VK_TOOL_PURPOSE_VALIDATION_BIT_EXT) ret += "ValidationEXT | ";
	if((val & VK_TOOL_PURPOSE_PROFILING_BIT_EXT) == VK_TOOL_PURPOSE_PROFILING_BIT_EXT) ret += "ProfilingEXT | ";
	if((val & VK_TOOL_PURPOSE_TRACING_BIT_EXT) == VK_TOOL_PURPOSE_TRACING_BIT_EXT) ret += "TracingEXT | ";
	if((val & VK_TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT_EXT) == VK_TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT_EXT) ret += "AdditionalFeaturesEXT | ";
	if((val & VK_TOOL_PURPOSE_MODIFYING_FEATURES_BIT_EXT) == VK_TOOL_PURPOSE_MODIFYING_FEATURES_BIT_EXT) ret += "ModifyingFeaturesEXT | ";
	if((val & VK_TOOL_PURPOSE_DEBUG_REPORTING_BIT_EXT) == VK_TOOL_PURPOSE_DEBUG_REPORTING_BIT_EXT) ret += "DebugReportingEXT | ";
	if((val & VK_TOOL_PURPOSE_DEBUG_MARKERS_BIT_EXT) == VK_TOOL_PURPOSE_DEBUG_MARKERS_BIT_EXT) ret += "DebugMarkersEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkValidationFeatureEnableEXT val) {
	switch(val) {
		case VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT: return "GpuAssistedEXT";
		case VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT: return "GpuAssistedReserveBindingSlotEXT";
		case VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT: return "BestPracticesEXT";
		case VK_VALIDATION_FEATURE_ENABLE_DEBUG_PRINTF_EXT: return "DebugPrintfEXT";
		case VK_VALIDATION_FEATURE_ENABLE_SYNCHRONIZATION_VALIDATION_EXT: return "SynchronizationValidationEXT";
		default: return "";
	}
}
inline const char* name(VkValidationFeatureDisableEXT val) {
	switch(val) {
		case VK_VALIDATION_FEATURE_DISABLE_ALL_EXT: return "AllEXT";
		case VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT: return "ShadersEXT";
		case VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT: return "ThreadSafetyEXT";
		case VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT: return "ApiParametersEXT";
		case VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT: return "ObjectLifetimesEXT";
		case VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT: return "CoreChecksEXT";
		case VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT: return "UniqueHandlesEXT";
		default: return "";
	}
}
inline const char* name(VkComponentTypeNV val) {
	switch(val) {
		case VK_COMPONENT_TYPE_FLOAT16_NV: return "Float16NV";
		case VK_COMPONENT_TYPE_FLOAT32_NV: return "Float32NV";
		case VK_COMPONENT_TYPE_FLOAT64_NV: return "Float64NV";
		case VK_COMPONENT_TYPE_SINT8_NV: return "Sint8NV";
		case VK_COMPONENT_TYPE_SINT16_NV: return "Sint16NV";
		case VK_COMPONENT_TYPE_SINT32_NV: return "Sint32NV";
		case VK_COMPONENT_TYPE_SINT64_NV: return "Sint64NV";
		case VK_COMPONENT_TYPE_UINT8_NV: return "Uint8NV";
		case VK_COMPONENT_TYPE_UINT16_NV: return "Uint16NV";
		case VK_COMPONENT_TYPE_UINT32_NV: return "Uint32NV";
		case VK_COMPONENT_TYPE_UINT64_NV: return "Uint64NV";
		default: return "";
	}
}
inline const char* name(VkScopeNV val) {
	switch(val) {
		case VK_SCOPE_DEVICE_NV: return "DeviceNV";
		case VK_SCOPE_WORKGROUP_NV: return "WorkgroupNV";
		case VK_SCOPE_SUBGROUP_NV: return "SubgroupNV";
		case VK_SCOPE_QUEUE_FAMILY_NV: return "QueueFamilyNV";
		default: return "";
	}
}
inline const char* name(VkCoverageReductionModeNV val) {
	switch(val) {
		case VK_COVERAGE_REDUCTION_MODE_MERGE_NV: return "MergeNV";
		case VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV: return "TruncateNV";
		default: return "";
	}
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
inline const char* name(VkFullScreenExclusiveEXT val) {
	switch(val) {
		case VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT: return "DefaultEXT";
		case VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT: return "AllowedEXT";
		case VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT: return "DisallowedEXT";
		case VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT: return "ApplicationControlledEXT";
		default: return "";
	}
}
#endif //VK_USE_PLATFORM_WIN32_KHR

inline const char* name(VkLineRasterizationModeEXT val) {
	switch(val) {
		case VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT: return "DefaultEXT";
		case VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT: return "RectangularEXT";
		case VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT: return "BresenhamEXT";
		case VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT: return "RectangularSmoothEXT";
		default: return "";
	}
}
inline const char* name(VkPipelineExecutableStatisticFormatKHR val) {
	switch(val) {
		case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR: return "Bool32KHR";
		case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR: return "Int64KHR";
		case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR: return "Uint64KHR";
		case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR: return "Float64KHR";
		default: return "";
	}
}
inline const char* name(VkIndirectStateFlagBitsNV val) {
	switch(val) {
		case VK_INDIRECT_STATE_FLAG_FRONTFACE_BIT_NV: return "FlagFrontfaceNV";
		default: return "";
	}
}
inline const char* name(VkIndirectCommandsTokenTypeNV val) {
	switch(val) {
		case VK_INDIRECT_COMMANDS_TOKEN_TYPE_SHADER_GROUP_NV: return "ShaderGroupNV";
		case VK_INDIRECT_COMMANDS_TOKEN_TYPE_STATE_FLAGS_NV: return "StateFlagsNV";
		case VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NV: return "IndexBufferNV";
		case VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NV: return "VertexBufferNV";
		case VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NV: return "PushConstantNV";
		case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NV: return "DrawIndexedNV";
		case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NV: return "DrawNV";
		case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_TASKS_NV: return "DrawTasksNV";
		default: return "";
	}
}
inline const char* name(VkIndirectCommandsLayoutUsageFlagBitsNV val) {
	switch(val) {
		case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EXPLICIT_PREPROCESS_BIT_NV: return "ExplicitPreprocessNV";
		case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NV: return "IndexedSequencesNV";
		case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NV: return "UnorderedSequencesNV";
		default: return "";
	}
}
inline std::string flagNames(VkIndirectStateFlagBitsNV val) {
	std::string ret;
	if((val & VK_INDIRECT_STATE_FLAG_FRONTFACE_BIT_NV) == VK_INDIRECT_STATE_FLAG_FRONTFACE_BIT_NV) ret += "FlagFrontfaceNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string flagNames(VkIndirectCommandsLayoutUsageFlagBitsNV val) {
	std::string ret;
	if((val & VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EXPLICIT_PREPROCESS_BIT_NV) == VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EXPLICIT_PREPROCESS_BIT_NV) ret += "ExplicitPreprocessNV | ";
	if((val & VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NV) == VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NV) ret += "IndexedSequencesNV | ";
	if((val & VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NV) == VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NV) ret += "UnorderedSequencesNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkDeviceMemoryReportEventTypeEXT val) {
	switch(val) {
		case VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATE_EXT: return "AllocateEXT";
		case VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_FREE_EXT: return "FreeEXT";
		case VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_IMPORT_EXT: return "ImportEXT";
		case VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_UNIMPORT_EXT: return "UnimportEXT";
		case VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATION_FAILED_EXT: return "AllocationFailedEXT";
		default: return "";
	}
}
inline const char* name(VkPrivateDataSlotCreateFlagBitsEXT val) {
	switch(val) {
		default: return "";
	}
}
inline std::string flagNames(VkPrivateDataSlotCreateFlagBitsEXT) {
	std::string ret;
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkDeviceDiagnosticsConfigFlagBitsNV val) {
	switch(val) {
		case VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_DEBUG_INFO_BIT_NV: return "EnableShaderDebugInfoNV";
		case VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_RESOURCE_TRACKING_BIT_NV: return "EnableResourceTrackingNV";
		case VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_AUTOMATIC_CHECKPOINTS_BIT_NV: return "EnableAutomaticCheckpointsNV";
		default: return "";
	}
}
inline std::string flagNames(VkDeviceDiagnosticsConfigFlagBitsNV val) {
	std::string ret;
	if((val & VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_DEBUG_INFO_BIT_NV) == VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_DEBUG_INFO_BIT_NV) ret += "EnableShaderDebugInfoNV | ";
	if((val & VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_RESOURCE_TRACKING_BIT_NV) == VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_RESOURCE_TRACKING_BIT_NV) ret += "EnableResourceTrackingNV | ";
	if((val & VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_AUTOMATIC_CHECKPOINTS_BIT_NV) == VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_AUTOMATIC_CHECKPOINTS_BIT_NV) ret += "EnableAutomaticCheckpointsNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VkFragmentShadingRateTypeNV val) {
	switch(val) {
		case VK_FRAGMENT_SHADING_RATE_TYPE_FRAGMENT_SIZE_NV: return "FragmentSizeNV";
		case VK_FRAGMENT_SHADING_RATE_TYPE_ENUMS_NV: return "EnumsNV";
		default: return "";
	}
}
inline const char* name(VkFragmentShadingRateNV val) {
	switch(val) {
		case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV: return "1InvocationPerPixelNV";
		case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV: return "1InvocationPer1x2PixelsNV";
		case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV: return "1InvocationPer2x1PixelsNV";
		case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV: return "1InvocationPer2x2PixelsNV";
		case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV: return "1InvocationPer2x4PixelsNV";
		case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV: return "1InvocationPer4x2PixelsNV";
		case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV: return "1InvocationPer4x4PixelsNV";
		case VK_FRAGMENT_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV: return "2InvocationsPerPixelNV";
		case VK_FRAGMENT_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV: return "4InvocationsPerPixelNV";
		case VK_FRAGMENT_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV: return "8InvocationsPerPixelNV";
		case VK_FRAGMENT_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV: return "16InvocationsPerPixelNV";
		case VK_FRAGMENT_SHADING_RATE_NO_INVOCATIONS_NV: return "oInvocationsNV";
		default: return "";
	}
}

} // namespace vk
