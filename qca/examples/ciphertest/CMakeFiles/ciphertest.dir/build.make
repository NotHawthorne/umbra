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
include examples/ciphertest/CMakeFiles/ciphertest.dir/depend.make

# Include the progress variables for this target.
include examples/ciphertest/CMakeFiles/ciphertest.dir/progress.make

# Include the compile flags for this target's objects.
include examples/ciphertest/CMakeFiles/ciphertest.dir/flags.make

examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o: examples/ciphertest/CMakeFiles/ciphertest.dir/flags.make
examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o: examples/ciphertest/ciphertest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/ciphertest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ciphertest.dir/ciphertest.cpp.o -c /home/nothawthorne/Projects/umbra/src/qca/examples/ciphertest/ciphertest.cpp

examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ciphertest.dir/ciphertest.cpp.i"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/ciphertest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nothawthorne/Projects/umbra/src/qca/examples/ciphertest/ciphertest.cpp > CMakeFiles/ciphertest.dir/ciphertest.cpp.i

examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ciphertest.dir/ciphertest.cpp.s"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/ciphertest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nothawthorne/Projects/umbra/src/qca/examples/ciphertest/ciphertest.cpp -o CMakeFiles/ciphertest.dir/ciphertest.cpp.s

examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o.requires:
.PHONY : examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o.requires

examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o.provides: examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o.requires
	$(MAKE) -f examples/ciphertest/CMakeFiles/ciphertest.dir/build.make examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o.provides.build
.PHONY : examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o.provides

examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o.provides.build: examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o

# Object files for target ciphertest
ciphertest_OBJECTS = \
"CMakeFiles/ciphertest.dir/ciphertest.cpp.o"

# External object files for target ciphertest
ciphertest_EXTERNAL_OBJECTS =

bin/ciphertest: examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o
bin/ciphertest: examples/ciphertest/CMakeFiles/ciphertest.dir/build.make
bin/ciphertest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/ciphertest: lib/libqca.so.2.1.0
bin/ciphertest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/ciphertest: examples/ciphertest/CMakeFiles/ciphertest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/ciphertest"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/ciphertest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ciphertest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/ciphertest/CMakeFiles/ciphertest.dir/build: bin/ciphertest
.PHONY : examples/ciphertest/CMakeFiles/ciphertest.dir/build

examples/ciphertest/CMakeFiles/ciphertest.dir/requires: examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o.requires
.PHONY : examples/ciphertest/CMakeFiles/ciphertest.dir/requires

examples/ciphertest/CMakeFiles/ciphertest.dir/clean:
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/ciphertest && $(CMAKE_COMMAND) -P CMakeFiles/ciphertest.dir/cmake_clean.cmake
.PHONY : examples/ciphertest/CMakeFiles/ciphertest.dir/clean

examples/ciphertest/CMakeFiles/ciphertest.dir/depend:
	cd /home/nothawthorne/Projects/umbra/src/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/examples/ciphertest /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/examples/ciphertest /home/nothawthorne/Projects/umbra/src/qca/examples/ciphertest/CMakeFiles/ciphertest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/ciphertest/CMakeFiles/ciphertest.dir/depend

