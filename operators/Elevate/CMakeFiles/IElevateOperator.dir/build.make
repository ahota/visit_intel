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
include operators/Elevate/CMakeFiles/IElevateOperator.dir/depend.make

# Include the progress variables for this target.
include operators/Elevate/CMakeFiles/IElevateOperator.dir/progress.make

# Include the compile flags for this target's objects.
include operators/Elevate/CMakeFiles/IElevateOperator.dir/flags.make

operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o: operators/Elevate/ElevatePluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Elevate && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Elevate/ElevatePluginInfo.C

operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Elevate && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Elevate/ElevatePluginInfo.C > CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.i

operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Elevate && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Elevate/ElevatePluginInfo.C -o CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.s

operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o.requires:
.PHONY : operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o.requires

operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o.provides: operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o.requires
	$(MAKE) -f operators/Elevate/CMakeFiles/IElevateOperator.dir/build.make operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o.provides.build
.PHONY : operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o.provides

operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o.provides.build: operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o

# Object files for target IElevateOperator
IElevateOperator_OBJECTS = \
"CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o"

# External object files for target IElevateOperator
IElevateOperator_EXTERNAL_OBJECTS =

plugins/operators/libIElevateOperator.so: operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o
plugins/operators/libIElevateOperator.so: lib/libvisitcommon.so
plugins/operators/libIElevateOperator.so: operators/Elevate/CMakeFiles/IElevateOperator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/operators/libIElevateOperator.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Elevate && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IElevateOperator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
operators/Elevate/CMakeFiles/IElevateOperator.dir/build: plugins/operators/libIElevateOperator.so
.PHONY : operators/Elevate/CMakeFiles/IElevateOperator.dir/build

operators/Elevate/CMakeFiles/IElevateOperator.dir/requires: operators/Elevate/CMakeFiles/IElevateOperator.dir/ElevatePluginInfo.C.o.requires
.PHONY : operators/Elevate/CMakeFiles/IElevateOperator.dir/requires

operators/Elevate/CMakeFiles/IElevateOperator.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Elevate && $(CMAKE_COMMAND) -P CMakeFiles/IElevateOperator.dir/cmake_clean.cmake
.PHONY : operators/Elevate/CMakeFiles/IElevateOperator.dir/clean

operators/Elevate/CMakeFiles/IElevateOperator.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Elevate /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Elevate /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Elevate/CMakeFiles/IElevateOperator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : operators/Elevate/CMakeFiles/IElevateOperator.dir/depend

