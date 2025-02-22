project('VIL', ['c', 'cpp'],
	version: '0.1.0',
	default_options: [
		'werror=true',
		'warning_level=3',
		'cpp_std=c++17',
		'c_std=c11',
		# We need this to build the subprojects as static libraries. No
		# other way to do this apparently.
		# And we force the layer to be shared library anyways.
		'default_library=static',
	]
)

shader_inc = []
subdir('src/data') # compile shaders

cc = meson.get_compiler('cpp')

args = cc.get_supported_arguments([
	# silence various msvc warnings, we still wanna compile with werror
	'/wd4065', # switch has no case, just default
	'/wd26812', # prefer 'enum class' over 'enum'. Warning isn't wrong but can't change external code
	'/wd4244', # lossy type conversion (e.g. double -> int)
	'/wd4305', # truncating type conversion (e.g. double -> float)
	'/wd4127', # conditional expression is constant (might be useful but not really for us)
	'/wd4456', # delecaration hides previous local declaration (sorry, too used to rust's beauty)
	'/wd4458', # declaration hides class member, TODO: should be fixed in code, valid warning
	'/wd5105', # needed to fix an issue in winbase.h on a specific windows version (wtf microsoft)
	'-D_CRT_SECURE_NO_WARNINGS',

	# msvc really slow in debug build without this
	'-D_ITERATOR_DEBUG_LEVEL=0',

	# highly useful for debugging on linux
	'-D_GLIBCXX_DEBUG',

	# for clang
	'-Wno-missing-braces',
])

layer_args = [
	# Make sure to *never* include them
	'-DVK_NO_PROTOTYPES',
]

link_args = cc.get_supported_arguments([
	# unix, TODO: this caused problems on clang
	# '-Wl,-Bsymbolic-functions',
	# '-Wl,-z,relro',
])

dep_threads = dependency('threads', required: false)
dep_dlg = dependency('dlg',
	static: true,
	fallback: ['dlg', 'dlg_dep'])
dep_swa = dependency('swa',
	fallback: ['swa', 'swa_dep'],
	static: true,
	default_options: [
		'with-gl=disabled',
		'link-vulkan=false',
		'with-kms=disabled'
	])

# subdir('src/imgui')

# TODO: yeah, this needs some love
with_win32 = build_machine.system() == 'windows'

# with_x11 = not with_win32
with_x11 = not with_win32 and get_option('with_x11')

