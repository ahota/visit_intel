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
include operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/depend.make

# Include the progress variables for this target.
include operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/progress.make

# Include the compile flags for this target's objects.
include operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/flags.make

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o: operators/DualMesh/DualMeshScriptingPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/DualMeshScriptingPluginInfo.C

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/DualMeshScriptingPluginInfo.C > CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.i

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/DualMeshScriptingPluginInfo.C -o CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.s

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o.requires:
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o.requires

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o.provides: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o.requires
	$(MAKE) -f operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/build.make operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o.provides.build
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o.provides

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o.provides.build: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o: operators/DualMesh/PyDualMeshAttributes.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/PyDualMeshAttributes.C

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/PyDualMeshAttributes.C > CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.i

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/PyDualMeshAttributes.C -o CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.s

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o.requires:
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o.requires

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o.provides: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o.requires
	$(MAKE) -f operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/build.make operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o.provides.build
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o.provides

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o.provides.build: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o: operators/DualMesh/DualMeshPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/DualMeshPluginInfo.C

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/DualMeshPluginInfo.C > CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.i

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/DualMeshPluginInfo.C -o CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.s

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o.requires:
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o.requires

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o.provides: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o.requires
	$(MAKE) -f operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/build.make operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o.provides.build
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o.provides

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o.provides.build: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o: operators/DualMesh/DualMeshCommonPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/DualMeshCommonPluginInfo.C

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/DualMeshCommonPluginInfo.C > CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.i

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/DualMeshCommonPluginInfo.C -o CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.s

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o.requires:
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o.requires

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o.provides: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o.requires
	$(MAKE) -f operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/build.make operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o.provides.build
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o.provides

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o.provides.build: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o: operators/DualMesh/DualMeshAttributes.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/DualMeshAttributes.C

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/DualMeshAttributes.C > CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.i

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/DualMeshAttributes.C -o CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.s

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o.requires:
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o.requires

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o.provides: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o.requires
	$(MAKE) -f operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/build.make operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o.provides.build
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o.provides

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o.provides.build: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o

# Object files for target SDualMeshOperator
SDualMeshOperator_OBJECTS = \
"CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o" \
"CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o" \
"CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o" \
"CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o" \
"CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o"

# External object files for target SDualMeshOperator
SDualMeshOperator_EXTERNAL_OBJECTS =

plugins/operators/libSDualMeshOperator.so: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o
plugins/operators/libSDualMeshOperator.so: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o
plugins/operators/libSDualMeshOperator.so: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o
plugins/operators/libSDualMeshOperator.so: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o
plugins/operators/libSDualMeshOperator.so: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o
plugins/operators/libSDualMeshOperator.so: lib/libvisitcommon.so
plugins/operators/libSDualMeshOperator.so: lib/libvisitpy.so
plugins/operators/libSDualMeshOperator.so: /export/ahota/visit/visitOSPRay/visit/python/2.7.6/linux-x86_64_icc/lib/libpython2.7.so
plugins/operators/libSDualMeshOperator.so: lib/libviewerrpc.so
plugins/operators/libSDualMeshOperator.so: lib/libavtdbatts.so
plugins/operators/libSDualMeshOperator.so: lib/libvisitcommon.so
plugins/operators/libSDualMeshOperator.so: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/operators/libSDualMeshOperator.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SDualMeshOperator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/build: plugins/operators/libSDualMeshOperator.so
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/build

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/requires: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshScriptingPluginInfo.C.o.requires
operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/requires: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/PyDualMeshAttributes.C.o.requires
operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/requires: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshPluginInfo.C.o.requires
operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/requires: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshCommonPluginInfo.C.o.requires
operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/requires: operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DualMeshAttributes.C.o.requires
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/requires

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh && $(CMAKE_COMMAND) -P CMakeFiles/SDualMeshOperator.dir/cmake_clean.cmake
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/clean

operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : operators/DualMesh/CMakeFiles/SDualMeshOperator.dir/depend

