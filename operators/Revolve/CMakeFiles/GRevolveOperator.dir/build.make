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
include operators/Revolve/CMakeFiles/GRevolveOperator.dir/depend.make

# Include the progress variables for this target.
include operators/Revolve/CMakeFiles/GRevolveOperator.dir/progress.make

# Include the compile flags for this target's objects.
include operators/Revolve/CMakeFiles/GRevolveOperator.dir/flags.make

operators/Revolve/moc_QvisRevolveWindow.cxx: /export/ahota/visit/visitOSPRay/visit/qt/4.8.3/linux-x86_64_icc/bin/moc
operators/Revolve/moc_QvisRevolveWindow.cxx: operators/Revolve/QvisRevolveWindow.h
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Qt Wrapped File"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /export/ahota/visit/visitOSPRay/visit/qt/4.8.3/linux-x86_64_icc/bin/moc -o /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/moc_QvisRevolveWindow.cxx /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/QvisRevolveWindow.h

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o: operators/Revolve/RevolveGUIPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/RevolveGUIPluginInfo.C

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/RevolveGUIPluginInfo.C > CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.i

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/RevolveGUIPluginInfo.C -o CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.s

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o.requires:
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o.requires

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o.provides: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o.requires
	$(MAKE) -f operators/Revolve/CMakeFiles/GRevolveOperator.dir/build.make operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o.provides.build
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o.provides

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o.provides.build: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o

operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o: operators/Revolve/QvisRevolveWindow.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/QvisRevolveWindow.C

operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/QvisRevolveWindow.C > CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.i

operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/QvisRevolveWindow.C -o CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.s

operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o.requires:
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o.requires

operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o.provides: operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o.requires
	$(MAKE) -f operators/Revolve/CMakeFiles/GRevolveOperator.dir/build.make operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o.provides.build
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o.provides

operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o.provides.build: operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o: operators/Revolve/RevolvePluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/RevolvePluginInfo.C

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/RevolvePluginInfo.C > CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.i

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/RevolvePluginInfo.C -o CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.s

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o.requires:
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o.requires

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o.provides: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o.requires
	$(MAKE) -f operators/Revolve/CMakeFiles/GRevolveOperator.dir/build.make operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o.provides.build
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o.provides

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o.provides.build: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o: operators/Revolve/RevolveCommonPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/RevolveCommonPluginInfo.C

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/RevolveCommonPluginInfo.C > CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.i

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/RevolveCommonPluginInfo.C -o CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.s

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o.requires:
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o.requires

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o.provides: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o.requires
	$(MAKE) -f operators/Revolve/CMakeFiles/GRevolveOperator.dir/build.make operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o.provides.build
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o.provides

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o.provides.build: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o: operators/Revolve/RevolveAttributes.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/RevolveAttributes.C

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/RevolveAttributes.C > CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.i

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/RevolveAttributes.C -o CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.s

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o.requires:
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o.requires

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o.provides: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o.requires
	$(MAKE) -f operators/Revolve/CMakeFiles/GRevolveOperator.dir/build.make operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o.provides.build
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o.provides

operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o.provides.build: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o

operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o: operators/Revolve/moc_QvisRevolveWindow.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/moc_QvisRevolveWindow.cxx

operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/moc_QvisRevolveWindow.cxx > CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.i

operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/moc_QvisRevolveWindow.cxx -o CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.s

operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o.requires:
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o.requires

operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o.provides: operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o.requires
	$(MAKE) -f operators/Revolve/CMakeFiles/GRevolveOperator.dir/build.make operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o.provides.build
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o.provides

operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o.provides.build: operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o

# Object files for target GRevolveOperator
GRevolveOperator_OBJECTS = \
"CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o" \
"CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o" \
"CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o" \
"CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o" \
"CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o" \
"CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o"

# External object files for target GRevolveOperator
GRevolveOperator_EXTERNAL_OBJECTS =

