#pragma once

// Make sure to *never* include them
#define VK_NO_PROTOTYPES

// TODO: leave to build system/config file
#define VK_USE_PLATFORM_WAYLAND_KHR

#include <vkpp/span.hpp>

// yep, this is bad.
namespace std {
	using nytl::span;
} // namespace std

namespace fuen {

// C++20: replace with std::span
using nytl::span;

struct Device;
struct Instance;
struct Queue;
struct Swapchain;
struct Image;
struct ImageView;
struct Framebuffer;
struct RenderPass;
struct CommandBuffer;
struct Buffer;
struct DeviceMemory;
struct Fence;
struct Event;
struct Semaphore;
struct CommandPool;
struct DescriptorPool;
struct DescriptorSet;
struct DescriptorSetLayout;
struct ShaderModule;
struct Pipeline;
struct ComputePipeline;
struct GraphicsPipeline;
struct PipelineLayout;
struct Sampler;
struct MemoryResource;

struct Command;
struct SectionCommand;

struct Renderer;
struct DisplayWindow;
struct Overlay;

using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using i16 = std::int16_t;
using i32 = std::int32_t;

} // namespace fuen

#define VK_CHECK(x) do {\
		auto result = (x);\
		dlg_assert(result == VK_SUCCESS); \
	} while(0)
