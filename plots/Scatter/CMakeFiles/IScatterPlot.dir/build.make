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
include plots/Scatter/CMakeFiles/IScatterPlot.dir/depend.make

# Include the progress variables for this target.
include plots/Scatter/CMakeFiles/IScatterPlot.dir/progress.make

# Include the compile flags for this target's objects.
include plots/Scatter/CMakeFiles/IScatterPlot.dir/flags.make

plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o: plots/Scatter/ScatterPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Scatter && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Scatter/ScatterPluginInfo.C

plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Scatter && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Scatter/ScatterPluginInfo.C > CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.i

plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Scatter && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Scatter/ScatterPluginInfo.C -o CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.s

plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o.requires:
.PHONY : plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o.requires

plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o.provides: plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o.requires
	$(MAKE) -f plots/Scatter/CMakeFiles/IScatterPlot.dir/build.make plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o.provides.build
.PHONY : plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o.provides

plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o.provides.build: plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o

# Object files for target IScatterPlot
IScatterPlot_OBJECTS = \
"CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o"

# External object files for target IScatterPlot
IScatterPlot_EXTERNAL_OBJECTS =

plugins/plots/libIScatterPlot.so: plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o
plugins/plots/libIScatterPlot.so: lib/libvisitcommon.so
plugins/plots/libIScatterPlot.so: plots/Scatter/CMakeFiles/IScatterPlot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/plots/libIScatterPlot.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Scatter && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IScatterPlot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plots/Scatter/CMakeFiles/IScatterPlot.dir/build: plugins/plots/libIScatterPlot.so
.PHONY : plots/Scatter/CMakeFiles/IScatterPlot.dir/build

plots/Scatter/CMakeFiles/IScatterPlot.dir/requires: plots/Scatter/CMakeFiles/IScatterPlot.dir/ScatterPluginInfo.C.o.requires
.PHONY : plots/Scatter/CMakeFiles/IScatterPlot.dir/requires

plots/Scatter/CMakeFiles/IScatterPlot.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Scatter && $(CMAKE_COMMAND) -P CMakeFiles/IScatterPlot.dir/cmake_clean.cmake
.PHONY : plots/Scatter/CMakeFiles/IScatterPlot.dir/clean

plots/Scatter/CMakeFiles/IScatterPlot.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Scatter /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Scatter /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Scatter/CMakeFiles/IScatterPlot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plots/Scatter/CMakeFiles/IScatterPlot.dir/depend

