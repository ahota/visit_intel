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
include tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/depend.make

# Include the progress variables for this target.
include tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/progress.make

# Include the compile flags for this target's objects.
include tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/flags.make

tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.o: tools/DataManualExamples/CreatingCompatible/rect3d.c
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatible && /opt/intel/bin/icc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/example_rect3d.dir/rect3d.c.o   -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatible/rect3d.c

tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/example_rect3d.dir/rect3d.c.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatible && /opt/intel/bin/icc  $(C_DEFINES) $(C_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatible/rect3d.c > CMakeFiles/example_rect3d.dir/rect3d.c.i

tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/example_rect3d.dir/rect3d.c.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatible && /opt/intel/bin/icc  $(C_DEFINES) $(C_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatible/rect3d.c -o CMakeFiles/example_rect3d.dir/rect3d.c.s

tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.o.requires:
.PHONY : tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.o.requires

tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.o.provides: tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.o.requires
	$(MAKE) -f tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/build.make tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.o.provides.build
.PHONY : tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.o.provides

tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.o.provides.build: tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.o

# Object files for target example_rect3d
example_rect3d_OBJECTS = \
"CMakeFiles/example_rect3d.dir/rect3d.c.o"

# External object files for target example_rect3d
example_rect3d_EXTERNAL_OBJECTS =

tools/DataManualExamples/CreatingCompatible/rect3d: tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.o
tools/DataManualExamples/CreatingCompatible/rect3d: tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable rect3d"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatible && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_rect3d.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/build: tools/DataManualExamples/CreatingCompatible/rect3d
.PHONY : tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/build

tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/requires: tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/rect3d.c.o.requires
.PHONY : tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/requires

tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatible && $(CMAKE_COMMAND) -P CMakeFiles/example_rect3d.dir/cmake_clean.cmake
.PHONY : tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/clean

tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatible /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatible /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/DataManualExamples/CreatingCompatible/CMakeFiles/example_rect3d.dir/depend

