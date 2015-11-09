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
include databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/flags.make

databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o: databases/VCellMTMD/VCellMTMDPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VCellMTMD && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VCellMTMD/VCellMTMDPluginInfo.C

databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VCellMTMD && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VCellMTMD/VCellMTMDPluginInfo.C > CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.i

databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VCellMTMD && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VCellMTMD/VCellMTMDPluginInfo.C -o CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.s

databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o.requires:
.PHONY : databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o.requires

databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o.provides: databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o.requires
	$(MAKE) -f databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/build.make databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o.provides.build
.PHONY : databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o.provides

databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o.provides.build: databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o

# Object files for target IVCellMTMDDatabase
IVCellMTMDDatabase_OBJECTS = \
"CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o"

# External object files for target IVCellMTMDDatabase
IVCellMTMDDatabase_EXTERNAL_OBJECTS =

plugins/databases/libIVCellMTMDDatabase.so: databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o
plugins/databases/libIVCellMTMDDatabase.so: lib/libvisitcommon.so
plugins/databases/libIVCellMTMDDatabase.so: databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libIVCellMTMDDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VCellMTMD && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IVCellMTMDDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/build: plugins/databases/libIVCellMTMDDatabase.so
.PHONY : databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/build

databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/requires: databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/VCellMTMDPluginInfo.C.o.requires
.PHONY : databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/requires

databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VCellMTMD && $(CMAKE_COMMAND) -P CMakeFiles/IVCellMTMDDatabase.dir/cmake_clean.cmake
.PHONY : databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/clean

databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VCellMTMD /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VCellMTMD /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/VCellMTMD/CMakeFiles/IVCellMTMDDatabase.dir/depend

