# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /export/ahota/visit/visitOSPRay/visit2.8.1/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /export/ahota/visit/visitOSPRay/visit2.8.1/src

# Include any dependencies generated for this target.
include tools/clipeditor/CMakeFiles/genpolycases.dir/depend.make

# Include the progress variables for this target.
include tools/clipeditor/CMakeFiles/genpolycases.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clipeditor/CMakeFiles/genpolycases.dir/flags.make

tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.o: tools/clipeditor/genpolycases.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/clipeditor && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/genpolycases.dir/genpolycases.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/clipeditor/genpolycases.C

tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/genpolycases.dir/genpolycases.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/clipeditor && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/clipeditor/genpolycases.C > CMakeFiles/genpolycases.dir/genpolycases.C.i

tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/genpolycases.dir/genpolycases.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/clipeditor && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/clipeditor/genpolycases.C -o CMakeFiles/genpolycases.dir/genpolycases.C.s

tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.o.requires:
.PHONY : tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.o.requires

tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.o.provides: tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.o.requires
	$(MAKE) -f tools/clipeditor/CMakeFiles/genpolycases.dir/build.make tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.o.provides.build
.PHONY : tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.o.provides

tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.o.provides.build: tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.o

# Object files for target genpolycases
genpolycases_OBJECTS = \
"CMakeFiles/genpolycases.dir/genpolycases.C.o"

# External object files for target genpolycases
genpolycases_EXTERNAL_OBJECTS =

exe/genpolycases: tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.o
exe/genpolycases: tools/clipeditor/CMakeFiles/genpolycases.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../exe/genpolycases"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/clipeditor && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/genpolycases.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clipeditor/CMakeFiles/genpolycases.dir/build: exe/genpolycases
.PHONY : tools/clipeditor/CMakeFiles/genpolycases.dir/build

tools/clipeditor/CMakeFiles/genpolycases.dir/requires: tools/clipeditor/CMakeFiles/genpolycases.dir/genpolycases.C.o.requires
.PHONY : tools/clipeditor/CMakeFiles/genpolycases.dir/requires

tools/clipeditor/CMakeFiles/genpolycases.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/clipeditor && $(CMAKE_COMMAND) -P CMakeFiles/genpolycases.dir/cmake_clean.cmake
.PHONY : tools/clipeditor/CMakeFiles/genpolycases.dir/clean

tools/clipeditor/CMakeFiles/genpolycases.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/clipeditor /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/clipeditor /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/clipeditor/CMakeFiles/genpolycases.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clipeditor/CMakeFiles/genpolycases.dir/depend

