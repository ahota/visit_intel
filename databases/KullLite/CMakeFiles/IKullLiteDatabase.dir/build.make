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
include databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/flags.make

databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o: databases/KullLite/KullLitePluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/KullLite && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/KullLite/KullLitePluginInfo.C

databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/KullLite && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/KullLite/KullLitePluginInfo.C > CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.i

databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/KullLite && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/KullLite/KullLitePluginInfo.C -o CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.s

databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o.requires:
.PHONY : databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o.requires

databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o.provides: databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o.requires
	$(MAKE) -f databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/build.make databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o.provides.build
.PHONY : databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o.provides

databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o.provides.build: databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o

# Object files for target IKullLiteDatabase
IKullLiteDatabase_OBJECTS = \
"CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o"

# External object files for target IKullLiteDatabase
IKullLiteDatabase_EXTERNAL_OBJECTS =

plugins/databases/libIKullLiteDatabase.so: databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o
plugins/databases/libIKullLiteDatabase.so: lib/libvisitcommon.so
plugins/databases/libIKullLiteDatabase.so: databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libIKullLiteDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/KullLite && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IKullLiteDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/build: plugins/databases/libIKullLiteDatabase.so
.PHONY : databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/build

databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/requires: databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/KullLitePluginInfo.C.o.requires
.PHONY : databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/requires

databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/KullLite && $(CMAKE_COMMAND) -P CMakeFiles/IKullLiteDatabase.dir/cmake_clean.cmake
.PHONY : databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/clean

databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/KullLite /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/KullLite /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/KullLite/CMakeFiles/IKullLiteDatabase.dir/depend

