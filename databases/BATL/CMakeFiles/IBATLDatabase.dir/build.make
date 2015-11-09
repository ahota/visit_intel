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
include databases/BATL/CMakeFiles/IBATLDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/BATL/CMakeFiles/IBATLDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/BATL/CMakeFiles/IBATLDatabase.dir/flags.make

databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o: databases/BATL/BATLPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/BATL && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/BATL/BATLPluginInfo.C

databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/BATL && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/BATL/BATLPluginInfo.C > CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.i

databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/BATL && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/BATL/BATLPluginInfo.C -o CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.s

databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o.requires:
.PHONY : databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o.requires

databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o.provides: databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o.requires
	$(MAKE) -f databases/BATL/CMakeFiles/IBATLDatabase.dir/build.make databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o.provides.build
.PHONY : databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o.provides

databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o.provides.build: databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o

# Object files for target IBATLDatabase
IBATLDatabase_OBJECTS = \
"CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o"

# External object files for target IBATLDatabase
IBATLDatabase_EXTERNAL_OBJECTS =

plugins/databases/libIBATLDatabase.so: databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o
plugins/databases/libIBATLDatabase.so: lib/libvisitcommon.so
plugins/databases/libIBATLDatabase.so: databases/BATL/CMakeFiles/IBATLDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libIBATLDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/BATL && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IBATLDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/BATL/CMakeFiles/IBATLDatabase.dir/build: plugins/databases/libIBATLDatabase.so
.PHONY : databases/BATL/CMakeFiles/IBATLDatabase.dir/build

databases/BATL/CMakeFiles/IBATLDatabase.dir/requires: databases/BATL/CMakeFiles/IBATLDatabase.dir/BATLPluginInfo.C.o.requires
.PHONY : databases/BATL/CMakeFiles/IBATLDatabase.dir/requires

databases/BATL/CMakeFiles/IBATLDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/BATL && $(CMAKE_COMMAND) -P CMakeFiles/IBATLDatabase.dir/cmake_clean.cmake
.PHONY : databases/BATL/CMakeFiles/IBATLDatabase.dir/clean

databases/BATL/CMakeFiles/IBATLDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/BATL /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/BATL /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/BATL/CMakeFiles/IBATLDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/BATL/CMakeFiles/IBATLDatabase.dir/depend

