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
include tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/depend.make

# Include the progress variables for this target.
include tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/progress.make

# Include the compile flags for this target's objects.
include tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/flags.make

tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o: tools/mrgtree2dot/mrgtree2dot.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/mrgtree2dot && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/mrgtree2dot/mrgtree2dot.C

tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/mrgtree2dot && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/mrgtree2dot/mrgtree2dot.C > CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.i

tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/mrgtree2dot && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/mrgtree2dot/mrgtree2dot.C -o CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.s

tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o.requires:
.PHONY : tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o.requires

tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o.provides: tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o.requires
	$(MAKE) -f tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/build.make tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o.provides.build
.PHONY : tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o.provides

tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o.provides.build: tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o

# Object files for target mrgtree2dot
mrgtree2dot_OBJECTS = \
"CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o"

# External object files for target mrgtree2dot
mrgtree2dot_EXTERNAL_OBJECTS =

exe/mrgtree2dot: tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o
exe/mrgtree2dot: tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../exe/mrgtree2dot"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/mrgtree2dot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mrgtree2dot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/build: exe/mrgtree2dot
.PHONY : tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/build

tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/requires: tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/mrgtree2dot.C.o.requires
.PHONY : tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/requires

tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/mrgtree2dot && $(CMAKE_COMMAND) -P CMakeFiles/mrgtree2dot.dir/cmake_clean.cmake
.PHONY : tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/clean

tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/mrgtree2dot /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/mrgtree2dot /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/mrgtree2dot/CMakeFiles/mrgtree2dot.dir/depend
