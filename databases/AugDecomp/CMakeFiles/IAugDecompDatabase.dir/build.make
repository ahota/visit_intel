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
include databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/flags.make

databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o: databases/AugDecomp/AugDecompPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AugDecomp && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AugDecomp/AugDecompPluginInfo.C

databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AugDecomp && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AugDecomp/AugDecompPluginInfo.C > CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.i

databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AugDecomp && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AugDecomp/AugDecompPluginInfo.C -o CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.s

databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o.requires:
.PHONY : databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o.requires

databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o.provides: databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o.requires
	$(MAKE) -f databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/build.make databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o.provides.build
.PHONY : databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o.provides

databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o.provides.build: databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o

# Object files for target IAugDecompDatabase
IAugDecompDatabase_OBJECTS = \
"CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o"

# External object files for target IAugDecompDatabase
IAugDecompDatabase_EXTERNAL_OBJECTS =

plugins/databases/libIAugDecompDatabase.so: databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o
plugins/databases/libIAugDecompDatabase.so: lib/libvisitcommon.so
plugins/databases/libIAugDecompDatabase.so: databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libIAugDecompDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AugDecomp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IAugDecompDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/build: plugins/databases/libIAugDecompDatabase.so
.PHONY : databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/build

databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/requires: databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/AugDecompPluginInfo.C.o.requires
.PHONY : databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/requires

databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AugDecomp && $(CMAKE_COMMAND) -P CMakeFiles/IAugDecompDatabase.dir/cmake_clean.cmake
.PHONY : databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/clean

databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AugDecomp /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AugDecomp /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/AugDecomp/CMakeFiles/IAugDecompDatabase.dir/depend

