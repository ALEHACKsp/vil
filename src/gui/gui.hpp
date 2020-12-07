#pragma once

#include <device.hpp>
#include <gui/renderer.hpp>
#include <gui/resources.hpp>
#include <gui/cb.hpp>
#include <variant>

struct ImGuiContext;
struct ImGuiIO;

namespace fuen {

class Gui {
public:
	enum class Tab {
		overview,
		resources,
		commandBuffer,
	};

public:
	Gui() = default;
	Gui(Gui&&) = delete;
	Gui& operator=(Gui&&) = delete;
	~Gui();

	void init(Device& dev, VkFormat format, bool clear);

	struct FrameInfo {
		VkSwapchainKHR swapchain {};
		u32 imageIdx {};
		VkExtent2D extent {};
		VkFramebuffer fb {};
		bool fullscreen {};
		VkQueue queue {};

		span<VkSemaphore> waitSemaphores;
		span<VkPipelineStageFlags> waitStages;
	};

	struct FrameResult {
		VkResult result;
		Draw* draw;
	};

	FrameResult renderFrame(FrameInfo& info);

	void makeImGuiCurrent();

	// Must only be called while device mutex is locked.
	void destroyed(const Handle& handle);
	void activateTab(Tab);

	template<typename T>
	void selectResource(T& handle, bool activateTab = true) {
		tabs_.resources.select(handle);
		if(activateTab) {
			this->activateTab(Tab::resources);
		}
	}

	void selectCb(CommandBuffer& cb, bool activateTab = true) {
		tabs_.cb.select(cb);
		if(activateTab) {
			this->activateTab(Tab::commandBuffer);
		}
	}

	ImGuiIO& imguiIO() const { return *io_; }

	Device& dev() const { return *dev_; }
	VkRenderPass rp() const { return rp_; }
	VkPipeline pipe() const { return pipe_; }

private:
	void draw(Draw&, bool fullscreen);
	void drawOverviewUI(Draw&);
	void ensureFontAtlas(VkCommandBuffer cb);

	void uploadDraw(Draw&, const ImDrawData&);
	void recordDraw(Draw&, VkExtent2D extent, VkFramebuffer fb, const ImDrawData&);

	// Returns the final layout of the image, after all submissions.
	void waitForSubmissions(const Image& img);

private:
	Device* dev_ {};
	ImGuiContext* imgui_ {};
	ImGuiIO* io_ {};

	Tab activeTab_ {};
	u32 activateTabCounter_ {};

	std::vector<Draw> draws_;

	struct {
		ResourceGui resources;
		CommandBufferGui cb;
	} tabs_;

	// rendering stuff
	VkRenderPass rp_ {};
	VkPipeline pipe_ {};
	VkCommandPool commandPool_ {};

	bool clear_ {};
	VkDescriptorSet dsFont_ {};

	struct {
		bool uploaded {};
		VkDeviceMemory mem {};
		VkImage image {};
		VkImageView view {};

		VkDeviceMemory uploadMem {};
		VkBuffer uploadBuf {};
	} font_;
};

} // namespace fuen
