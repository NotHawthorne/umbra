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
include examples/sslservtest/CMakeFiles/sslservtest.dir/depend.make

# Include the progress variables for this target.
include examples/sslservtest/CMakeFiles/sslservtest.dir/progress.make

# Include the compile flags for this target's objects.
include examples/sslservtest/CMakeFiles/sslservtest.dir/flags.make

examples/sslservtest/sslservtest.moc: examples/sslservtest/sslservtest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating sslservtest.moc"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest && /usr/lib/x86_64-linux-gnu/qt5/bin/moc @/home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest/sslservtest.moc_parameters

examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o: examples/sslservtest/CMakeFiles/sslservtest.dir/flags.make
examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o: examples/sslservtest/sslservtest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/sslservtest.dir/sslservtest.cpp.o -c /home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest/sslservtest.cpp

examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sslservtest.dir/sslservtest.cpp.i"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest/sslservtest.cpp > CMakeFiles/sslservtest.dir/sslservtest.cpp.i

examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sslservtest.dir/sslservtest.cpp.s"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest/sslservtest.cpp -o CMakeFiles/sslservtest.dir/sslservtest.cpp.s

examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o.requires:
.PHONY : examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o.requires

examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o.provides: examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o.requires
	$(MAKE) -f examples/sslservtest/CMakeFiles/sslservtest.dir/build.make examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o.provides.build
.PHONY : examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o.provides

examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o.provides.build: examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o

# Object files for target sslservtest
sslservtest_OBJECTS = \
"CMakeFiles/sslservtest.dir/sslservtest.cpp.o"

# External object files for target sslservtest
sslservtest_EXTERNAL_OBJECTS =

bin/sslservtest: examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o
bin/sslservtest: examples/sslservtest/CMakeFiles/sslservtest.dir/build.make
bin/sslservtest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/sslservtest: lib/libqca.so.2.1.0
bin/sslservtest: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.2.1
bin/sslservtest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/sslservtest: examples/sslservtest/CMakeFiles/sslservtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/sslservtest"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sslservtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/sslservtest/CMakeFiles/sslservtest.dir/build: bin/sslservtest
.PHONY : examples/sslservtest/CMakeFiles/sslservtest.dir/build

examples/sslservtest/CMakeFiles/sslservtest.dir/requires: examples/sslservtest/CMakeFiles/sslservtest.dir/sslservtest.cpp.o.requires
.PHONY : examples/sslservtest/CMakeFiles/sslservtest.dir/requires

examples/sslservtest/CMakeFiles/sslservtest.dir/clean:
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest && $(CMAKE_COMMAND) -P CMakeFiles/sslservtest.dir/cmake_clean.cmake
.PHONY : examples/sslservtest/CMakeFiles/sslservtest.dir/clean

examples/sslservtest/CMakeFiles/sslservtest.dir/depend: examples/sslservtest/sslservtest.moc
	cd /home/nothawthorne/Projects/umbra/src/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest /home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest/CMakeFiles/sslservtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/sslservtest/CMakeFiles/sslservtest.dir/depend
