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
include unittest/base64unittest/CMakeFiles/base64unittest.dir/depend.make

# Include the progress variables for this target.
include unittest/base64unittest/CMakeFiles/base64unittest.dir/progress.make

# Include the compile flags for this target's objects.
include unittest/base64unittest/CMakeFiles/base64unittest.dir/flags.make

unittest/base64unittest/base64unittest.moc: unittest/base64unittest/base64unittest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base64unittest.moc"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest && /usr/lib/x86_64-linux-gnu/qt5/bin/moc @/home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest/base64unittest.moc_parameters

unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o: unittest/base64unittest/CMakeFiles/base64unittest.dir/flags.make
unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o: unittest/base64unittest/base64unittest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/base64unittest.dir/base64unittest.cpp.o -c /home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest/base64unittest.cpp

unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base64unittest.dir/base64unittest.cpp.i"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest/base64unittest.cpp > CMakeFiles/base64unittest.dir/base64unittest.cpp.i

unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base64unittest.dir/base64unittest.cpp.s"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest/base64unittest.cpp -o CMakeFiles/base64unittest.dir/base64unittest.cpp.s

unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o.requires:
.PHONY : unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o.requires

unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o.provides: unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o.requires
	$(MAKE) -f unittest/base64unittest/CMakeFiles/base64unittest.dir/build.make unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o.provides.build
.PHONY : unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o.provides

unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o.provides.build: unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o

# Object files for target base64unittest
base64unittest_OBJECTS = \
"CMakeFiles/base64unittest.dir/base64unittest.cpp.o"

# External object files for target base64unittest
base64unittest_EXTERNAL_OBJECTS =

bin/base64unittest: unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o
bin/base64unittest: unittest/base64unittest/CMakeFiles/base64unittest.dir/build.make
bin/base64unittest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/base64unittest: lib/libqca.so.2.1.0
bin/base64unittest: /usr/lib/x86_64-linux-gnu/libQt5Test.so.5.2.1
bin/base64unittest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/base64unittest: unittest/base64unittest/CMakeFiles/base64unittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/base64unittest"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/base64unittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittest/base64unittest/CMakeFiles/base64unittest.dir/build: bin/base64unittest
.PHONY : unittest/base64unittest/CMakeFiles/base64unittest.dir/build

unittest/base64unittest/CMakeFiles/base64unittest.dir/requires: unittest/base64unittest/CMakeFiles/base64unittest.dir/base64unittest.cpp.o.requires
.PHONY : unittest/base64unittest/CMakeFiles/base64unittest.dir/requires

unittest/base64unittest/CMakeFiles/base64unittest.dir/clean:
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest && $(CMAKE_COMMAND) -P CMakeFiles/base64unittest.dir/cmake_clean.cmake
.PHONY : unittest/base64unittest/CMakeFiles/base64unittest.dir/clean

unittest/base64unittest/CMakeFiles/base64unittest.dir/depend: unittest/base64unittest/base64unittest.moc
	cd /home/nothawthorne/Projects/umbra/src/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest /home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest/CMakeFiles/base64unittest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittest/base64unittest/CMakeFiles/base64unittest.dir/depend

