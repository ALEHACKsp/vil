#pragma once

#include "device.hpp"

namespace fuen {

// Which member in descriptor binding is valid
enum class DescriptorCategory {
	none,
	image,
	buffer,
	bufferView
};

DescriptorCategory category(VkDescriptorType);

struct DescriptorPool : DeviceHandle {
	VkDescriptorPool handle {};
	std::vector<DescriptorSet*> descriptorSets;
};

struct DescriptorSetLayout : DeviceHandle {
	VkDescriptorSetLayout handle {};

	// Static after creation.
	// Ordered by binding.
	std::vector<VkDescriptorSetLayoutBinding> bindings;
};

struct DescriptorSet : DeviceHandle {
	DescriptorPool* pool {};
	DescriptorSetLayout* layout {};
	VkDescriptorSet handle {};

	struct Binding {
		bool valid {};
		union {
			VkDescriptorBufferInfo bufferInfo;
			VkDescriptorImageInfo imageInfo;
			VkBufferView bufferView;
		};
	};

	std::vector<std::vector<Binding>> bindings;
};

VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorSetLayout(
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorSetLayout*                      pSetLayout);

VKAPI_ATTR void VKAPI_CALL DestroyDescriptorSetLayout(
    VkDevice                                    device,
    VkDescriptorSetLayout                       descriptorSetLayout,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorPool(
    VkDevice                                    device,
    const VkDescriptorPoolCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorPool*                           pDescriptorPool);

VKAPI_ATTR void VKAPI_CALL DestroyDescriptorPool(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL ResetDescriptorPool(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags);

VKAPI_ATTR VkResult VKAPI_CALL AllocateDescriptorSets(
    VkDevice                                    device,
    const VkDescriptorSetAllocateInfo*          pAllocateInfo,
    VkDescriptorSet*                            pDescriptorSets);

VKAPI_ATTR VkResult VKAPI_CALL FreeDescriptorSets(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets);

VKAPI_ATTR void VKAPI_CALL UpdateDescriptorSets(
    VkDevice                                    device,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const VkCopyDescriptorSet*                  pDescriptorCopies);

} // namespace fuen
