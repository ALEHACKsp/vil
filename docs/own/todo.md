# Todo

v0.1, goal: end of january 2021

- [x] fix debug utils label hierachy. They could have been started/completed
      in different command buffer
- [ ] clean up logging system, all that ugly setup stuff in layer.cpp
	- [ ] also: intercept debug callback? can currently cause problems
	      e.g. when the application controlled debug callback is called
		  from *our* internal thread (which it might not be prepared for).
		  In interception, could check whether it involves one of our
		  handles or is called from our window thread.
	- [ ] show failed asserts and potential errors in imgui UI?
	      probably best to do this in addition to command line
	- [ ] log assertions to debug console in visual studio
	      somehow signal they are coming from us though, use a VIL prefix or smth
- [ ] improve windows overlay hooking. Experiment with mouse hooks blocking
      input.
	- [ ] implement further messages, keyboard, mouse wheel
	- [ ] clean the implementation up
	- [ ] when not showing own cursor, just use GetCursorPos over
	      raw input. Causes problems at the moment
- [ ] cb/command viewer: when viewing a batch from a swapchain,
      show the semaphores/fences with from a vkQueueSubmit.
	  When selecting the vkQueueSubmit just show an overview.
- [ ] IO rework
	- [x] start using src/gui/command.hpp
	- [ ] remaining IO viewer fixes:
		- [x] fix descriptor arrays
		- [ ] fix transfer buffer introspection
		- [ ] fix ClearAttachmentCmd handling, allow to copy/view any of the cleared attachments
		- [x] when viewing attachments, show framebuffer and image/imageView (see TODO in code)
		- [x] when viewing transfer img, show image refButton
		- [x] adapt ioImage_ to selected image (e.g. channels)
			- [ ] also fix logic for depthStencil images. Select depth by default.
				  (can be tested with doom)
	- [ ] support texel reading implementation for cb-viewed-images and clean
		  up color format presentation, support depth and packed formats.
		  See TODOs in gui.cpp:displayImage and util.cpp:ioFormat
	- [ ] fix `[cb.cpp:1056] assertion 'found' failed` for cmdUpdateBuffer,
	      i.e. support buffer IO viewing for transfer commands
