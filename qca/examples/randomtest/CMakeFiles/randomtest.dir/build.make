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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nothawthorne/Projects/umbra/src/qca

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nothawthorne/Projects/umbra/src/qca

# Include any dependencies generated for this target.
include examples/randomtest/CMakeFiles/randomtest.dir/depend.make

# Include the progress variables for this target.
include examples/randomtest/CMakeFiles/randomtest.dir/progress.make

# Include the compile flags for this target's objects.
include examples/randomtest/CMakeFiles/randomtest.dir/flags.make

examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o: examples/randomtest/CMakeFiles/randomtest.dir/flags.make
examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o: examples/randomtest/randomtest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/randomtest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/randomtest.dir/randomtest.cpp.o -c /home/nothawthorne/Projects/umbra/src/qca/examples/randomtest/randomtest.cpp

examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/randomtest.dir/randomtest.cpp.i"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/randomtest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nothawthorne/Projects/umbra/src/qca/examples/randomtest/randomtest.cpp > CMakeFiles/randomtest.dir/randomtest.cpp.i

examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/randomtest.dir/randomtest.cpp.s"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/randomtest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nothawthorne/Projects/umbra/src/qca/examples/randomtest/randomtest.cpp -o CMakeFiles/randomtest.dir/randomtest.cpp.s

examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o.requires:
.PHONY : examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o.requires

examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o.provides: examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o.requires
	$(MAKE) -f examples/randomtest/CMakeFiles/randomtest.dir/build.make examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o.provides.build
.PHONY : examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o.provides

examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o.provides.build: examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o

# Object files for target randomtest
randomtest_OBJECTS = \
"CMakeFiles/randomtest.dir/randomtest.cpp.o"

# External object files for target randomtest
randomtest_EXTERNAL_OBJECTS =

bin/randomtest: examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o
bin/randomtest: examples/randomtest/CMakeFiles/randomtest.dir/build.make
bin/randomtest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/randomtest: lib/libqca.so.2.1.0
bin/randomtest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/randomtest: examples/randomtest/CMakeFiles/randomtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/randomtest"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/randomtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/randomtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/randomtest/CMakeFiles/randomtest.dir/build: bin/randomtest
.PHONY : examples/randomtest/CMakeFiles/randomtest.dir/build

examples/randomtest/CMakeFiles/randomtest.dir/requires: examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o.requires
.PHONY : examples/randomtest/CMakeFiles/randomtest.dir/requires

examples/randomtest/CMakeFiles/randomtest.dir/clean:
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/randomtest && $(CMAKE_COMMAND) -P CMakeFiles/randomtest.dir/cmake_clean.cmake
.PHONY : examples/randomtest/CMakeFiles/randomtest.dir/clean

examples/randomtest/CMakeFiles/randomtest.dir/depend:
	cd /home/nothawthorne/Projects/umbra/src/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/examples/randomtest /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/examples/randomtest /home/nothawthorne/Projects/umbra/src/qca/examples/randomtest/CMakeFiles/randomtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/randomtest/CMakeFiles/randomtest.dir/depend
