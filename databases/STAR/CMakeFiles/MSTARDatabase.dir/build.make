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
include databases/STAR/CMakeFiles/MSTARDatabase.dir/depend.make

# Include the progress variables for this target.
include databases/STAR/CMakeFiles/MSTARDatabase.dir/progress.make

# Include the compile flags for this target's objects.
include databases/STAR/CMakeFiles/MSTARDatabase.dir/flags.make

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o: databases/STAR/STARMDServerPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/STARMDServerPluginInfo.C

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/STARMDServerPluginInfo.C > CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.i

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/STARMDServerPluginInfo.C -o CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.s

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o.requires:
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o.requires

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o.provides: databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o.requires
	$(MAKE) -f databases/STAR/CMakeFiles/MSTARDatabase.dir/build.make databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o.provides.build
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o.provides

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o.provides.build: databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o: databases/STAR/STARPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/STARPluginInfo.C

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/STARPluginInfo.C > CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.i

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/STARPluginInfo.C -o CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.s

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o.requires:
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o.requires

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o.provides: databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o.requires
	$(MAKE) -f databases/STAR/CMakeFiles/MSTARDatabase.dir/build.make databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o.provides.build
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o.provides

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o.provides.build: databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o: databases/STAR/STARCommonPluginInfo.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/STARCommonPluginInfo.C

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/STARCommonPluginInfo.C > CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.i

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/STARCommonPluginInfo.C -o CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.s

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o.requires:
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o.requires

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o.provides: databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o.requires
	$(MAKE) -f databases/STAR/CMakeFiles/MSTARDatabase.dir/build.make databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o.provides.build
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o.provides

databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o.provides.build: databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o

databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o: databases/STAR/avtSTARFileFormat.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/avtSTARFileFormat.C

databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/avtSTARFileFormat.C > CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.i

databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/avtSTARFileFormat.C -o CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.s

databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o.requires:
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o.requires

databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o.provides: databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o.requires
	$(MAKE) -f databases/STAR/CMakeFiles/MSTARDatabase.dir/build.make databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o.provides.build
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o.provides

databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o.provides.build: databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o

databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o: databases/STAR/ConfigFileReader.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/ConfigFileReader.C

databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/ConfigFileReader.C > CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.i

databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/ConfigFileReader.C -o CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.s

databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o.requires:
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o.requires

databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o.provides: databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o.requires
	$(MAKE) -f databases/STAR/CMakeFiles/MSTARDatabase.dir/build.make databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o.provides.build
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o.provides

databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o.provides.build: databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o: databases/STAR/MultiresFileReader.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/MultiresFileReader.C

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/MultiresFileReader.C > CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.i

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/MultiresFileReader.C -o CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.s

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o.requires:
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o.requires

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o.provides: databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o.requires
	$(MAKE) -f databases/STAR/CMakeFiles/MSTARDatabase.dir/build.make databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o.provides.build
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o.provides

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o.provides.build: databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o: databases/STAR/MultiresGrid.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/MultiresGrid.C

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/MultiresGrid.C > CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.i

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/MultiresGrid.C -o CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.s

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o.requires:
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o.requires

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o.provides: databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o.requires
	$(MAKE) -f databases/STAR/CMakeFiles/MSTARDatabase.dir/build.make databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o.provides.build
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o.provides

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o.provides.build: databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o: databases/STAR/MultiresMultifileReader.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/MultiresMultifileReader.C

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/MultiresMultifileReader.C > CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.i

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/MultiresMultifileReader.C -o CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.s

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o.requires:
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o.requires

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o.provides: databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o.requires
	$(MAKE) -f databases/STAR/CMakeFiles/MSTARDatabase.dir/build.make databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o.provides.build
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o.provides

databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o.provides.build: databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o

databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o: databases/STAR/ResolutionMap.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/ResolutionMap.C

databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/ResolutionMap.C > CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.i

databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/ResolutionMap.C -o CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.s

databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o.requires:
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o.requires

databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o.provides: databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o.requires
	$(MAKE) -f databases/STAR/CMakeFiles/MSTARDatabase.dir/build.make databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o.provides.build
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o.provides

databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o.provides.build: databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o

# Object files for target MSTARDatabase
MSTARDatabase_OBJECTS = \
"CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o" \
"CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o" \
"CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o" \
"CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o" \
"CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o" \
"CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o" \
"CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o" \
"CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o" \
"CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o"

# External object files for target MSTARDatabase
MSTARDatabase_EXTERNAL_OBJECTS =

