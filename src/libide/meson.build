libide_header_subdir = join_paths('gnome-builder-@0@.@1@'.format(MAJOR_VERSION, MINOR_VERSION), 'libide')
libide_header_dir = join_paths(get_option('includedir'), libide_header_subdir)
libide_include_directories = []

subdir('core')
subdir('plugins')
subdir('threading')
subdir('io')
subdir('code')
subdir('vcs')
subdir('projects')
subdir('search')
subdir('foundry')
subdir('debugger')
subdir('themes')
subdir('gui')
subdir('terminal')
subdir('sourceview')
subdir('lsp')
subdir('editor')
subdir('greeter')
subdir('webkit')
subdir('tree')

py_installation = pymod.find_installation('python3')
py_installation.install_sources('Ide.py', subdir: 'gi' / 'overrides')