plugins/operators/libGRevolveOperator.so: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o
plugins/operators/libGRevolveOperator.so: operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o
plugins/operators/libGRevolveOperator.so: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o
plugins/operators/libGRevolveOperator.so: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o
plugins/operators/libGRevolveOperator.so: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o
plugins/operators/libGRevolveOperator.so: operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o
plugins/operators/libGRevolveOperator.so: lib/libvisitcommon.so
plugins/operators/libGRevolveOperator.so: lib/libgui.so
plugins/operators/libGRevolveOperator.so: lib/libviewerproxy.so
plugins/operators/libGRevolveOperator.so: lib/libviewerrpc.so
plugins/operators/libGRevolveOperator.so: lib/libmdserverproxy.so
plugins/operators/libGRevolveOperator.so: lib/libmdserverrpc.so
plugins/operators/libGRevolveOperator.so: lib/libwinutil.so
plugins/operators/libGRevolveOperator.so: lib/libavtdbatts.so
plugins/operators/libGRevolveOperator.so: lib/libvisitcommon.so
plugins/operators/libGRevolveOperator.so: /export/ahota/visit/visitOSPRay/visit/qt/4.8.3/linux-x86_64_icc/lib/libQtUiTools.a
plugins/operators/libGRevolveOperator.so: /export/ahota/visit/visitOSPRay/visit/qt/4.8.3/linux-x86_64_icc/lib/libQtOpenGL.so
plugins/operators/libGRevolveOperator.so: /export/ahota/visit/visitOSPRay/visit/qt/4.8.3/linux-x86_64_icc/lib/libQtGui.so
plugins/operators/libGRevolveOperator.so: /export/ahota/visit/visitOSPRay/visit/qt/4.8.3/linux-x86_64_icc/lib/libQtNetwork.so
plugins/operators/libGRevolveOperator.so: /export/ahota/visit/visitOSPRay/visit/qt/4.8.3/linux-x86_64_icc/lib/libQtXml.so
plugins/operators/libGRevolveOperator.so: /export/ahota/visit/visitOSPRay/visit/qt/4.8.3/linux-x86_64_icc/lib/libQtCore.so
plugins/operators/libGRevolveOperator.so: operators/Revolve/CMakeFiles/GRevolveOperator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/operators/libGRevolveOperator.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GRevolveOperator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
operators/Revolve/CMakeFiles/GRevolveOperator.dir/build: plugins/operators/libGRevolveOperator.so
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/build

operators/Revolve/CMakeFiles/GRevolveOperator.dir/requires: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveGUIPluginInfo.C.o.requires
operators/Revolve/CMakeFiles/GRevolveOperator.dir/requires: operators/Revolve/CMakeFiles/GRevolveOperator.dir/QvisRevolveWindow.C.o.requires
operators/Revolve/CMakeFiles/GRevolveOperator.dir/requires: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolvePluginInfo.C.o.requires
operators/Revolve/CMakeFiles/GRevolveOperator.dir/requires: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveCommonPluginInfo.C.o.requires
operators/Revolve/CMakeFiles/GRevolveOperator.dir/requires: operators/Revolve/CMakeFiles/GRevolveOperator.dir/RevolveAttributes.C.o.requires
operators/Revolve/CMakeFiles/GRevolveOperator.dir/requires: operators/Revolve/CMakeFiles/GRevolveOperator.dir/moc_QvisRevolveWindow.cxx.o.requires
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/requires

operators/Revolve/CMakeFiles/GRevolveOperator.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve && $(CMAKE_COMMAND) -P CMakeFiles/GRevolveOperator.dir/cmake_clean.cmake
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/clean

operators/Revolve/CMakeFiles/GRevolveOperator.dir/depend: operators/Revolve/moc_QvisRevolveWindow.cxx
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve /export/ahota/visit/visitOSPRay/visit2.8.1/src/operators/Revolve/CMakeFiles/GRevolveOperator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : operators/Revolve/CMakeFiles/GRevolveOperator.dir/depend

