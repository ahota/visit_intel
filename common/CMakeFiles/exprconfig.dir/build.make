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
include common/CMakeFiles/exprconfig.dir/depend.make

# Include the progress variables for this target.
include common/CMakeFiles/exprconfig.dir/progress.make

# Include the compile flags for this target's objects.
include common/CMakeFiles/exprconfig.dir/flags.make

common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o: common/expr/ExprConfig.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/common && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/common/expr/ExprConfig.C

common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exprconfig.dir/expr/ExprConfig.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/common && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/common/expr/ExprConfig.C > CMakeFiles/exprconfig.dir/expr/ExprConfig.C.i

common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exprconfig.dir/expr/ExprConfig.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/common && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/common/expr/ExprConfig.C -o CMakeFiles/exprconfig.dir/expr/ExprConfig.C.s

common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o.requires:
.PHONY : common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o.requires

common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o.provides: common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o.requires
	$(MAKE) -f common/CMakeFiles/exprconfig.dir/build.make common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o.provides.build
.PHONY : common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o.provides

common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o.provides.build: common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o

# Object files for target exprconfig
exprconfig_OBJECTS = \
"CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o"

# External object files for target exprconfig
exprconfig_EXTERNAL_OBJECTS =

exe/exprconfig: common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o
exe/exprconfig: lib/libvisitcommon.so
exe/exprconfig: common/CMakeFiles/exprconfig.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../exe/exprconfig"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/common && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exprconfig.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
common/CMakeFiles/exprconfig.dir/build: exe/exprconfig
.PHONY : common/CMakeFiles/exprconfig.dir/build

common/CMakeFiles/exprconfig.dir/requires: common/CMakeFiles/exprconfig.dir/expr/ExprConfig.C.o.requires
.PHONY : common/CMakeFiles/exprconfig.dir/requires

common/CMakeFiles/exprconfig.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/common && $(CMAKE_COMMAND) -P CMakeFiles/exprconfig.dir/cmake_clean.cmake
.PHONY : common/CMakeFiles/exprconfig.dir/clean

common/CMakeFiles/exprconfig.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/common /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/common /export/ahota/visit/visitOSPRay/visit2.8.1/src/common/CMakeFiles/exprconfig.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : common/CMakeFiles/exprconfig.dir/depend

