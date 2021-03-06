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
include databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/flags.make

databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o: databases/SXRIS/SXRISPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SXRIS && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SXRIS/SXRISPluginInfo.C

databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SXRIS && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SXRIS/SXRISPluginInfo.C > CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.i

databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SXRIS && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SXRIS/SXRISPluginInfo.C -o CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.s

databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o.requires:
.PHONY : databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o.requires

databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o.provides: databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o.requires
	$(MAKE) -f databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/build.make databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o.provides.build
.PHONY : databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o.provides

databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o.provides.build: databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o

# Object files for target ISXRISDatabase
ISXRISDatabase_OBJECTS = \
"CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o"

# External object files for target ISXRISDatabase
ISXRISDatabase_EXTERNAL_OBJECTS =

plugins/databases/libISXRISDatabase.so: databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o
plugins/databases/libISXRISDatabase.so: lib/libvisitcommon.so
plugins/databases/libISXRISDatabase.so: databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libISXRISDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SXRIS && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ISXRISDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/build: plugins/databases/libISXRISDatabase.so
.PHONY : databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/build

databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/requires: databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/SXRISPluginInfo.C.o.requires
.PHONY : databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/requires

databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SXRIS && $(CMAKE_COMMAND) -P CMakeFiles/ISXRISDatabase.dir/cmake_clean.cmake
.PHONY : databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/clean

databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SXRIS /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SXRIS /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/SXRIS/CMakeFiles/ISXRISDatabase.dir/depend

