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
include tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/depend.make

# Include the progress variables for this target.
include tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/progress.make

# Include the compile flags for this target's objects.
include tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/flags.make

tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.o: tools/DataManualExamples/Simulations/sim1.c
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/Simulations && /opt/intel/bin/icc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/sim_sim1.dir/sim1.c.o   -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/Simulations/sim1.c

tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sim_sim1.dir/sim1.c.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/Simulations && /opt/intel/bin/icc  $(C_DEFINES) $(C_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/Simulations/sim1.c > CMakeFiles/sim_sim1.dir/sim1.c.i

tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sim_sim1.dir/sim1.c.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/Simulations && /opt/intel/bin/icc  $(C_DEFINES) $(C_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/Simulations/sim1.c -o CMakeFiles/sim_sim1.dir/sim1.c.s

tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.o.requires:
.PHONY : tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.o.requires

tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.o.provides: tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.o.requires
	$(MAKE) -f tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/build.make tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.o.provides.build
.PHONY : tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.o.provides

tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.o.provides.build: tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.o

# Object files for target sim_sim1
sim_sim1_OBJECTS = \
"CMakeFiles/sim_sim1.dir/sim1.c.o"

# External object files for target sim_sim1
sim_sim1_EXTERNAL_OBJECTS =

tools/DataManualExamples/Simulations/sim1: tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.o
tools/DataManualExamples/Simulations/sim1: lib/libsimV2.a
tools/DataManualExamples/Simulations/sim1: tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable sim1"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/Simulations && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sim_sim1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/build: tools/DataManualExamples/Simulations/sim1
.PHONY : tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/build

tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/requires: tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/sim1.c.o.requires
.PHONY : tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/requires

tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/Simulations && $(CMAKE_COMMAND) -P CMakeFiles/sim_sim1.dir/cmake_clean.cmake
.PHONY : tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/clean

tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/Simulations /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/Simulations /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/DataManualExamples/Simulations/CMakeFiles/sim_sim1.dir/depend

