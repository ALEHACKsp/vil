#pragma once

#include <device.hpp>
#include <vk/vulkan.h>

// TODO: Xlib, trying to immitate the winapi terribleness.
// Should be fixed more globally.
#ifdef Status
	#undef Status
#endif

struct swa_display;
struct swa_window;

namespace vil {

// Can be associated with a VkSurfaceKHR
struct Platform {
	virtual ~Platform() = default;

	virtual void init(Device& dev, unsigned width, unsigned height) = 0;
	virtual void resize(unsigned width, unsigned height) = 0;
	virtual bool update(Gui& gui) = 0;
};

// Uses swa to create an input-grabbing, invisible child window on the
// given platform. Just needs platform-specific mechanisms for checking
// on the original window.
struct SwaPlatform : Platform {
	enum class Status {
		// overlay and input window are hidden
		hidden,
		// overlay is shown but input window is hidden, i.e. no input
		// can be passed to window
		shown,
		// overlay is shown and input window is active, i.e. input
		// is redirected
		focused,
	};

	swa_display* dpy {};
	swa_window* window {};

	Status status {Status::hidden};
	bool togglePressed {}; // for toggle key
	bool focusPressed {}; // for focus key

	virtual void activateWindow(bool doActivate);
	void resize(unsigned width, unsigned height) override;
	bool update(Gui& gui) override;

	// Derived platforms must first initialize the display (using the
	// specific, matching swa backend), then call this for window
	// initialization.
	void initWindow(Device& dev, void* nativeParent, unsigned width, unsigned height);

	// Must return whether the given key is currently pressed on the
	// original window.
	virtual bool pressed(u32 key) const = 0;
};

VKAPI_ATTR void VKAPI_CALL DestroySurfaceKHR(
	VkInstance                                  instance,
	VkSurfaceKHR                                surface,
	const VkAllocationCallbacks*                pAllocator);

} // namespace vil
