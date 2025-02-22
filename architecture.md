# VIL Architecture

## File Organization

- `subprojects`: place for meson-built subprojects
	- `dlg`: [dlg](https://github.com/nyorain/dlg) is a lightweight C/C++ logging library.
	  It pretty much does exactly what we need for logging/assertion
	  functionality, not more and not less. Care has to be taken when
	  an application also uses dlg since then, they share a handler (by design).
	- `swa`: [swa](https://github.com/nyorain/swa) is a lightweight C window abstraction.
	  It is used to create the external window to display the introspection gui.
	  On X11, it is also used to create an overlay window for the hooked input overlay.
	  We use this over something like glfw because we have some special needs
	  (as we need overlay windows and create windows from inside the layer)
	  that were easier to implement in self-written, more lightweight library.
	  `swa` was furthermore not primarily designed for opengl, it's even possible
	  to completely build it without opengl support.
	  We use it over something like gtk or Qt to keep the number of dependencies
	  minimal and the overall layer lightweight.
	- `pml`: [pml](https://github.com/nyorain/pml) is a lightweight C posix main loop.
	  Dependency of swa on unix.
- `src`: pretty much all source codes and non-public headers go here
	- `util`: utility headers that are not directly involved with the vulkan API
	  and or used in potentially multiple places throughout the layer.
	  Most of these utilities were imported from previous projects.
	- `gui`: all logic for the introspection gui go here. At the moment,
	  the central `CommandHook` class and its utilities are also implemented
	  here since they connect the gui to the command submissions done by
	  the application.
	- `data`: shader sources. As we have a small number of rather static
	  shared sources, there is a `prebuilt` subfolder that should contain
	  compiled versions of the latest shader sources. When `glslang` is found,
	  the shaders are automatically recompiled as part of the compilation process.
	  The `prebuilt` folder is mainly there for windows. Since it does not
	  have easy dependency management, it spares us from including `glslang`
	  as subproject.
	- `imgui`: The sources for [Dear ImGui](https://github.com/ocornut/imgui)
	  which we use for our introspection gui. We use static sources instead
	  of building it as subproject as it's easier to build this way.
	  We compile it directly into the layer library.
- `include`: Only the public API header lives here. Future API or otherwise public
  headers should go here.
- `docs`: Documentation, tests, examples, pictures.

## Code organization

Everything in the layer lives in the `vil` namespace.
For almost every vulkan handle, there is a representation on our side.
`VkInstance` is represented by `vil::Instance`, `VkDevice` by `vil::Device`,
`VkImageView` by `vil::ImageView` and so on.

We don't wrap handles at the moment, at the hope that this will maximize
the layers compatibility with future extensions. See [this post](https://renderdoc.org/vulkan-layer-guide.html)
for more details. This might change in future, there are several
advantages to handle wrapping that we might need (performance and better
identification of non-unique non-dispatchable handles).
For reference: the validation layers allow to dynamically toggle whether
handle wrapping is used.

Instead, `vil::Device` has tables mapping the vulkan handles to their
representations inside the layer. For dispatchable handles (Instance, Device, 
CommandBuffer, Queue; we also use it for VkSurfaceKHR), there is a global 
table in [src/data.hpp](src/data.hpp).

Synchronization is currently done mainly over a single mutex in `vil::Device`.
Accesses that are not guaranteed to be externally synchronized by vulkan
must be protected by this mutex. This may lead to a lot of critical
sections and slow down multithreaded applications. During early development
of the layer, there were experiments with more local per-object mutex objects
but this created unmaintainable complexity due to the various new
deadlock possibilities.
Example cases where the mutex is needed:
- A new ImageView is created and add a reference to itself in the associated Image.
  Critical section is needed since other threads could create ImageViews to the same
  image or the gui could currently be iterating over all ImageViews
  for a given Image in another thread.
- A DescriptorSet is updated with a buffer range and stores a reference to itself
  in the associated buffer.
  Critical section is needed because other threads could concurrently write the
  same buffer to other descriptor sets or the gui could read the descriptor
  or the buffer properties in another thread.
- When a BufferView is destroyed, it must inform all descriptor sets that have it
  bound that they are invalid now.
  The descriptor set could concurrently be updated in another thread.

In general, we keep track of almost all connections between handles and allow
to view them in the gui. While the gui is rendered, it locks the device mutex.

In addition to the standard device mutex, there is also the device queue mutex,
used to synchronize submissions to queues (since vulkan does not allow
to call queue operations from multiple threads at the same time).

## Command

`vil::Command` (see [src/command.hpp](src/command.hpp)) is our internal representation
of a single command added to a command buffer. When the application
records a command buffer, we build a list (in truth: rather a hierachy) of
these objects for multiple purposes:
- Viewing the recorded command buffer and its state in gui
- Knowing what the command buffer does, e.g. the image layout transitions
  are required when the command buffer submitted to keep track of current image layouts.
- Command hooking, as explained below.

## CommandRecord

`vil::CommandRecord` (see [src/record.hpp](src/record.hpp)) holds all state for a recorded command buffer, i.e.
all commands, the usage flags with which the record was begun, which handles are used.
It's disconnected from the command buffer itself and can outlive it.
It's used in multiple places and ownership is shared via an intrusive reference count.

## CommandBufferGroup

To allow continuous viewing of submissions in the gui, we internally abstract
over multiple command records, grouping them together into a CommandBufferGroup.
When command records are very similar to each other, they are placed into
the same group. We use (at the moment very simple) heuristics to decide this.
Without this concept, viewing the per-frame connection and actually
staying at the same position inside the commands would be impossible for games
that re-record command buffers every frame. Defining this concept by
the actually recorded data instead of just the used CommandBuffer makes this
work for games that recreate or dynamically recycle command buffers
in every frame as well.
See `vil::CommandBufferGroup` in [src/queue.hpp](src/queue.hpp).

## CommandHook

`vil::CommandHook` (in [src/gui/commandHook.hpp](src/gui/commandHook.hpp)) and the associated
classes `CommandHookRecord`, `CommandHookSubmission` allow us to insert
commands into the submissions done by the application.
A `CommandHook` can be installed in the `vil::Device` and will be considered
every time commands are submitted to a queue of that device via
`CommandHook::hook`. That function gets the command buffer that is submitted
and can return an internal replacement command buffer. To "insert" commands,
it simply reads from the recorded command buffer, recording the commands
into an internally created command, adding or altering commands as needed.
The reason we don't already do this directly into the application's command
buffers as it records them is that we might not know at that point of time
what is needed. Consider an application that does not re-record command buffers
every frame. We can't know at the time of recording which command the user
will inspect in the introspection gui so we can't know where to insert
our additional introspection commands that copy data as needed.

For every *hooked* `CommandRecord`, the `CommandHook` creates a `CommandHookRecord`,
holding all the data it needs to hook that specific record.
That data includes a `VkQueryPool` to query timings, the newly recorded
`VkCommandBuffer` itself, copied buffers, locally created replacement render passes
and so on. When the application submits the same recorded version of a command
buffer multiple times, our `CommandHookRecord` may be used multiple times.
But when *what we want to hook* is changed (e.g. because another command
or command state I/O resource is selected in the gui) we invalidate
all previously created hooked records.
Every time a `CommandHookRecord` is used to hook a command buffer by the application,
a `CommandHookSubmission` object is created. It serves mainly as a handler
to do all processing and copying needed when the submission is finished.
All that state is hold in `CommandHookState`, which is directly accessed
when rendering the command buffer gui.

## Render pass splitting

One of the main difficult things to figure out was how to make gpu state
inspection inside render passes possible. Vulkan does not allow transfer
commands inside a render pass so simply copying bound textures/buffers
before a draw command is executed does not work. Alternatively, moving
the introspection transfer commands just outside the boundaries of the
render pass does not work either as there are cases where resources
used by draw commands can be modified by earlier draw commands. We furthermore
want to see the effects of single draw commands to the framebuffer attachments.
The solution: render pass splitting. We simply split up the render pass
around the selected draw command so that we can insert our needed
transfer commands before/after the splitted render pass. We achieve this
by splitting the active render pass into 3 parts. Usually, using a pipeline
with a different render pass is not possible but in almost all cases,
we can actually make these 3 new render passes compatible for the old one
since the `loadOp` and `storeOp` values are ignored for compatibility
and they are the only ones we really need to change.
The only case where this approach can create problems: a render pass with
multiple subpasses where an attachment is first used as resolve attachment
and then later on used in specific different ways. There is no solution
for this at the moment, we simply don't allow command inspection in this case.

See [src/rp.hpp](src/rp.hpp) for the details. `vil::splittable(...)` returns
whether the splitting approach is possible for the given render pass
description (TODO: this needs massive testing, we basically use symbolic
execution here but never tested it which screams for trouble. Also, a simpler
implementation is probably possible). `vil::splitIterrutable(...)` then spits
out render pass create infos that can be used to create the new render passes.
