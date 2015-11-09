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
include operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/depend.make

# Include the progress variables for this target.
include operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/progress.make

# Include the compile flags for this target's objects.
include operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/flags.make

operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o: operators/OnionPeel/OnionPeelPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/OnionPeel && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/OnionPeel/OnionPeelPluginInfo.C

operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/OnionPeel && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/OnionPeel/OnionPeelPluginInfo.C > CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.i

operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/OnionPeel && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/OnionPeel/OnionPeelPluginInfo.C -o CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.s

operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o.requires:
.PHONY : operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o.requires

operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o.provides: operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o.requires
	$(MAKE) -f operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/build.make operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o.provides.build
.PHONY : operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o.provides

operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o.provides.build: operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o

# Object files for target IOnionPeelOperator
IOnionPeelOperator_OBJECTS = \
"CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o"

# External object files for target IOnionPeelOperator
IOnionPeelOperator_EXTERNAL_OBJECTS =

plugins/operators/libIOnionPeelOperator.so: operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o
plugins/operators/libIOnionPeelOperator.so: lib/libvisitcommon.so
plugins/operators/libIOnionPeelOperator.so: operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/operators/libIOnionPeelOperator.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/OnionPeel && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IOnionPeelOperator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/build: plugins/operators/libIOnionPeelOperator.so
.PHONY : operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/build

operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/requires: operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/OnionPeelPluginInfo.C.o.requires
.PHONY : operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/requires

operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/OnionPeel && $(CMAKE_COMMAND) -P CMakeFiles/IOnionPeelOperator.dir/cmake_clean.cmake
.PHONY : operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/clean

operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/OnionPeel /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/OnionPeel /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : operators/OnionPeel/CMakeFiles/IOnionPeelOperator.dir/depend

