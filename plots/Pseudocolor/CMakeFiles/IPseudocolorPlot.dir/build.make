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
include plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/depend.make

# Include the progress variables for this target.
include plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/progress.make

# Include the compile flags for this target's objects.
include plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/flags.make

plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o: plots/Pseudocolor/PseudocolorPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Pseudocolor && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Pseudocolor/PseudocolorPluginInfo.C

plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Pseudocolor && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Pseudocolor/PseudocolorPluginInfo.C > CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.i

plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Pseudocolor && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Pseudocolor/PseudocolorPluginInfo.C -o CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.s

plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o.requires:
.PHONY : plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o.requires

plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o.provides: plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o.requires
	$(MAKE) -f plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/build.make plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o.provides.build
.PHONY : plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o.provides

plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o.provides.build: plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o

# Object files for target IPseudocolorPlot
IPseudocolorPlot_OBJECTS = \
"CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o"

# External object files for target IPseudocolorPlot
IPseudocolorPlot_EXTERNAL_OBJECTS =

plugins/plots/libIPseudocolorPlot.so: plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o
plugins/plots/libIPseudocolorPlot.so: lib/libvisitcommon.so
plugins/plots/libIPseudocolorPlot.so: plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/plots/libIPseudocolorPlot.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Pseudocolor && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IPseudocolorPlot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/build: plugins/plots/libIPseudocolorPlot.so
.PHONY : plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/build

plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/requires: plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/PseudocolorPluginInfo.C.o.requires
.PHONY : plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/requires

plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Pseudocolor && $(CMAKE_COMMAND) -P CMakeFiles/IPseudocolorPlot.dir/cmake_clean.cmake
.PHONY : plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/clean

plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Pseudocolor /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Pseudocolor /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plots/Pseudocolor/CMakeFiles/IPseudocolorPlot.dir/depend
