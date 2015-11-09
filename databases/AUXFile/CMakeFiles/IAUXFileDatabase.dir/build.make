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
include databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/flags.make

databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o: databases/AUXFile/AUXFilePluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AUXFile && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AUXFile/AUXFilePluginInfo.C

databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AUXFile && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AUXFile/AUXFilePluginInfo.C > CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.i

databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AUXFile && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AUXFile/AUXFilePluginInfo.C -o CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.s

databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o.requires:
.PHONY : databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o.requires

databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o.provides: databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o.requires
	$(MAKE) -f databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/build.make databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o.provides.build
.PHONY : databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o.provides

databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o.provides.build: databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o

# Object files for target IAUXFileDatabase
IAUXFileDatabase_OBJECTS = \
"CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o"

# External object files for target IAUXFileDatabase
IAUXFileDatabase_EXTERNAL_OBJECTS =

plugins/databases/libIAUXFileDatabase.so: databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o
plugins/databases/libIAUXFileDatabase.so: lib/libvisitcommon.so
plugins/databases/libIAUXFileDatabase.so: databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libIAUXFileDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AUXFile && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IAUXFileDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/build: plugins/databases/libIAUXFileDatabase.so
.PHONY : databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/build

databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/requires: databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/AUXFilePluginInfo.C.o.requires
.PHONY : databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/requires

databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AUXFile && $(CMAKE_COMMAND) -P CMakeFiles/IAUXFileDatabase.dir/cmake_clean.cmake
.PHONY : databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/clean

databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AUXFile /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AUXFile /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/AUXFile/CMakeFiles/IAUXFileDatabase.dir/depend

