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
include unittest/tls/CMakeFiles/tlsunittest.dir/depend.make

# Include the progress variables for this target.
include unittest/tls/CMakeFiles/tlsunittest.dir/progress.make

# Include the compile flags for this target's objects.
include unittest/tls/CMakeFiles/tlsunittest.dir/flags.make

unittest/tls/tlsunittest.moc: unittest/tls/tlsunittest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating tlsunittest.moc"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/tls && /usr/lib/x86_64-linux-gnu/qt5/bin/moc @/home/nothawthorne/Projects/umbra/src/qca/unittest/tls/tlsunittest.moc_parameters

unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o: unittest/tls/CMakeFiles/tlsunittest.dir/flags.make
unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o: unittest/tls/tlsunittest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/tls && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o -c /home/nothawthorne/Projects/umbra/src/qca/unittest/tls/tlsunittest.cpp

unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tlsunittest.dir/tlsunittest.cpp.i"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/tls && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nothawthorne/Projects/umbra/src/qca/unittest/tls/tlsunittest.cpp > CMakeFiles/tlsunittest.dir/tlsunittest.cpp.i

unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tlsunittest.dir/tlsunittest.cpp.s"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/tls && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nothawthorne/Projects/umbra/src/qca/unittest/tls/tlsunittest.cpp -o CMakeFiles/tlsunittest.dir/tlsunittest.cpp.s

unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o.requires:
.PHONY : unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o.requires

unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o.provides: unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o.requires
	$(MAKE) -f unittest/tls/CMakeFiles/tlsunittest.dir/build.make unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o.provides.build
.PHONY : unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o.provides

unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o.provides.build: unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o

# Object files for target tlsunittest
tlsunittest_OBJECTS = \
"CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o"

# External object files for target tlsunittest
tlsunittest_EXTERNAL_OBJECTS =

bin/tlsunittest: unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o
bin/tlsunittest: unittest/tls/CMakeFiles/tlsunittest.dir/build.make
bin/tlsunittest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/tlsunittest: lib/libqca.so.2.1.0
bin/tlsunittest: /usr/lib/x86_64-linux-gnu/libQt5Test.so.5.2.1
bin/tlsunittest: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/tlsunittest: unittest/tls/CMakeFiles/tlsunittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/tlsunittest"
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/tls && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tlsunittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittest/tls/CMakeFiles/tlsunittest.dir/build: bin/tlsunittest
.PHONY : unittest/tls/CMakeFiles/tlsunittest.dir/build

unittest/tls/CMakeFiles/tlsunittest.dir/requires: unittest/tls/CMakeFiles/tlsunittest.dir/tlsunittest.cpp.o.requires
.PHONY : unittest/tls/CMakeFiles/tlsunittest.dir/requires

unittest/tls/CMakeFiles/tlsunittest.dir/clean:
	cd /home/nothawthorne/Projects/umbra/src/qca/unittest/tls && $(CMAKE_COMMAND) -P CMakeFiles/tlsunittest.dir/cmake_clean.cmake
.PHONY : unittest/tls/CMakeFiles/tlsunittest.dir/clean

unittest/tls/CMakeFiles/tlsunittest.dir/depend: unittest/tls/tlsunittest.moc
	cd /home/nothawthorne/Projects/umbra/src/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/unittest/tls /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/unittest/tls /home/nothawthorne/Projects/umbra/src/qca/unittest/tls/CMakeFiles/tlsunittest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittest/tls/CMakeFiles/tlsunittest.dir/depend
