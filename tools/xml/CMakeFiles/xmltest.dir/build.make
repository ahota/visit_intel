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
include tools/xml/CMakeFiles/xmltest.dir/depend.make

# Include the progress variables for this target.
include tools/xml/CMakeFiles/xmltest.dir/progress.make

# Include the compile flags for this target's objects.
include tools/xml/CMakeFiles/xmltest.dir/flags.make

tools/xml/CMakeFiles/xmltest.dir/main1.C.o: tools/xml/main1.C
	$(CMAKE_COMMAND) -E cmake_progress_report /export/ahota/visit/visitOSPRay/visit2.8.1/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tools/xml/CMakeFiles/xmltest.dir/main1.C.o"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/xml && /opt/intel/bin/icpc   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/xmltest.dir/main1.C.o -c /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/xml/main1.C

tools/xml/CMakeFiles/xmltest.dir/main1.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xmltest.dir/main1.C.i"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/xml && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -E /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/xml/main1.C > CMakeFiles/xmltest.dir/main1.C.i

tools/xml/CMakeFiles/xmltest.dir/main1.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xmltest.dir/main1.C.s"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/xml && /opt/intel/bin/icpc  $(CXX_DEFINES) $(CXX_FLAGS) -S /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/xml/main1.C -o CMakeFiles/xmltest.dir/main1.C.s

tools/xml/CMakeFiles/xmltest.dir/main1.C.o.requires:
.PHONY : tools/xml/CMakeFiles/xmltest.dir/main1.C.o.requires

tools/xml/CMakeFiles/xmltest.dir/main1.C.o.provides: tools/xml/CMakeFiles/xmltest.dir/main1.C.o.requires
	$(MAKE) -f tools/xml/CMakeFiles/xmltest.dir/build.make tools/xml/CMakeFiles/xmltest.dir/main1.C.o.provides.build
.PHONY : tools/xml/CMakeFiles/xmltest.dir/main1.C.o.provides

tools/xml/CMakeFiles/xmltest.dir/main1.C.o.provides.build: tools/xml/CMakeFiles/xmltest.dir/main1.C.o

# Object files for target xmltest
xmltest_OBJECTS = \
"CMakeFiles/xmltest.dir/main1.C.o"

# External object files for target xmltest
xmltest_EXTERNAL_OBJECTS =

exe/xmltest: tools/xml/CMakeFiles/xmltest.dir/main1.C.o
exe/xmltest: /export/ahota/visit/visitOSPRay/visit/qt/4.8.3/linux-x86_64_icc/lib/libQtXml.so
exe/xmltest: /export/ahota/visit/visitOSPRay/visit/qt/4.8.3/linux-x86_64_icc/lib/libQtCore.so
exe/xmltest: tools/xml/CMakeFiles/xmltest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../exe/xmltest"
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/xml && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/xmltest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/xml/CMakeFiles/xmltest.dir/build: exe/xmltest
.PHONY : tools/xml/CMakeFiles/xmltest.dir/build

tools/xml/CMakeFiles/xmltest.dir/requires: tools/xml/CMakeFiles/xmltest.dir/main1.C.o.requires
.PHONY : tools/xml/CMakeFiles/xmltest.dir/requires

tools/xml/CMakeFiles/xmltest.dir/clean:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/xml && $(CMAKE_COMMAND) -P CMakeFiles/xmltest.dir/cmake_clean.cmake
.PHONY : tools/xml/CMakeFiles/xmltest.dir/clean

tools/xml/CMakeFiles/xmltest.dir/depend:
	cd /export/ahota/visit/visitOSPRay/visit2.8.1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/xml /export/ahota/visit/visitOSPRay/visit2.8.1/src /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/xml /export/ahota/visit/visitOSPRay/visit2.8.1/src/tools/xml/CMakeFiles/xmltest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/xml/CMakeFiles/xmltest.dir/depend

