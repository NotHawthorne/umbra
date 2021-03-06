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
include examples/aes-cmac/CMakeFiles/aes-cmac.dir/depend.make

# Include the progress variables for this target.
include examples/aes-cmac/CMakeFiles/aes-cmac.dir/progress.make

# Include the compile flags for this target's objects.
include examples/aes-cmac/CMakeFiles/aes-cmac.dir/flags.make

examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o: examples/aes-cmac/CMakeFiles/aes-cmac.dir/flags.make
examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o: examples/aes-cmac/aes-cmac.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/aes-cmac && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o -c /home/nothawthorne/Projects/umbra/src/qca/examples/aes-cmac/aes-cmac.cpp

examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aes-cmac.dir/aes-cmac.cpp.i"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/aes-cmac && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nothawthorne/Projects/umbra/src/qca/examples/aes-cmac/aes-cmac.cpp > CMakeFiles/aes-cmac.dir/aes-cmac.cpp.i

examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aes-cmac.dir/aes-cmac.cpp.s"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/aes-cmac && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nothawthorne/Projects/umbra/src/qca/examples/aes-cmac/aes-cmac.cpp -o CMakeFiles/aes-cmac.dir/aes-cmac.cpp.s

examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o.requires:
.PHONY : examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o.requires

examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o.provides: examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o.requires
	$(MAKE) -f examples/aes-cmac/CMakeFiles/aes-cmac.dir/build.make examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o.provides.build
.PHONY : examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o.provides

examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o.provides.build: examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o

# Object files for target aes-cmac
aes__cmac_OBJECTS = \
"CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o"

# External object files for target aes-cmac
aes__cmac_EXTERNAL_OBJECTS =

bin/aes-cmac: examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o
bin/aes-cmac: examples/aes-cmac/CMakeFiles/aes-cmac.dir/build.make
bin/aes-cmac: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/aes-cmac: lib/libqca.so.2.1.0
bin/aes-cmac: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/aes-cmac: examples/aes-cmac/CMakeFiles/aes-cmac.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/aes-cmac"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/aes-cmac && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aes-cmac.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/aes-cmac/CMakeFiles/aes-cmac.dir/build: bin/aes-cmac
.PHONY : examples/aes-cmac/CMakeFiles/aes-cmac.dir/build

examples/aes-cmac/CMakeFiles/aes-cmac.dir/requires: examples/aes-cmac/CMakeFiles/aes-cmac.dir/aes-cmac.cpp.o.requires
.PHONY : examples/aes-cmac/CMakeFiles/aes-cmac.dir/requires

examples/aes-cmac/CMakeFiles/aes-cmac.dir/clean:
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/aes-cmac && $(CMAKE_COMMAND) -P CMakeFiles/aes-cmac.dir/cmake_clean.cmake
.PHONY : examples/aes-cmac/CMakeFiles/aes-cmac.dir/clean

examples/aes-cmac/CMakeFiles/aes-cmac.dir/depend:
	cd /home/nothawthorne/Projects/umbra/src/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/examples/aes-cmac /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/examples/aes-cmac /home/nothawthorne/Projects/umbra/src/qca/examples/aes-cmac/CMakeFiles/aes-cmac.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/aes-cmac/CMakeFiles/aes-cmac.dir/depend