- [ ] fix vertex buffer layout reader (for non rgba-ordered formats. See TODO there)
	- [ ] fix 3D vertex viewer for 2D position data (needs separate shader I guess)
	- [ ] don't even attempt to display non-float formats in 3D vertex viewer
	- [ ] support drawIndirectCount
		- [ ] #43, probably for later: also support just showing a single draw command
			  (see the other todo - #42)
- [ ] in CopiedImage::init: check for image usage support
	- [ ] generally: allow the image copy operation to fail.
- [ ] xfb: support custom outputs, not just the Position Builtin
	- [ ] xfb: check whether format is supported
- [ ] xfb: use heuristic to figure out if ortho or perspective projection is used
	- [x] and then use the matching shader (i.e. scaled w vs scaled z as view-space z coord)
	- [x] probably best to have one vertex shader controlled via push constant
- [x] test `splittable` impl for render passes. There are very likely issues.
      (especially for the cases where render pass can't be split)
	  {see docs/test/rpsplit.cpp, seems to work in basic cases}
- [ ] better pipeline/shader module display in resource viewer
	- [ ] especially inputs/outputs of vertex shaders (shows weird predefined spirv inputs/outputs)
	- [ ] maybe display each stage (the shader and associated information) as its own tab
- [ ] figure out "instance_extensions" in the layer json.
      Do we have to implement all functions? e.g. the CreateDebugUtilsMessengerEXT as well?
- [x] Allow to freeze state for current displayed command, i.e. don't
      update data from hook
	- [x] figure out how to communicate this via gui.
	      This is a distinct option form the "displayed commands source" and UpdateMode
	- [x] While at it, clean up all the hook logic for io viewer
		  {refactored to gui CommandViewer}
- [x] allow to select in cb viewer which commands are shown
	- [x] make that more compact/intuitive if possible
	- [x] looks really ugly at the moment, improve that.
	      maybe move to own settings tab? Wouldn't expect people to change
		  it often tbh
	- [x] cleanest would probably a button that spawns a popup/dialog
	      in which this can be selected. That is possible with ImGui,
		  see BeginPopup.
		  Alternatively move it to a general settings tab (that we kind of
		  need by now).
	- [x] Improve the "Freeze state" checkbox, it vastly out of place rn
- [x] fix resource viewer
	- [x] fix filtering by type
	- [x] fix filtering by name
- [ ] more useful names for handles (e.g. some basic information for images)
	- [ ] also: atm we always prepend the resource type leading to something
	      like "Buffer terrainBuffer". Add a parameter to the function whether
		  this should be done, it some contexts (e.g. CmdCopyBuffer,
		  resource viewer only viewing buffers) its very redundant.
		  In most cases, it's redundant, only useful for some buttons (but
		  even then we likely should rather have `Image: |terrainHeightmap|`.
- [x] rework dev/gui so that there is never more than one gui. Supporting
      multiple guis at the same time is not worth the trouble (think
	  about command buffer hooking from multiple cb viewers...)
	- [ ] what to do when window *and* overlay is created? or multiple overlays?
		  Should probably close the previous one (move gui object)
		  See todo in Gui::init. Make sure there never is more than one
- [ ] Add more useful overview. 
	- [x] Maybe directly link to last submitted command buffers?
	      {this is kinda shitty though, need the concept of command buffer groups
		   to make this beautiful}
	- [x] show graph of frame timings (see first sketch swapchain header)
	- [x] show enabled extensions
	- [ ] show enabled features
	- [ ] only show application info if filled out by app. collapse by default?
- [ ] proper shipping and installing
	- [x] make the json file a config file, generated by meson
	- [ ] write wiki post on how to build/install/use it
	- [ ] fix for api: should probably load *real* name of library, not some guesswork.
	      Important on windows, to support all compilers.
		  See TODO on lib name there
- [ ] write small wiki documentation post on how to use API
	- [ ] could explain why it's needed in the first place. Maybe someone
	      comes up with a clever idea for the hooked-input-feedback problem?
	- [x] write something on instance extensions for compute-only applications
	      see: https://github.com/KhronosGroup/Vulkan-Loader/issues/51
		  {see docs/compute-only.md}
- [ ] improve window creation: try to match up used swa backend with enabled
	  vulkan extensions. Could extend swa for it, if useful
	  (e.g. swa_display_create_for_vk_extensions)
	- [ ] possibly fall back to xlib surface creation in swa
	- [ ] at least make sure it does not crash for features we don't
	      implement yet (such as sparse binding)
		   (could for instance test what happens when memory field of a buffer/image
		   is not set).
- [ ] imgui styling
	- [ ] use custom font
	- [ ] some of the high-information widgets (barrier command, rp, pipe viewers)
	      are really overwhelming and hard to read at the moment.
		  Can be improved to grasp information for intuitively
	- [ ] add tooltips where it makes sense
	- [ ] go at least a bit away from the default imgui style
	      The grey is hella ugly, make black instead.
		  Use custom accent color. Configurable?
	- [ ] Figure out transparency. Make it a setting?
	- [ ] see imgui style examples in imgui releases
	- [ ] lots of places where we should replace column usage with tables
	- [ ] fix stupid looking duplicate header-seperator for commands in 
	      command viewer (command viewer header UI is a mess anyways)
- [ ] should probably not be possible to ever unselect ParentCommands in
      cb viewer (CommandTypeFlags). Just always display them?
- [ ] improve handling of transparent images. Checkerboard background?
	- [x] when viewing image as grayscale they become transparent atm.
	      no idea why
	- [ ] also don't apply scale for alpha
- [ ] fix overlay for wayland. Use xdg popup
- [ ] make sure the environment variables for overlays/window creation work
      as specified in readme everywhere
- [ ] stop this todo-for-v0.1-list from growing at some point.
- [ ] when viewing live command submissions, clicking on resource buttons
	  that change every frame/frequently (e.g. the backbuffer framebuffer)
	  does not work. Wanting to goto "just any of those" is a valid usecase IMO,
	  we could fix it by not imgui-pushing the resource ID before showing the button.
- [ ] before release: test on windows & linux, on all owned hardware

not sure if viable for first version but should be goal:
- [x] stress test using a real vulkan-based game. Test e.g. with doom eternal
- [ ] get it to run without significant (slight (like couple of percent) increase 
	  of frame timings even with layer in release mode is ok) overhead
	- [x] vkQuake2
	- [x] doom eternal
		- [x] figure out how to make multi-submission drawing easily viewable
		      -> per-frame-commands cb viewer mode
	- [ ] dota 2 (linux)

Possibly for later, new features/ideas:
- [ ] when there is more than one record of the same group in one RecordBatch we get
      into troubles when viewing it in swapchain commands mode.
	  The problem is that *all* group submissions update hook.state and we might end
	  up viewing one of those states, not really the one we want.
	  Which can lead to weird issues, e.g. the gui shows a depthStencil attachment
	  but when we click it we see a color attachment. Not sure how to really fix this,
	  probably use more information in swapchain mode (e.g. submission order) and
	  improve matching in general (e.g. make sure that render pass attachments *must* match
	  for command group/records matching)
- [ ] support debug utils labels across command buffer boundaries
	  we already have the information of popped and pushed lables per record
      NOTE: this isn't 100% correct at the moment though, e.g. when we end
	  a debug label manually to fix the hierachy, it's only ended to the "ignoreEnd"
	  counter but if that end is never called (to be ignored) the label would
	  effectively be pushed onto the queue stack which we currently don't
	  store anywhere. Not sure how to correctly do this though atm, depends
	  on how we use it later on (since the label isn't effectively on the
	  queue stack for our fixed hierachy...)
- [ ] cmdDrawIndirectCount: allow to view state (especially attachments
      but i guess could be useful for ds state as well) before/after each
	  individual draw command. Same for cmdDrawIndirect with multiple
	  draw counts. Could likely use the same mechanism to do the same for
	  instances - #42
	  See - #43
- [ ] might be better to determine command group at EndCommandBuffer
      instead of first submission. We can't use the used queue though...
- [ ] support descriptor indexing. Shouldn't even be too much work
- [ ] functions that allocate CommandRecord-memory should not take
      a CommandBuffer& as first argument but rather something like
	  CommandRecordAllocator (or just CommandRecord), for clarity.
- [ ] limit device mutex lock by ui/overlay/window as much as possible.
    - [ ] We might have to manually throttle frame rate for window
	- [ ] add tracy (or something like it) to the layer (in debug mode or via 
	      meson_options var) so we can properly profile the bottlenecks and
		  problems
- [ ] proper rasterization introspection using transform feedback.
      we already query in the device whether it's supported
	- [ ] requires SPIR-V hooking (only execution mode setting and adding xfb to outputs)
	      have to do it to all pipelines though I guess.
		  Not supported with multiview, respect that (via renderpass)
	- [ ] capture in on our side into buffers
	- [ ] not sure if we need the transform feedback queries or if we
	      can always deduce that information statically
- [ ] improve frame graph layout in overview. Looks not nice atm
	- [ ] maybe try out implot lib
	- [ ] instead of limiting by number of frames maybe limit by time?
		  the 1000 last timings (as it is right now) is bad, not enough for high-fps applications
- [ ] implement clipboard, cursor style and other feature support for imgui
	- [ ] in window.cpp, for our external debug window
	- [ ] where useful (and really needed) incorporate it into the public API
- [ ] add own normals to vertex viewer (either somehow on-the-fly on gpu or
      pre-calculate them on cpu) and add basic shading.
	  maybe we can reuse existing normals in some cases but i doubt it,
	  no idea for good heuristics
- [ ] when selecting a draw call, allow to color it in final render
	- [ ] would require us to modify shader/pipeline. lots of work
- [ ] when we select a resource of type X should we set the current filter to X
      in the resource gui? Can be somewhat confusing at the moment
- [ ] the gui code is currently rather messy. Think of a general concept
      on how to handle tabs, image draws and custom pipelines/draws inside imgui
- [ ] reading 64-bit int formats might have precision problems, see the format
      io in util.cpp
- [ ] Implement missing resource overview UIs
	- [ ] sync primitives (-> submission rework & display, after v0.1)
- [ ] show histogram to image in ui. Generate histogram together with min/max
      values to allow auto-min-max as in renderdoc
	- [ ] Using the histogram, we could add something even better, adjusting
	      tonemapping/gamma/min-max to histogram instead just min-max
- [ ] displaying high-res images in small viewer gives bad artefacts
      since we don't use mips. Could generate mips on our own (this requires
	  just copying the currently vieweed mip and then generating our own mips)
- [x] clean and split up QueueSubmit implementation. It's way too long,
      does way too much. And will probably further grow
	- [x] also: always check in the beginning for finished submissions
- [ ] attempt to retain previous selection in io viewer when selecting
	  new command
- [ ] in vkCreateInstance/vkCreateDevice, we could fail if an extension we don't support
      is being enabled. I remember renderdoc doing this, sounds like a good idea.
	- [ ] or an unexpectly high api version
		  (allow to disable that behavior via env variable tho, layer might work
		   with it)
	- [ ] overwrite pre-instance functions vkEnumerateInstanceExtensionProperties?
	      then also use the vkGetPhysicalDeviceProcAddr from the loader to
		  overwrite extension enumeration for the device.
		  And filter the supported extensions by the ones that we also support.
		  Evaluate whether this is right approach though. Renderdoc does it like
		  this. Alternatvely, we could simply fail on device/instance creation
		  as mentioned above (probably want to do both approaches, both disableable 
		  (just found a new favorite word!) via env variable
- [ ] add feature to see all commands that use a certain handle.
      we already have the references, just need to add it to command viewer.
	  Just add a new command viewer mode that allows to cycle through them.
	- [ ] make sure to select (and scroll towards) the commands when selecting
	      them. Not exactly sure how to implement but that command should
		  even be shown in command list when its type is hidden (maybe
		  make it a bit transparent, "ghost-command")
- [ ] in some places we likely want to forward pNext chains by default, even
      if we don't know them. E.g. QueuePresent, render pass splitting?
	  Whatever gives the highest chance of success for unknown extensions.
	  (Could even try to toggle it via runtime option)
- [ ] full support CmdDrawIndirectCount in gui (most stuff not implemented atm in CommandHook)
	  {probably not for v0.1} 
- [ ] improve buffer viewer {postponed to after v0.1}
	- [ ] NOTE: evaluate whether static buffer viewer makes much sense.
	      Maybe it's not too useful at the moment.
	- [ ] static buffer viewer currently broken, see resources.cpp recordPreRender
	      for old code (that was terrible, we would have to rework it to
		  chain readbacks to a future frame, when a previous draw is finished)
	- [ ] ability to infer layouts (simply use the last known one, link to last usage in cb) from
		- [ ] uniform and storage buffers (using spirv_inspect)
		- [ ] vertex buffer (using the pipeline layout)
		- [ ] index buffer
		- [ ] texel data from a buffer/image copy
	- [ ] ability to directly jump to it - in the contextually inferred layout - from a command?
	      (might be confusing, content might have changed since then)
	- [ ] move to own tab/panel? needed in multiple cases
- [ ] improve image viewer
	- [ ] move to own tab/panel? needed in multiple cases
	      {nah, viewing it inline is better for now}
- [ ] attempt to minimize level depth in cb viewer
	- [ ] when a parent has only one child, combine them in some cases?
	      mainly for Labels, they are currently not too helpful as they
		  make the hierachy just deeper...
	- [ ] allow per-app shortcuts to specific commands?
- [ ] look into imgui shortcuts to allow quick interaction.
      vim-like!
- [ ] we might be able to improve the accuracy of the queried timings (in hooked cbs)
      with inserted pipeline barriers. That will cause certain stages/commands
	  to stall so we can measure the per-stage time in a more isolated environment
- [ ] transfer command IO inspector for buffers
- [ ] transfer commands IO insepctor for ClearAttachmentCmd: allow to select
      the attachment to be shown in IO list and then copy that in commandHook
- [ ] support multiple subresources for transfer commands, images
	- [ ] pain in the ass regarding layout transitions as the range of
	      subresources does not have to be continuous (and we can't assume
		  all of them to be in same layout)
- [ ] important optimization, low hanging fruit:
      CopiedImage: don't ever use concurrent sharing mode.
	  We can explicitly transition the image when first copying it.
- [ ] we currently copy more levels/layers in commandHook than are shown
      in i/o inspector. Could just copy the currently shown subresource.
- [ ] write tests for some common functionality
	- [ ] format reading/writing; conversion
- [ ] clean up/unify usage of struct/class
	  struct for POD (with no public/private classifiers and member functions),
	  class otherwise I guess
- [ ] move external source into extra folder
- [ ] we should likely switch to spirv-cross instead of spirv-reflect
	- [ ] we will probably need some its functionality later on anyways
	- [ ] already hit some hard limitations of spirv-cross that would require
	      a lot of changes
- [ ] we assume binary semaphores for applications at the moment. See e.g. the waitFrom/signalFrom
      assertions in queue.cpp
- [ ] support for the spirv primites in block variables that are still missing
 	  See https://github.com/KhronosGroup/SPIRV-Reflect/issues/110
	- [ ] runtime arrays (based on buffer range size)
	- [ ] spec constant arrays
- [ ] performance: when a resource is only read by us we don't have to make future
	  submissions that also only read it wait.
	- [ ] requires us to track (in CommandRecord::usedX i guess) whether
		  a resource might be written by cb
- [ ] optimization: we don't really need to always track refCbs and store
      the destroyed handles. Only do it for submissions viewed in gui?
	  Could just require commandRecords to be valid while selected and
	  then just handle the unsetting logic in CommandBufferGui::destroyed
- [ ] support for multiple swapchains
	- [ ] in submission viewing, we assume there is just one atm
	- [ ] currently basically leaking memory (leaving all records alive)
	      when application has a swapchain it does not present to?
- [ ] Allow modifying resources (temporarily or permanently)
	- [ ] in command viewer or resource viewer
	- [ ] over such a mechanism we could implement a forced camera
- [ ] include vkpp enumString generator here?
      allows easier updates, maintaining
- [x] support for buffer views (and other handles) in UI
	- [ ] use buffer view information to infer layout in buffer viewer?
	- [ ] support buffer views in our texture viewer (i.e. show their content)
- [ ] experiment with transparent overlay windows in which we render the
      overlay, to not be dependent on application refresh rate.
- [ ] support compressed/block formats
- [ ] allow to view submissions to a queue
- [ ] implement at least extensions that record to command buffer to allow hooking when they are used
	- [x] push descriptors
	- [ ] device masks (core vulkan by now)
	- [ ] extended dynamic state
	- [ ] line rasterization
	- [ ] nv device diagnostic checkpoint
	- [ ] nv exclusive scissor
	- [ ] nv mesh shaders
	- [ ] amd buffer marker
	- [ ] intel performance metrics
	- [ ] ray tracing
	- [ ] nv shading rate image
	- [ ] ext sample locations
	- [ ] ext discard rectangles
	- [ ] nv viewport scaling
	- [ ] ext conditional rendering
	- [ ] transform feedback (?)
	- [x] implement khr_copy_commands2 extension
	- [ ] khr fragment shading rate
	- [ ] nv shading rate enums
- [ ] implement additional command buffer viewer mode: per-frame-commands
      basically shows all commands submitted to queue between two present calls.
	  similar to renderdoc
	- [ ] or just show the most important submission for now? (based on "main
	      submission" heuristics)
- [ ] use new imgui tables api where useful
- [ ] should support image-less framebuffer extension as soon as possible,
      might need a lot of changes
- [ ] add "save to ktx" feature on images? Personally, I'd consider this
      useful but this will likely scream LETS ABUSE PROPRIETARY IMAGES to some
	  evil creatures out there so not sure if this is a good idea.
	  Maybe just don't enable it in default build config?
	- [ ] pretty much same for writing out buffer contents to a file
	- [ ] could export full models from drawcalls via gltf
		  (without textures or at unassigned textures or maybe even
		   try to connect them to gltf properties via heuristics)
- [ ] support for compressed image formats
- [ ] optimize: suballocate and CopiedBuffer
- [ ] optimize: reuse CopiedImage and CopiedBuffer
- [ ] support multiple imgui themes via settings
- [ ] remove PageVector when not used anymore. Maybe move to docs or nodes
- [ ] in cb viewer: allow to set collapse mode, e.g. allow more linear layout?
      and other settings
- [ ] make gui more comfortable to use
	- [ ] add shortcuts for important features
	- [ ] investigate if we can make it vim-like navigatable keyboard-only
	- [ ] make "back" button work (and add one it gui itself?)
- [ ] investigate the vulkan layer providing the timeline semaphore feature.
      We could advise its usage when a native implementation is not available.
	  Eventually we could (either by requiring use of the layer when ext not
	  implemented by driver or by implementing it inside our layer) expect
	  timeline semaphores to be available, removing the legacy code path.
- [ ] fix warning 4458, see meson.build, we currently disable it.
- [ ] optimization: use custom memory management in QueueSubmit impl
	- [ ] investigate other potential bottleneck places where we
	      allocate a lot
- [ ] internal statistics tab
	- [ ] number of hooked command buffer records (alive records)
	- [ ] time spent in certain critical sections?
	- [ ] memory allocated in commandpools?
	- [ ] total number of handles or something, giving an estimate of memory consumption
- [ ] the way we currently split render passes does not work for resolve
	  attachments (except when they are in the last subpass) since
	  the resolve might be done multiple times, overwriting old results :(
	  In that case: either just don't allow command hooking (for now) or
	  just do the expensive solution: completely modify the render passes
	  and recreate all framebuffers and graphics pipelines ugh
- [ ] somehow display submissions and their dependencies as a general
      frame-graph like overview (could go down to renderpass-level, to
	  provide a full frame graph).
	- [ ] Maybe start with something that simply writes a dot file for a frame or two?
	      Getting this right interactively with imgui will be... hard
- [ ] command groups: come up with a concept to avoid glitchy updates
	  in viewer. Either just update every couple of seconds (lame!) or
	  display something special there.
- [ ] opt: even for command buffer recording we still allocate memory in a lot
	  of places (e.g. CommandBufferDesc::getAnnotate but also in Record/Desc itself).
	  Fix what is possible
- [ ] command groups: should probably also check commonly used handles to match them.
	  at least some handles (at least root resources like memory, samplers etc)
	  will always be in common. Command buffers that use almost entirely the
	  same buffers and images can be considered related
- [x] bump api version as far as possible when creating instance?
      not sure if anything could go wrong in practice
- [ ] register own debug messenger if possible?
- [ ] not sure if current cmdExecuteCommands implementation is the best.
      see comment there.
- [ ] for command descriptions, take pNext chains into account.
	  they are rarely changed just like that (neither is their order I guess)
- [ ] track push constant range pipe layouts; correctly invalidate & disturb
      also track which range is bound for which stage.
- [ ] can we support viewing multisample images?
      either sample them directly in shader (requires a whole lotta new 
	  shader permuatations, not sure if supported everywhere) or resolve
	  into temporary image first (lot of work as well)
- [ ] we might be able to not lock the device mutex for all the time we lock
      the ui (which can be a serious problem) by relying on weak/shared pointers
	  eveywhere (making concurrently happening resource destruction no problem) 
	  	- [ ] probably requires a lot of other reworks as well, e.g. for buffer readback
- [ ] better installing
	- [ ] simple wix windows installer, just needs to install prebuilt layer,
	  	   json file and add the registry file. Should probably also install
	       api header tho
		   (maybe for later, >0.1.0?)
	- [ ] write AUR package (maybe for later, >0.1.0?)
- [ ] add example images to docs
- [ ] in draw/dispatch commands: we might have to check that layout of bound
      descriptors matches layout of bound pipeline
- [ ] general buffer reading mechanism for UI. Implement e.g. to read
      indirect command from buffer and display in command UI
- [ ] allow to display stuff (e.g. images) over swapchain, fullscreen, not just in overlay
- [ ] memory budget overview
	- [ ] show how much memory was allocated overall, per-heap
	      make this visually appealing, easy-to-grasp. Maybe via pie-chart or something.
		  We can probably start using ImPlot.
		  Maybe allow to have a global pie chart (showing *all* memory) and
		  then per heap/per memory type flag (allowing us to easily visualize
		  e.g. the amount of on-device memory allocated/available).
	- [ ] Also allow to color memory depending on the type it is allocated for.
	- [ ] allow to visualize by allocation size, i.e. showing the big memory blockers
	      (but also allow showing smallest first, can be useful)
	- [ ] visualize totally available memory as well, we can get that from
	      memory properties
	- [ ] there are extensions for querying the real allocated/free memory
	      size. Use them!
- [ ] simulate device lost: Just make the layer return deviceLost from
      all (or a lot of) commands until the device is recreated.
	  Useful for testing!
- [ ] small buffer optimization for global hash tables (that are most
      commonly accessed). Maybe add extra fast path for single-device case?
	  (having something like Device* lastDevice in global scope, would
	  still need mutex but spare us hashing and lookup and extra cache miss)
- [ ] show histogram for query pool timings (for inserted ones, but could
      also do it for application query pool timings).
- [ ] add per-section and per-commandbuffer query pool timings
- [ ] add optional to just show timing per command (correctly show it per section)
      in command buffer command list.
	  Wouldn't even need to use the (error-prone) command buffer hooking
	  mechanism, could just insert it directly into the forwarded recording
	  commands.
- [ ] improve the case where multiple command buffers are pretty much the
      same and just vary for swapchain image id or something.
- [ ] directly show content for imageview? with correct format/mip/layer etc?
- [ ] (somewhat high prio tho) add support for waiting for command buffer
      recording to finish (with a timeout tho, in which case we simply display
	  that is currently being recorded (and that it takes long)), when viewing
	  it. Especially a big problem for display-window (compared to overlay)
	  when an application re-records in every frame.
	  	- [ ] could be done via conditional variable in command buffer
		      that is signaled on endCommandBuffer
- [ ] handle command-buffer re-recording as graceful as possible.
      	- [x] Try to match selected command in new state
		- [ ] give visual/explicit feedback about re-recording though.
		      maybe show time/frames since last re-record?
			  Show statistics, how often the cb is re-recorded?
- [ ] related to command buffer groups: simply view all commands pushed
      to a queue?
- [ ] way later: support for sparse binding
- [ ] we might be able (with checks everywhere and no assumptions at all, basically)
      to support cases where extensions we don't know about/support are used.
	  (e.g. image is created via a new extension, we don't hook that call,
	  image is then used somewhere). Evaluate if it is doable. If so, we should
	  really try. Even if we don't catch all cases it will make this a lot
	  easier to maintain (and make it seem less of a buggy mess to users)
- [ ] support vulkan 1.1 (non-crash)
	- [x] bindmemory2
	- [x] support descriptor set update templates
	- [x] support vkCmdDispatchBase
	- [ ] support device mask stuff (non-crash)
		- [ ] allow to hook command buffers containing it
		- [ ] layer might break with this though, not sure if we can support it easily
			  for real multi-gpu. Investigate (not supporting it for now is
			  okay but document why).
	- [ ] support everything in UI
		- [ ] add sampler ycbcr conversion tracking
- [ ] support vulkan 1.2 (non-crash)
	- [ ] support everything in UI
	- [x] CmdDrawIndirectCount
	- [x] CmdDrawIndexedIndirectCount
	- [x] other new creation and commands
- [ ] support as many KHR extensions as possible (non-crash)
	- [ ] support UI for them where not too much work
- [ ] support khr ray tracing extension
- [ ] support all other extensions (non-crash)
- [ ] interactive 3D cubemap viewer
- [ ] interactive 3D model viewer
- [x] insert command buffer timing queries
- [ ] per-drawcall image visualization using the inserted subpass + 
      input attachment shader copy idea, if possible
- [ ] event log showing all queue submits
	- [ ] optionally show resource creations/destructions there as well
- [ ] resource and queue freezing
	- [ ] something like "freeze on next frame/next submission"
- [x] track query pools
- [x] track buffer views
- [ ] better pipeline state overview of inputs, stages, outputs
	- [ ] maybe via a graph?
- [ ] we might be able to properly hook input (without needing the public api)
	  by using a (movable?) child window for our overlay instead of directly
	  presenting to the swapchain.
- [ ] when rendering in own window: continue to dispatch display while
      waiting for application fence. This allows to track really long
	  submissions (e.g. for compute) without losing responsiveness.
	  (Just show something like "image/buffer is in use in the ui")
	  -> sync rework/semaphore chaining, i guess (but note how it's **not**
		 solved with semaphore chaining alone!)
- [ ] all this dynamic_cast'ing on Command's isn't good. There is a limited
      number of commands (and we never absolutely need something like
	  dynamic_cast<DrawCmdBase*> i guess?) so we could enum it away.
	  But otoh dynamic_cast and hierachy is probably better for maintainability
- [ ] explore what random stuff we are able to do
	- [ ] Visualize models (drawcalls) on its own by inferring
	  	  position (and possibly other attribs; hard to infer though, could use heuristics
	  	  but should probably let user just flag them explicitly)
	- [ ] Infer projection and view matrix, allow to manipulate them.
	      We could add our entirely own camera to any game, allowing free movement
		  in the world (likely glitched due to culling and stuff but that's still interesting).
		  Hard to infer the correct matrix, might rely on manual user flagging.
	- [ ] Infer as much general information as possible. When annotations are
		  missing automatically annotate handles and the command buffer
		  as good as possible. We are likely able to detect depth-only (should probably
		  even be able to develop good heuristics to decide shadow vs preZ), gbuffer,
		  shading, post-processing passes. Might also be able to automatically infer
		  normal/diffuse/other pbr maps (harder though).
	- [ ] use heuristics to identify interesting constants in ubo/pcr/shader itself
		  (interesting as in: big effect on the output). Expose them as parameters
		  in the gui.
- [ ] include copy regions in argumentsDesc of transfer commands?
      would probably make sense but they should not be weighted too much
- [ ] (low prio, experiment) allow to visualize buffers as images where it makes sense 
	  (using a bufferView or buffer-to-image copy)
- [ ] (low prio) can we support android?
- [ ] (low prio, evaluate idea) allow to temporarily "freeze destruction", causing handles to be
      moved to per-handle, per-device "destroyedX" maps/vectors.
	  The vulkan handles probably need to be destroyed (keeping them alive
	  has other problems, e.g. giving memory back to pools, don't wanna
	  hook all that) but it might be useful to inspect command buffers without
	  handles being destroyed
- [ ] (low prio, non-problem) when using timeline semaphores, check for wrap-around?
      would be undefined behavior. But I can't imagine a case in which
	  we reuse a semaphore 2^64 times tbh. An application would have to
	  run millions of years with >1000 submissions per second.
	  Probably more error prone to check for this in the first place.
- [ ] (low prio), optimization: in `Draw`, we don't need presentSemaphore when
	  we have timeline semaphores, can simply use futureSemaphore for
	  present as well

