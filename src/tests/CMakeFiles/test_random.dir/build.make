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
CMAKE_SOURCE_DIR = /home/pony/mitsuba

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pony/mitsuba

# Include any dependencies generated for this target.
include src/tests/CMakeFiles/test_random.dir/depend.make

# Include the progress variables for this target.
include src/tests/CMakeFiles/test_random.dir/progress.make

# Include the compile flags for this target's objects.
include src/tests/CMakeFiles/test_random.dir/flags.make

src/tests/CMakeFiles/test_random.dir/test_random.cpp.o: src/tests/CMakeFiles/test_random.dir/flags.make
src/tests/CMakeFiles/test_random.dir/test_random.cpp.o: src/tests/test_random.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/tests/CMakeFiles/test_random.dir/test_random.cpp.o"
	cd /home/pony/mitsuba/src/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_random.dir/test_random.cpp.o -c /home/pony/mitsuba/src/tests/test_random.cpp

src/tests/CMakeFiles/test_random.dir/test_random.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_random.dir/test_random.cpp.i"
	cd /home/pony/mitsuba/src/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/tests/test_random.cpp > CMakeFiles/test_random.dir/test_random.cpp.i

src/tests/CMakeFiles/test_random.dir/test_random.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_random.dir/test_random.cpp.s"
	cd /home/pony/mitsuba/src/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/tests/test_random.cpp -o CMakeFiles/test_random.dir/test_random.cpp.s

src/tests/CMakeFiles/test_random.dir/test_random.cpp.o.requires:
.PHONY : src/tests/CMakeFiles/test_random.dir/test_random.cpp.o.requires

src/tests/CMakeFiles/test_random.dir/test_random.cpp.o.provides: src/tests/CMakeFiles/test_random.dir/test_random.cpp.o.requires
	$(MAKE) -f src/tests/CMakeFiles/test_random.dir/build.make src/tests/CMakeFiles/test_random.dir/test_random.cpp.o.provides.build
.PHONY : src/tests/CMakeFiles/test_random.dir/test_random.cpp.o.provides

src/tests/CMakeFiles/test_random.dir/test_random.cpp.o.provides.build: src/tests/CMakeFiles/test_random.dir/test_random.cpp.o

# Object files for target test_random
test_random_OBJECTS = \
"CMakeFiles/test_random.dir/test_random.cpp.o"

# External object files for target test_random
test_random_EXTERNAL_OBJECTS =

binaries/plugins/test_random.so: src/tests/CMakeFiles/test_random.dir/test_random.cpp.o
binaries/plugins/test_random.so: src/tests/CMakeFiles/test_random.dir/build.make
binaries/plugins/test_random.so: binaries/libmitsuba-core.so
binaries/plugins/test_random.so: binaries/libmitsuba-render.so
binaries/plugins/test_random.so: binaries/libmitsuba-core.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libz.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libpng.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libz.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libpng.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libHalf.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libIex.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libImath.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libIlmThread.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libIlmImf.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libpthread.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libIlmImf.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libpthread.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libfftw3.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libfftw3_threads.so
binaries/plugins/test_random.so: /usr/lib/x86_64-linux-gnu/libxerces-c.so
binaries/plugins/test_random.so: src/tests/CMakeFiles/test_random.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared module ../../binaries/plugins/test_random.so"
	cd /home/pony/mitsuba/src/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_random.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/tests/CMakeFiles/test_random.dir/build: binaries/plugins/test_random.so
.PHONY : src/tests/CMakeFiles/test_random.dir/build

src/tests/CMakeFiles/test_random.dir/requires: src/tests/CMakeFiles/test_random.dir/test_random.cpp.o.requires
.PHONY : src/tests/CMakeFiles/test_random.dir/requires

src/tests/CMakeFiles/test_random.dir/clean:
	cd /home/pony/mitsuba/src/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_random.dir/cmake_clean.cmake
.PHONY : src/tests/CMakeFiles/test_random.dir/clean

src/tests/CMakeFiles/test_random.dir/depend:
	cd /home/pony/mitsuba && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pony/mitsuba /home/pony/mitsuba/src/tests /home/pony/mitsuba /home/pony/mitsuba/src/tests /home/pony/mitsuba/src/tests/CMakeFiles/test_random.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/tests/CMakeFiles/test_random.dir/depend

