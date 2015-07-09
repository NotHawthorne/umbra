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
include unittest/kdfunittest/CMakeFiles/kdfunittest.dir/depend.make

# Include the progress variables for this target.
include unittest/kdfunittest/CMakeFiles/kdfunittest.dir/progress.make

# Include the compile flags for this target's objects.
include unittest/kdfunittest/CMakeFiles/kdfunittest.dir/flags.make

unittest/kdfunittest/kdfunittest.moc: unittest/kdfunittest/kdfunittest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating kdfunittest.moc"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest && /usr/lib/x86_64-linux-gnu/qt5/bin/moc @/home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest/kdfunittest.moc_parameters

unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o: unittest/kdfunittest/CMakeFiles/kdfunittest.dir/flags.make
unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o: unittest/kdfunittest/kdfunittest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o -c /home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest/kdfunittest.cpp

unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdfunittest.dir/kdfunittest.cpp.i"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest/kdfunittest.cpp > CMakeFiles/kdfunittest.dir/kdfunittest.cpp.i

unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdfunittest.dir/kdfunittest.cpp.s"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest/kdfunittest.cpp -o CMakeFiles/kdfunittest.dir/kdfunittest.cpp.s

unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o.requires:
.PHONY : unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o.requires

unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o.provides: unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o.requires
	$(MAKE) -f unittest/kdfunittest/CMakeFiles/kdfunittest.dir/build.make unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o.provides.build
.PHONY : unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o.provides

unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o.provides.build: unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o

# Object files for target kdfunittest
kdfunittest_OBJECTS = \
"CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o"

# External object files for target kdfunittest
kdfunittest_EXTERNAL_OBJECTS =

bin/kdfunittest: unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o
bin/kdfunittest: unittest/kdfunittest/CMakeFiles/kdfunittest.dir/build.make
bin/kdfunittest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/kdfunittest: lib/libqca.so.2.1.0
bin/kdfunittest: /usr/lib/x86_64-linux-gnu/libQt5Test.so.5.2.1
bin/kdfunittest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/kdfunittest: unittest/kdfunittest/CMakeFiles/kdfunittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/kdfunittest"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kdfunittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittest/kdfunittest/CMakeFiles/kdfunittest.dir/build: bin/kdfunittest
.PHONY : unittest/kdfunittest/CMakeFiles/kdfunittest.dir/build

unittest/kdfunittest/CMakeFiles/kdfunittest.dir/requires: unittest/kdfunittest/CMakeFiles/kdfunittest.dir/kdfunittest.cpp.o.requires
.PHONY : unittest/kdfunittest/CMakeFiles/kdfunittest.dir/requires

unittest/kdfunittest/CMakeFiles/kdfunittest.dir/clean:
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest && $(CMAKE_COMMAND) -P CMakeFiles/kdfunittest.dir/cmake_clean.cmake
.PHONY : unittest/kdfunittest/CMakeFiles/kdfunittest.dir/clean

unittest/kdfunittest/CMakeFiles/kdfunittest.dir/depend: unittest/kdfunittest/kdfunittest.moc
	cd /home/nothawthorne/Projects/umbra/src/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest /home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest/CMakeFiles/kdfunittest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittest/kdfunittest/CMakeFiles/kdfunittest.dir/depend
