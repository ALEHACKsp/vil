#pragma once

#include <device.hpp>

namespace fuen {

struct CommandBufferGui {
	void draw();

	CommandBuffer* cb_ {}; // the selected command buffer
	const Command* command_ {}; // the selected command inside the cb
	u32 resetCount_ {}; // the resetCount of cb at which teh command was valid
};

} // namespace fuen
