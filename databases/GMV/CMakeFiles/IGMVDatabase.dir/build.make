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
include databases/GMV/CMakeFiles/IGMVDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/GMV/CMakeFiles/IGMVDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/GMV/CMakeFiles/IGMVDatabase.dir/flags.make

databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o: databases/GMV/GMVPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GMV && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GMV/GMVPluginInfo.C

databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GMV && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GMV/GMVPluginInfo.C > CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.i

databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GMV && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GMV/GMVPluginInfo.C -o CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.s

databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o.requires:
.PHONY : databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o.requires

databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o.provides: databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o.requires
	$(MAKE) -f databases/GMV/CMakeFiles/IGMVDatabase.dir/build.make databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o.provides.build
.PHONY : databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o.provides

databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o.provides.build: databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o

# Object files for target IGMVDatabase
IGMVDatabase_OBJECTS = \
"CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o"

# External object files for target IGMVDatabase
IGMVDatabase_EXTERNAL_OBJECTS =

plugins/databases/libIGMVDatabase.so: databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o
plugins/databases/libIGMVDatabase.so: lib/libvisitcommon.so
plugins/databases/libIGMVDatabase.so: databases/GMV/CMakeFiles/IGMVDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libIGMVDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GMV && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IGMVDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/GMV/CMakeFiles/IGMVDatabase.dir/build: plugins/databases/libIGMVDatabase.so
.PHONY : databases/GMV/CMakeFiles/IGMVDatabase.dir/build

databases/GMV/CMakeFiles/IGMVDatabase.dir/requires: databases/GMV/CMakeFiles/IGMVDatabase.dir/GMVPluginInfo.C.o.requires
.PHONY : databases/GMV/CMakeFiles/IGMVDatabase.dir/requires

databases/GMV/CMakeFiles/IGMVDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GMV && $(CMAKE_COMMAND) -P CMakeFiles/IGMVDatabase.dir/cmake_clean.cmake
.PHONY : databases/GMV/CMakeFiles/IGMVDatabase.dir/clean

databases/GMV/CMakeFiles/IGMVDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GMV /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GMV /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GMV/CMakeFiles/IGMVDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/GMV/CMakeFiles/IGMVDatabase.dir/depend
