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
include databases/GTC/CMakeFiles/MGTCDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/GTC/CMakeFiles/MGTCDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/GTC/CMakeFiles/MGTCDatabase.dir/flags.make

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o: databases/GTC/GTCMDServerPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/GTCMDServerPluginInfo.C

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/GTCMDServerPluginInfo.C > CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.i

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/GTCMDServerPluginInfo.C -o CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.s

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o.requires:
.PHONY : databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o.requires

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o.provides: databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o.requires
	$(MAKE) -f databases/GTC/CMakeFiles/MGTCDatabase.dir/build.make databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o.provides.build
.PHONY : databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o.provides

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o.provides.build: databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o: databases/GTC/GTCPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/GTCPluginInfo.C

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/GTCPluginInfo.C > CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.i

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/GTCPluginInfo.C -o CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.s

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o.requires:
.PHONY : databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o.requires

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o.provides: databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o.requires
	$(MAKE) -f databases/GTC/CMakeFiles/MGTCDatabase.dir/build.make databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o.provides.build
.PHONY : databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o.provides

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o.provides.build: databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o: databases/GTC/GTCCommonPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/GTCCommonPluginInfo.C

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/GTCCommonPluginInfo.C > CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.i

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/GTCCommonPluginInfo.C -o CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.s

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o.requires:
.PHONY : databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o.requires

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o.provides: databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o.requires
	$(MAKE) -f databases/GTC/CMakeFiles/MGTCDatabase.dir/build.make databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o.provides.build
.PHONY : databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o.provides

databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o.provides.build: databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o

databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o: databases/GTC/avtGTCFileFormat.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/avtGTCFileFormat.C

databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/avtGTCFileFormat.C > CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.i

databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/avtGTCFileFormat.C -o CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.s

databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o.requires:
.PHONY : databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o.requires

databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o.provides: databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o.requires
	$(MAKE) -f databases/GTC/CMakeFiles/MGTCDatabase.dir/build.make databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o.provides.build
.PHONY : databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o.provides

databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o.provides.build: databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o

# Object files for target MGTCDatabase
MGTCDatabase_OBJECTS = \
"CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o" \
"CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o" \
"CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o" \
"CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o"

# External object files for target MGTCDatabase
MGTCDatabase_EXTERNAL_OBJECTS =

plugins/databases/libMGTCDatabase.so: databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o
plugins/databases/libMGTCDatabase.so: databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o
plugins/databases/libMGTCDatabase.so: databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o
plugins/databases/libMGTCDatabase.so: databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o
plugins/databases/libMGTCDatabase.so: lib/libvisitcommon.so
plugins/databases/libMGTCDatabase.so: lib/libavtdbatts.so
plugins/databases/libMGTCDatabase.so: lib/libavtdatabase_ser.so
plugins/databases/libMGTCDatabase.so: lib/libavtmir_ser.so
plugins/databases/libMGTCDatabase.so: lib/libvisit_verdict.so
plugins/databases/libMGTCDatabase.so: lib/libavtpipeline_ser.so
plugins/databases/libMGTCDatabase.so: lib/libavtdbatts.so
plugins/databases/libMGTCDatabase.so: lib/libavtmath.so
plugins/databases/libMGTCDatabase.so: lib/libvisit_vtk.so
plugins/databases/libMGTCDatabase.so: lib/liblightweight_visit_vtk.so
plugins/databases/libMGTCDatabase.so: lib/libvisitcommon.so
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkIOLegacy-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkRenderingFreeTypeOpenGL-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkRenderingOpenGL-6.1.so.1
plugins/databases/libMGTCDatabase.so: /usr/lib64/libGLU.so
plugins/databases/libMGTCDatabase.so: /usr/lib64/libSM.so
plugins/databases/libMGTCDatabase.so: /usr/lib64/libICE.so
plugins/databases/libMGTCDatabase.so: /usr/lib64/libX11.so
plugins/databases/libMGTCDatabase.so: /usr/lib64/libXext.so
plugins/databases/libMGTCDatabase.so: /usr/lib64/libSM.so
plugins/databases/libMGTCDatabase.so: /usr/lib64/libICE.so
plugins/databases/libMGTCDatabase.so: /usr/lib64/libX11.so
plugins/databases/libMGTCDatabase.so: /usr/lib64/libXext.so
plugins/databases/libMGTCDatabase.so: /usr/lib64/libXt.so
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkRenderingFreeType-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkftgl-6.1.so.1
plugins/databases/libMGTCDatabase.so: /usr/lib64/libGL.so
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkfreetype-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkInteractionStyle-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkRenderingCore-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersGeometry-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersExtraction-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersStatistics-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkImagingFourier-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkalglib-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersFlowPaths-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersSources-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersGeneral-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersCore-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonComputationalGeometry-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkImagingHybrid-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkIOImage-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkIOCore-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkImagingCore-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonExecutionModel-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonDataModel-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonMisc-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonSystem-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonTransforms-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonMath-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonCore-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtktiff-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkzlib-6.1.so.1
plugins/databases/libMGTCDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkjpeg-6.1.so.1
plugins/databases/libMGTCDatabase.so: lib/libtess2.so
plugins/databases/libMGTCDatabase.so: databases/GTC/CMakeFiles/MGTCDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libMGTCDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MGTCDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/GTC/CMakeFiles/MGTCDatabase.dir/build: plugins/databases/libMGTCDatabase.so
.PHONY : databases/GTC/CMakeFiles/MGTCDatabase.dir/build

databases/GTC/CMakeFiles/MGTCDatabase.dir/requires: databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCMDServerPluginInfo.C.o.requires
databases/GTC/CMakeFiles/MGTCDatabase.dir/requires: databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCPluginInfo.C.o.requires
databases/GTC/CMakeFiles/MGTCDatabase.dir/requires: databases/GTC/CMakeFiles/MGTCDatabase.dir/GTCCommonPluginInfo.C.o.requires
databases/GTC/CMakeFiles/MGTCDatabase.dir/requires: databases/GTC/CMakeFiles/MGTCDatabase.dir/avtGTCFileFormat.C.o.requires
.PHONY : databases/GTC/CMakeFiles/MGTCDatabase.dir/requires

databases/GTC/CMakeFiles/MGTCDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC && $(CMAKE_COMMAND) -P CMakeFiles/MGTCDatabase.dir/cmake_clean.cmake
.PHONY : databases/GTC/CMakeFiles/MGTCDatabase.dir/clean

databases/GTC/CMakeFiles/MGTCDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/GTC/CMakeFiles/MGTCDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/GTC/CMakeFiles/MGTCDatabase.dir/depend

