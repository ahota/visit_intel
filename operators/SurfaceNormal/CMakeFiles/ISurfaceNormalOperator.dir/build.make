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
include operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/depend.make

# Include the progress variables for this target.
include operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/progress.make

# Include the compile flags for this target's objects.
include operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/flags.make

operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o: operators/SurfaceNormal/SurfaceNormalPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/SurfaceNormal && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/SurfaceNormal/SurfaceNormalPluginInfo.C

operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/SurfaceNormal && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/SurfaceNormal/SurfaceNormalPluginInfo.C > CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.i

operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/SurfaceNormal && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/SurfaceNormal/SurfaceNormalPluginInfo.C -o CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.s

operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o.requires:
.PHONY : operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o.requires

operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o.provides: operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o.requires
	$(MAKE) -f operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/build.make operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o.provides.build
.PHONY : operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o.provides

operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o.provides.build: operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o

# Object files for target ISurfaceNormalOperator
ISurfaceNormalOperator_OBJECTS = \
"CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o"

# External object files for target ISurfaceNormalOperator
ISurfaceNormalOperator_EXTERNAL_OBJECTS =

plugins/operators/libISurfaceNormalOperator.so: operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o
plugins/operators/libISurfaceNormalOperator.so: lib/libvisitcommon.so
plugins/operators/libISurfaceNormalOperator.so: operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/operators/libISurfaceNormalOperator.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/SurfaceNormal && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ISurfaceNormalOperator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/build: plugins/operators/libISurfaceNormalOperator.so
.PHONY : operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/build

operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/requires: operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/SurfaceNormalPluginInfo.C.o.requires
.PHONY : operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/requires

operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/SurfaceNormal && $(CMAKE_COMMAND) -P CMakeFiles/ISurfaceNormalOperator.dir/cmake_clean.cmake
.PHONY : operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/clean

operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/SurfaceNormal /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/SurfaceNormal /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : operators/SurfaceNormal/CMakeFiles/ISurfaceNormalOperator.dir/depend
