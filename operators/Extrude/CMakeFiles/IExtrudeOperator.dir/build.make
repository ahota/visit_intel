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
include operators/Extrude/CMakeFiles/IExtrudeOperator.dir/depend.make

# Include the progress variables for this target.
include operators/Extrude/CMakeFiles/IExtrudeOperator.dir/progress.make

# Include the compile flags for this target's objects.
include operators/Extrude/CMakeFiles/IExtrudeOperator.dir/flags.make

operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o: operators/Extrude/ExtrudePluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Extrude && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Extrude/ExtrudePluginInfo.C

operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Extrude && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Extrude/ExtrudePluginInfo.C > CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.i

operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Extrude && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Extrude/ExtrudePluginInfo.C -o CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.s

operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o.requires:
.PHONY : operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o.requires

operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o.provides: operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o.requires
	$(MAKE) -f operators/Extrude/CMakeFiles/IExtrudeOperator.dir/build.make operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o.provides.build
.PHONY : operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o.provides

operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o.provides.build: operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o

# Object files for target IExtrudeOperator
IExtrudeOperator_OBJECTS = \
"CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o"

# External object files for target IExtrudeOperator
IExtrudeOperator_EXTERNAL_OBJECTS =

plugins/operators/libIExtrudeOperator.so: operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o
plugins/operators/libIExtrudeOperator.so: lib/libvisitcommon.so
plugins/operators/libIExtrudeOperator.so: operators/Extrude/CMakeFiles/IExtrudeOperator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/operators/libIExtrudeOperator.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Extrude && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IExtrudeOperator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
operators/Extrude/CMakeFiles/IExtrudeOperator.dir/build: plugins/operators/libIExtrudeOperator.so
.PHONY : operators/Extrude/CMakeFiles/IExtrudeOperator.dir/build

operators/Extrude/CMakeFiles/IExtrudeOperator.dir/requires: operators/Extrude/CMakeFiles/IExtrudeOperator.dir/ExtrudePluginInfo.C.o.requires
.PHONY : operators/Extrude/CMakeFiles/IExtrudeOperator.dir/requires

operators/Extrude/CMakeFiles/IExtrudeOperator.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Extrude && $(CMAKE_COMMAND) -P CMakeFiles/IExtrudeOperator.dir/cmake_clean.cmake
.PHONY : operators/Extrude/CMakeFiles/IExtrudeOperator.dir/clean

operators/Extrude/CMakeFiles/IExtrudeOperator.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Extrude /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Extrude /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Extrude/CMakeFiles/IExtrudeOperator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : operators/Extrude/CMakeFiles/IExtrudeOperator.dir/depend

