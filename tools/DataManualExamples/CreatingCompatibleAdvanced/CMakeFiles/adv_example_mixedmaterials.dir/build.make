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
include tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/depend.make

# Include the progress variables for this target.
include tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/progress.make

# Include the compile flags for this target's objects.
include tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/flags.make

tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o: tools/DataManualExamples/CreatingCompatibleAdvanced/mixedmaterials.c
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatibleAdvanced && /opt/intel/bin/icc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o   -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatibleAdvanced/mixedmaterials.c

tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatibleAdvanced && /opt/intel/bin/icc  $(C_DEFINES) $(C_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatibleAdvanced/mixedmaterials.c > CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.i

tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatibleAdvanced && /opt/intel/bin/icc  $(C_DEFINES) $(C_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatibleAdvanced/mixedmaterials.c -o CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.s

tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o.requires:
.PHONY : tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o.requires

tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o.provides: tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o.requires
	$(MAKE) -f tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/build.make tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o.provides.build
.PHONY : tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o.provides

tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o.provides.build: tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o

# Object files for target adv_example_mixedmaterials
adv_example_mixedmaterials_OBJECTS = \
"CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o"

# External object files for target adv_example_mixedmaterials
adv_example_mixedmaterials_EXTERNAL_OBJECTS =

tools/DataManualExamples/CreatingCompatibleAdvanced/mixedmaterials: tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o
tools/DataManualExamples/CreatingCompatibleAdvanced/mixedmaterials: tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable mixedmaterials"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatibleAdvanced && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/adv_example_mixedmaterials.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/build: tools/DataManualExamples/CreatingCompatibleAdvanced/mixedmaterials
.PHONY : tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/build

tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/requires: tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/mixedmaterials.c.o.requires
.PHONY : tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/requires

tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatibleAdvanced && $(CMAKE_COMMAND) -P CMakeFiles/adv_example_mixedmaterials.dir/cmake_clean.cmake
.PHONY : tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/clean

tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatibleAdvanced /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatibleAdvanced /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/DataManualExamples/CreatingCompatibleAdvanced/CMakeFiles/adv_example_mixedmaterials.dir/depend

