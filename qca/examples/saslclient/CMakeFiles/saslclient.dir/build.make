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
include examples/saslclient/CMakeFiles/saslclient.dir/depend.make

# Include the progress variables for this target.
include examples/saslclient/CMakeFiles/saslclient.dir/progress.make

# Include the compile flags for this target's objects.
include examples/saslclient/CMakeFiles/saslclient.dir/flags.make

examples/saslclient/saslclient.moc: examples/saslclient/saslclient.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating saslclient.moc"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/saslclient && /usr/lib/x86_64-linux-gnu/qt5/bin/moc @/home/nothawthorne/Projects/umbra/src/qca/examples/saslclient/saslclient.moc_parameters

examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o: examples/saslclient/CMakeFiles/saslclient.dir/flags.make
examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o: examples/saslclient/saslclient.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nothawthorne/Projects/umbra/src/qca/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/saslclient && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/saslclient.dir/saslclient.cpp.o -c /home/nothawthorne/Projects/umbra/src/qca/examples/saslclient/saslclient.cpp

examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/saslclient.dir/saslclient.cpp.i"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/saslclient && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nothawthorne/Projects/umbra/src/qca/examples/saslclient/saslclient.cpp > CMakeFiles/saslclient.dir/saslclient.cpp.i

examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/saslclient.dir/saslclient.cpp.s"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/saslclient && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nothawthorne/Projects/umbra/src/qca/examples/saslclient/saslclient.cpp -o CMakeFiles/saslclient.dir/saslclient.cpp.s

examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o.requires:
.PHONY : examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o.requires

examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o.provides: examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o.requires
	$(MAKE) -f examples/saslclient/CMakeFiles/saslclient.dir/build.make examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o.provides.build
.PHONY : examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o.provides

examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o.provides.build: examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o

# Object files for target saslclient
saslclient_OBJECTS = \
"CMakeFiles/saslclient.dir/saslclient.cpp.o"

# External object files for target saslclient
saslclient_EXTERNAL_OBJECTS =

bin/saslclient: examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o
bin/saslclient: examples/saslclient/CMakeFiles/saslclient.dir/build.make
bin/saslclient: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/saslclient: lib/libqca.so.2.1.0
bin/saslclient: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.2.1
bin/saslclient: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/saslclient: examples/saslclient/CMakeFiles/saslclient.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/saslclient"
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/saslclient && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/saslclient.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/saslclient/CMakeFiles/saslclient.dir/build: bin/saslclient
.PHONY : examples/saslclient/CMakeFiles/saslclient.dir/build

examples/saslclient/CMakeFiles/saslclient.dir/requires: examples/saslclient/CMakeFiles/saslclient.dir/saslclient.cpp.o.requires
.PHONY : examples/saslclient/CMakeFiles/saslclient.dir/requires

examples/saslclient/CMakeFiles/saslclient.dir/clean:
	cd /home/nothawthorne/Projects/umbra/src/qca/examples/saslclient && $(CMAKE_COMMAND) -P CMakeFiles/saslclient.dir/cmake_clean.cmake
.PHONY : examples/saslclient/CMakeFiles/saslclient.dir/clean

examples/saslclient/CMakeFiles/saslclient.dir/depend: examples/saslclient/saslclient.moc
	cd /home/nothawthorne/Projects/umbra/src/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/examples/saslclient /home/nothawthorne/Projects/umbra/src/qca /home/nothawthorne/Projects/umbra/src/qca/examples/saslclient /home/nothawthorne/Projects/umbra/src/qca/examples/saslclient/CMakeFiles/saslclient.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/saslclient/CMakeFiles/saslclient.dir/depend
