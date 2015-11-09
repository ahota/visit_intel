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
include operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/depend.make

# Include the progress variables for this target.
include operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/progress.make

# Include the compile flags for this target's objects.
include operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/flags.make

operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o: operators/AMRStitchCell/AMRStitchCellPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/AMRStitchCell && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/AMRStitchCell/AMRStitchCellPluginInfo.C

operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/AMRStitchCell && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/AMRStitchCell/AMRStitchCellPluginInfo.C > CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.i

operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/AMRStitchCell && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/AMRStitchCell/AMRStitchCellPluginInfo.C -o CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.s

operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o.requires:
.PHONY : operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o.requires

operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o.provides: operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o.requires
	$(MAKE) -f operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/build.make operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o.provides.build
.PHONY : operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o.provides

operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o.provides.build: operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o

# Object files for target IAMRStitchCellOperator
IAMRStitchCellOperator_OBJECTS = \
"CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o"

# External object files for target IAMRStitchCellOperator
IAMRStitchCellOperator_EXTERNAL_OBJECTS =

plugins/operators/libIAMRStitchCellOperator.so: operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o
plugins/operators/libIAMRStitchCellOperator.so: lib/libvisitcommon.so
plugins/operators/libIAMRStitchCellOperator.so: operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/operators/libIAMRStitchCellOperator.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/AMRStitchCell && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IAMRStitchCellOperator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/build: plugins/operators/libIAMRStitchCellOperator.so
.PHONY : operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/build

operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/requires: operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/AMRStitchCellPluginInfo.C.o.requires
.PHONY : operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/requires

operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/AMRStitchCell && $(CMAKE_COMMAND) -P CMakeFiles/IAMRStitchCellOperator.dir/cmake_clean.cmake
.PHONY : operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/clean

operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/AMRStitchCell /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/AMRStitchCell /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : operators/AMRStitchCell/CMakeFiles/IAMRStitchCellOperator.dir/depend