plugins/databases/libMSTARDatabase.so: databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o
plugins/databases/libMSTARDatabase.so: databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o
plugins/databases/libMSTARDatabase.so: databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o
plugins/databases/libMSTARDatabase.so: databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o
plugins/databases/libMSTARDatabase.so: databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o
plugins/databases/libMSTARDatabase.so: databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o
plugins/databases/libMSTARDatabase.so: databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o
plugins/databases/libMSTARDatabase.so: databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o
plugins/databases/libMSTARDatabase.so: databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o
plugins/databases/libMSTARDatabase.so: lib/libvisitcommon.so
plugins/databases/libMSTARDatabase.so: lib/libavtdbatts.so
plugins/databases/libMSTARDatabase.so: lib/libavtdatabase_ser.so
plugins/databases/libMSTARDatabase.so: lib/libavtmir_ser.so
plugins/databases/libMSTARDatabase.so: lib/libvisit_verdict.so
plugins/databases/libMSTARDatabase.so: lib/libavtpipeline_ser.so
plugins/databases/libMSTARDatabase.so: lib/libavtdbatts.so
plugins/databases/libMSTARDatabase.so: lib/libavtmath.so
plugins/databases/libMSTARDatabase.so: lib/libvisit_vtk.so
plugins/databases/libMSTARDatabase.so: lib/liblightweight_visit_vtk.so
plugins/databases/libMSTARDatabase.so: lib/libvisitcommon.so
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkIOLegacy-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkRenderingFreeTypeOpenGL-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkRenderingOpenGL-6.1.so.1
plugins/databases/libMSTARDatabase.so: /usr/lib64/libGLU.so
plugins/databases/libMSTARDatabase.so: /usr/lib64/libSM.so
plugins/databases/libMSTARDatabase.so: /usr/lib64/libICE.so
plugins/databases/libMSTARDatabase.so: /usr/lib64/libX11.so
plugins/databases/libMSTARDatabase.so: /usr/lib64/libXext.so
plugins/databases/libMSTARDatabase.so: /usr/lib64/libSM.so
plugins/databases/libMSTARDatabase.so: /usr/lib64/libICE.so
plugins/databases/libMSTARDatabase.so: /usr/lib64/libX11.so
plugins/databases/libMSTARDatabase.so: /usr/lib64/libXext.so
plugins/databases/libMSTARDatabase.so: /usr/lib64/libXt.so
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkRenderingFreeType-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkftgl-6.1.so.1
plugins/databases/libMSTARDatabase.so: /usr/lib64/libGL.so
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkfreetype-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkInteractionStyle-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkRenderingCore-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersGeometry-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersExtraction-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersStatistics-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkImagingFourier-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkalglib-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersFlowPaths-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersSources-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersGeneral-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkFiltersCore-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonComputationalGeometry-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkImagingHybrid-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkIOImage-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkIOCore-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkImagingCore-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonExecutionModel-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonDataModel-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonMisc-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonSystem-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonTransforms-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonMath-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkCommonCore-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtktiff-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkzlib-6.1.so.1
plugins/databases/libMSTARDatabase.so: /export/ahota/visit/visitOSPRay/VTK-6.1.0-build/lib/libvtkjpeg-6.1.so.1
plugins/databases/libMSTARDatabase.so: lib/libtess2.so
plugins/databases/libMSTARDatabase.so: databases/STAR/CMakeFiles/MSTARDatabase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../plugins/databases/libMSTARDatabase.so"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MSTARDatabase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
databases/STAR/CMakeFiles/MSTARDatabase.dir/build: plugins/databases/libMSTARDatabase.so
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/build

databases/STAR/CMakeFiles/MSTARDatabase.dir/requires: databases/STAR/CMakeFiles/MSTARDatabase.dir/STARMDServerPluginInfo.C.o.requires
databases/STAR/CMakeFiles/MSTARDatabase.dir/requires: databases/STAR/CMakeFiles/MSTARDatabase.dir/STARPluginInfo.C.o.requires
databases/STAR/CMakeFiles/MSTARDatabase.dir/requires: databases/STAR/CMakeFiles/MSTARDatabase.dir/STARCommonPluginInfo.C.o.requires
databases/STAR/CMakeFiles/MSTARDatabase.dir/requires: databases/STAR/CMakeFiles/MSTARDatabase.dir/avtSTARFileFormat.C.o.requires
databases/STAR/CMakeFiles/MSTARDatabase.dir/requires: databases/STAR/CMakeFiles/MSTARDatabase.dir/ConfigFileReader.C.o.requires
databases/STAR/CMakeFiles/MSTARDatabase.dir/requires: databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresFileReader.C.o.requires
databases/STAR/CMakeFiles/MSTARDatabase.dir/requires: databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresGrid.C.o.requires
databases/STAR/CMakeFiles/MSTARDatabase.dir/requires: databases/STAR/CMakeFiles/MSTARDatabase.dir/MultiresMultifileReader.C.o.requires
databases/STAR/CMakeFiles/MSTARDatabase.dir/requires: databases/STAR/CMakeFiles/MSTARDatabase.dir/ResolutionMap.C.o.requires
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/requires

databases/STAR/CMakeFiles/MSTARDatabase.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR && $(CMAKE_COMMAND) -P CMakeFiles/MSTARDatabase.dir/cmake_clean.cmake
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/clean

databases/STAR/CMakeFiles/MSTARDatabase.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR /export/ahota/visit/visitOSPRay/visit2.8.1/src/databases/STAR/CMakeFiles/MSTARDatabase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : databases/STAR/CMakeFiles/MSTARDatabase.dir/depend
