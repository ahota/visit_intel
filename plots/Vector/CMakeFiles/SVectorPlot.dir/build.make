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
include plots/Vector/CMakeFiles/SVectorPlot.dir/depend.make

# Include the progress variables for this target.
include plots/Vector/CMakeFiles/SVectorPlot.dir/progress.make

# Include the compile flags for this target's objects.
include plots/Vector/CMakeFiles/SVectorPlot.dir/flags.make

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o: plots/Vector/VectorScriptingPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/VectorScriptingPluginInfo.C

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/VectorScriptingPluginInfo.C > CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.i

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/VectorScriptingPluginInfo.C -o CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.s

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o.requires:
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o.requires

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o.provides: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o.requires
	$(MAKE) -f plots/Vector/CMakeFiles/SVectorPlot.dir/build.make plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o.provides.build
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o.provides

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o.provides.build: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o

plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o: plots/Vector/PyVectorAttributes.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/PyVectorAttributes.C

plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/PyVectorAttributes.C > CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.i

plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/PyVectorAttributes.C -o CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.s

plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o.requires:
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o.requires

plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o.provides: plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o.requires
	$(MAKE) -f plots/Vector/CMakeFiles/SVectorPlot.dir/build.make plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o.provides.build
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o.provides

plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o.provides.build: plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o: plots/Vector/VectorPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/VectorPluginInfo.C

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/VectorPluginInfo.C > CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.i

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/VectorPluginInfo.C -o CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.s

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o.requires:
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o.requires

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o.provides: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o.requires
	$(MAKE) -f plots/Vector/CMakeFiles/SVectorPlot.dir/build.make plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o.provides.build
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o.provides

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o.provides.build: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o: plots/Vector/VectorCommonPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/VectorCommonPluginInfo.C

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/VectorCommonPluginInfo.C > CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.i

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/VectorCommonPluginInfo.C -o CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.s

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o.requires:
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o.requires

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o.provides: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o.requires
	$(MAKE) -f plots/Vector/CMakeFiles/SVectorPlot.dir/build.make plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o.provides.build
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o.provides

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o.provides.build: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o: plots/Vector/VectorAttributes.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/VectorAttributes.C

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVectorPlot.dir/VectorAttributes.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/VectorAttributes.C > CMakeFiles/SVectorPlot.dir/VectorAttributes.C.i

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVectorPlot.dir/VectorAttributes.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/VectorAttributes.C -o CMakeFiles/SVectorPlot.dir/VectorAttributes.C.s

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o.requires:
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o.requires

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o.provides: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o.requires
	$(MAKE) -f plots/Vector/CMakeFiles/SVectorPlot.dir/build.make plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o.provides.build
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o.provides

plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o.provides.build: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o

# Object files for target SVectorPlot
SVectorPlot_OBJECTS = \
"CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o" \
"CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o" \
"CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o" \
"CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o" \
"CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o"

# External object files for target SVectorPlot
SVectorPlot_EXTERNAL_OBJECTS =

plugins/plots/libSVectorPlot.so: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o
plugins/plots/libSVectorPlot.so: plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o
plugins/plots/libSVectorPlot.so: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o
plugins/plots/libSVectorPlot.so: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o
plugins/plots/libSVectorPlot.so: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o
plugins/plots/libSVectorPlot.so: lib/libvisitcommon.so
plugins/plots/libSVectorPlot.so: lib/libvisitpy.so
plugins/plots/libSVectorPlot.so: /export/ahota/visit/visitOSPRay/visit/python/2.7.6/linux-x86_64_icc/lib/libpython2.7.so
plugins/plots/libSVectorPlot.so: lib/libviewerrpc.so
plugins/plots/libSVectorPlot.so: lib/libavtdbatts.so
plugins/plots/libSVectorPlot.so: lib/libvisitcommon.so
plugins/plots/libSVectorPlot.so: plots/Vector/CMakeFiles/SVectorPlot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/plots/libSVectorPlot.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SVectorPlot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plots/Vector/CMakeFiles/SVectorPlot.dir/build: plugins/plots/libSVectorPlot.so
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/build

plots/Vector/CMakeFiles/SVectorPlot.dir/requires: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorScriptingPluginInfo.C.o.requires
plots/Vector/CMakeFiles/SVectorPlot.dir/requires: plots/Vector/CMakeFiles/SVectorPlot.dir/PyVectorAttributes.C.o.requires
plots/Vector/CMakeFiles/SVectorPlot.dir/requires: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorPluginInfo.C.o.requires
plots/Vector/CMakeFiles/SVectorPlot.dir/requires: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorCommonPluginInfo.C.o.requires
plots/Vector/CMakeFiles/SVectorPlot.dir/requires: plots/Vector/CMakeFiles/SVectorPlot.dir/VectorAttributes.C.o.requires
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/requires

plots/Vector/CMakeFiles/SVectorPlot.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector && $(CMAKE_COMMAND) -P CMakeFiles/SVectorPlot.dir/cmake_clean.cmake
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/clean

plots/Vector/CMakeFiles/SVectorPlot.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/CMakeFiles/SVectorPlot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plots/Vector/CMakeFiles/SVectorPlot.dir/depend

