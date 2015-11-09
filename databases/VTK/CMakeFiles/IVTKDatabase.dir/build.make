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
include databases/VTK/CMakeFiles/IVTKDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/VTK/CMakeFiles/IVTKDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/VTK/CMakeFiles/IVTKDatabase.dir/flags.make

databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o: databases/VTK/VTKPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VTK && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VTK/VTKPluginInfo.C

databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VTK && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VTK/VTKPluginInfo.C > CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.i

databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VTK && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VTK/VTKPluginInfo.C -o CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.s

databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o.requires:
.PHONY : databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o.requires

databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o.provides: databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o.requires
	$(MAKE) -f databases/VTK/CMakeFiles/IVTKDatabase.dir/build.make databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o.provides.build
.PHONY : databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o.provides

databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o.provides.build: databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o

# Object files for target IVTKDatabase
IVTKDatabase_OBJECTS = \
"CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o"

# External object files for target IVTKDatabase
IVTKDatabase_EXTERNAL_OBJECTS =

plugins/databases/libIVTKDatabase.so: databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o
plugins/databases/libIVTKDatabase.so: lib/libvisitcommon.so
plugins/databases/libIVTKDatabase.so: databases/VTK/CMakeFiles/IVTKDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libIVTKDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VTK && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IVTKDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/VTK/CMakeFiles/IVTKDatabase.dir/build: plugins/databases/libIVTKDatabase.so
.PHONY : databases/VTK/CMakeFiles/IVTKDatabase.dir/build

databases/VTK/CMakeFiles/IVTKDatabase.dir/requires: databases/VTK/CMakeFiles/IVTKDatabase.dir/VTKPluginInfo.C.o.requires
.PHONY : databases/VTK/CMakeFiles/IVTKDatabase.dir/requires

databases/VTK/CMakeFiles/IVTKDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VTK && $(CMAKE_COMMAND) -P CMakeFiles/IVTKDatabase.dir/cmake_clean.cmake
.PHONY : databases/VTK/CMakeFiles/IVTKDatabase.dir/clean

databases/VTK/CMakeFiles/IVTKDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VTK /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VTK /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VTK/CMakeFiles/IVTKDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/VTK/CMakeFiles/IVTKDatabase.dir/depend