src = files(
	# own meta sources & util
	'src/layer.cpp',
	'src/data.cpp',
	'src/window.cpp',
	'src/api.cpp',
	'src/commands.cpp',
	'src/overlay.cpp',
	'src/platform.cpp',
	'src/commandDesc.cpp',
	'src/record.cpp',
	'src/vk/format_utils.cpp',
	'src/util/util.cpp',
	'src/util/f16.cpp',
	'src/util/ext.cpp',

	# vulkan api entrypoints
	'src/handle.cpp',
	'src/device.cpp',
	'src/swapchain.cpp',
	'src/image.cpp',
	'src/sync.cpp',
	'src/rp.cpp',
	'src/cb.cpp',
	'src/ds.cpp',
	'src/buffer.cpp',
	'src/memory.cpp',
	'src/shader.cpp',
	'src/pipe.cpp',
	'src/queryPool.cpp',
	'src/queue.cpp',
	'src/submit.cpp',

	# gui stuff
	'src/gui/render.cpp',
	'src/gui/gui.cpp',
	'src/gui/resources.cpp',
	'src/gui/cb.cpp',
	'src/gui/command.cpp',
	'src/gui/commandHook.cpp',
	'src/gui/vertexViewer.cpp',

	# external util
	'src/spirv_reflect.cpp',

	# imgui
	'src/imgui/imgui.cpp',
	'src/imgui/imgui_draw.cpp',
	'src/imgui/imgui_widgets.cpp',
	'src/imgui/imgui_demo.cpp',
	'src/imgui/imgui_tables.cpp',

	# useful for visual studio build to include headers here
	'src/fwd.hpp',
	'src/device.hpp',
	'src/layer.hpp',
	'src/cb.hpp',
	'src/handles.hpp',
	'src/commands.hpp',
	'src/rp.hpp',
	'src/sync.hpp',
	'src/pipe.hpp',
	'src/shader.hpp',
	'src/ds.hpp',
	'src/window.hpp',
	'src/overlay.hpp',
	'src/queue.hpp',
	'src/platform.hpp',
	'src/win32.hpp',
	'src/data.hpp',
	'src/record.hpp',
	'src/queryPool.hpp',
	'src/submit.hpp',

	'src/vk/vulkan.h',
	'src/vk/vulkan_core.h',
	'src/vk/vulkan_win32.h',
	'src/vk/typemap_helper.h',
	'src/vk/dispatch_table.h',
	'src/vk/dispatch_table_helper.h',
	'src/vk/vk_layer.h',
	'src/vk/format_utils.h',

	'src/gui/gui.hpp',
	'src/gui/resources.hpp',
	'src/gui/cb.hpp',
	'src/gui/command.hpp',
	'src/gui/render.hpp',
	'src/gui/util.hpp',
	'src/gui/commandHook.hpp',
	'src/gui/vertexViewer.hpp',

	'src/util/util.hpp',
	'src/util/span.hpp',
	'src/util/flags.hpp',
	'src/util/f16.hpp',
	'src/util/intrusive.hpp',
	'src/util/syncedMap.hpp',
	'src/util/ext.hpp',

	'src/imgui/imgui.h',
	'include/vil_api.h',
	'src/spirv_reflect.h',
)

public_inc = include_directories('include/')
private_inc = include_directories('src/')

inc = [
	public_inc,
	private_inc,
	shader_inc,
]

deps = [
	dep_threads,
	dep_dlg,
	dep_swa,
	# libimgui_core_dep,
	# dep_vulkan,
]

if with_x11
	src += files('src/xlib.cpp')

	dep_xcb = dependency('xcb', required: true)
	dep_xcb_keysyms = dependency('xcb-keysyms', required: true)
	dep_x11_xcb = dependency('x11-xcb', required: true)

	deps += [dep_xcb, dep_xcb_keysyms, dep_x11_xcb]
	args += ['-DVIL_WITH_X11']
endif

if with_win32
	src += files('src/win32.cpp')
	args += ['-DVIL_WITH_WIN32']
	layer_args += '-DUNICODE'
endif

vil_layer = shared_library(
	'VkLayer_live_introspection',
	[src, spv],
	# disable this for testing
	# gnu_symbol_visibility: 'hidden',
	dependencies: deps,
	include_directories: inc,
	cpp_args: args + layer_args,
	link_args: link_args,
	install: true,
	# cpp_pch: 'src/pch.hpp',
)

conf_data = configuration_data()
conf_data.set('vil_version', meson.project_version())

# TODO: this is terrible... needed for windows
libpath = vil_layer.full_path()
if libpath.contains('\\')
	conf_data.set('lib_path', '.\\\\' + libpath.split('\\')[-1])
else
	conf_data.set('lib_path', libpath.split('/')[-1])
endif

configure_file(
	input: 'VkLayer_live_introspection.json.in',
	output: 'VkLayer_live_introspection.json',
	install: true,
	install_dir: join_paths(get_option('datadir'), 'vulkan', 'explicit_layer.d'),
	configuration: conf_data
)

if build_machine.system() == 'windows'
	# TODO add as install script via meson.add_install_script?
	configure_file(
		input: 'register_layer.bat.in',
		output: 'register_layer.bat',
		install: false,
		copy: true,
	)
endif

if get_option('with_example')
	subdir('docs/example')
endif

if get_option('with_tests')
	subdir('docs/test')
endif
