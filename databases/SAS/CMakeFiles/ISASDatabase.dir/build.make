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
include databases/SAS/CMakeFiles/ISASDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/SAS/CMakeFiles/ISASDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/SAS/CMakeFiles/ISASDatabase.dir/flags.make

databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o: databases/SAS/SASPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SAS && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SAS/SASPluginInfo.C

databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SAS && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SAS/SASPluginInfo.C > CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.i

databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SAS && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SAS/SASPluginInfo.C -o CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.s

databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o.requires:
.PHONY : databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o.requires

databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o.provides: databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o.requires
	$(MAKE) -f databases/SAS/CMakeFiles/ISASDatabase.dir/build.make databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o.provides.build
.PHONY : databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o.provides

databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o.provides.build: databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o

# Object files for target ISASDatabase
ISASDatabase_OBJECTS = \
"CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o"

# External object files for target ISASDatabase
ISASDatabase_EXTERNAL_OBJECTS =

plugins/databases/libISASDatabase.so: databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o
plugins/databases/libISASDatabase.so: lib/libvisitcommon.so
plugins/databases/libISASDatabase.so: databases/SAS/CMakeFiles/ISASDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libISASDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SAS && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ISASDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/SAS/CMakeFiles/ISASDatabase.dir/build: plugins/databases/libISASDatabase.so
.PHONY : databases/SAS/CMakeFiles/ISASDatabase.dir/build

databases/SAS/CMakeFiles/ISASDatabase.dir/requires: databases/SAS/CMakeFiles/ISASDatabase.dir/SASPluginInfo.C.o.requires
.PHONY : databases/SAS/CMakeFiles/ISASDatabase.dir/requires

databases/SAS/CMakeFiles/ISASDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SAS && $(CMAKE_COMMAND) -P CMakeFiles/ISASDatabase.dir/cmake_clean.cmake
.PHONY : databases/SAS/CMakeFiles/ISASDatabase.dir/clean

databases/SAS/CMakeFiles/ISASDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SAS /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SAS /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SAS/CMakeFiles/ISASDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/SAS/CMakeFiles/ISASDatabase.dir/depend

