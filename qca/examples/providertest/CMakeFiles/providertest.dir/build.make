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
include examples/providertest/CMakeFiles/providertest.dir/depend.make

# Include the progress variables for this target.
include examples/providertest/CMakeFiles/providertest.dir/progress.make

# Include the compile flags for this target's objects.
include examples/providertest/CMakeFiles/providertest.dir/flags.make

examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o: examples/providertest/CMakeFiles/providertest.dir/flags.make
examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o: examples/providertest/providertest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/providertest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/providertest.dir/providertest.cpp.o -c /home/nothawthorne/Projects/umbra/src/qca/examples/providertest/providertest.cpp

examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/providertest.dir/providertest.cpp.i"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/providertest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nothawthorne/Projects/umbra/src/qca/examples/providertest/providertest.cpp > CMakeFiles/providertest.dir/providertest.cpp.i

examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/providertest.dir/providertest.cpp.s"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/providertest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nothawthorne/Projects/umbra/src/qca/examples/providertest/providertest.cpp -o CMakeFiles/providertest.dir/providertest.cpp.s

examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o.requires:
.PHONY : examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o.requires

examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o.provides: examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o.requires
	$(MAKE) -f examples/providertest/CMakeFiles/providertest.dir/build.make examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o.provides.build
.PHONY : examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o.provides

examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o.provides.build: examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o

# Object files for target providertest
providertest_OBJECTS = \
"CMakeFiles/providertest.dir/providertest.cpp.o"

# External object files for target providertest
providertest_EXTERNAL_OBJECTS =

bin/providertest: examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o
bin/providertest: examples/providertest/CMakeFiles/providertest.dir/build.make
bin/providertest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/providertest: lib/libqca.so.2.1.0
bin/providertest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/providertest: examples/providertest/CMakeFiles/providertest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/providertest"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/providertest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/providertest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/providertest/CMakeFiles/providertest.dir/build: bin/providertest
.PHONY : examples/providertest/CMakeFiles/providertest.dir/build

examples/providertest/CMakeFiles/providertest.dir/requires: examples/providertest/CMakeFiles/providertest.dir/providertest.cpp.o.requires
.PHONY : examples/providertest/CMakeFiles/providertest.dir/requires

examples/providertest/CMakeFiles/providertest.dir/clean:
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/providertest && $(CMAKE_COMMAND) -P CMakeFiles/providertest.dir/cmake_clean.cmake
.PHONY : examples/providertest/CMakeFiles/providertest.dir/clean

examples/providertest/CMakeFiles/providertest.dir/depend:
	cd /home/nothawthorne/Projects/umbra/src/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/examples/providertest /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/examples/providertest /home/nothawthorne/Projects/umbra/src/qca/examples/providertest/CMakeFiles/providertest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/providertest/CMakeFiles/providertest.dir/depend

