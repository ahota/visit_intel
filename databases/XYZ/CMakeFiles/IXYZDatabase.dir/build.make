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
include databases/XYZ/CMakeFiles/IXYZDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/XYZ/CMakeFiles/IXYZDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/XYZ/CMakeFiles/IXYZDatabase.dir/flags.make

databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o: databases/XYZ/XYZPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/XYZ && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/XYZ/XYZPluginInfo.C

databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/XYZ && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/XYZ/XYZPluginInfo.C > CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.i

databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/XYZ && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/XYZ/XYZPluginInfo.C -o CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.s

databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o.requires:
.PHONY : databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o.requires

databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o.provides: databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o.requires
	$(MAKE) -f databases/XYZ/CMakeFiles/IXYZDatabase.dir/build.make databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o.provides.build
.PHONY : databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o.provides

databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o.provides.build: databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o

# Object files for target IXYZDatabase
IXYZDatabase_OBJECTS = \
"CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o"

# External object files for target IXYZDatabase
IXYZDatabase_EXTERNAL_OBJECTS =

plugins/databases/libIXYZDatabase.so: databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o
plugins/databases/libIXYZDatabase.so: lib/libvisitcommon.so
plugins/databases/libIXYZDatabase.so: databases/XYZ/CMakeFiles/IXYZDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libIXYZDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/XYZ && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IXYZDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/XYZ/CMakeFiles/IXYZDatabase.dir/build: plugins/databases/libIXYZDatabase.so
.PHONY : databases/XYZ/CMakeFiles/IXYZDatabase.dir/build

databases/XYZ/CMakeFiles/IXYZDatabase.dir/requires: databases/XYZ/CMakeFiles/IXYZDatabase.dir/XYZPluginInfo.C.o.requires
.PHONY : databases/XYZ/CMakeFiles/IXYZDatabase.dir/requires

databases/XYZ/CMakeFiles/IXYZDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/XYZ && $(CMAKE_COMMAND) -P CMakeFiles/IXYZDatabase.dir/cmake_clean.cmake
.PHONY : databases/XYZ/CMakeFiles/IXYZDatabase.dir/clean

databases/XYZ/CMakeFiles/IXYZDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/XYZ /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/XYZ /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/XYZ/CMakeFiles/IXYZDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/XYZ/CMakeFiles/IXYZDatabase.dir/depend

