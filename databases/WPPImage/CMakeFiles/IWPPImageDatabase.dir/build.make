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
include databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/flags.make

databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o: databases/WPPImage/WPPImagePluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/WPPImage && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/WPPImage/WPPImagePluginInfo.C

databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/WPPImage && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/WPPImage/WPPImagePluginInfo.C > CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.i

databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/WPPImage && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/WPPImage/WPPImagePluginInfo.C -o CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.s

databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o.requires:
.PHONY : databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o.requires

databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o.provides: databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o.requires
	$(MAKE) -f databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/build.make databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o.provides.build
.PHONY : databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o.provides

databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o.provides.build: databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o

# Object files for target IWPPImageDatabase
IWPPImageDatabase_OBJECTS = \
"CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o"

# External object files for target IWPPImageDatabase
IWPPImageDatabase_EXTERNAL_OBJECTS =

plugins/databases/libIWPPImageDatabase.so: databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o
plugins/databases/libIWPPImageDatabase.so: lib/libvisitcommon.so
plugins/databases/libIWPPImageDatabase.so: databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libIWPPImageDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/WPPImage && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IWPPImageDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/build: plugins/databases/libIWPPImageDatabase.so
.PHONY : databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/build

databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/requires: databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/WPPImagePluginInfo.C.o.requires
.PHONY : databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/requires

databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/WPPImage && $(CMAKE_COMMAND) -P CMakeFiles/IWPPImageDatabase.dir/cmake_clean.cmake
.PHONY : databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/clean

databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/WPPImage /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/WPPImage /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/WPPImage/CMakeFiles/IWPPImageDatabase.dir/depend

