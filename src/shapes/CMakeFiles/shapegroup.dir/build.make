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
include src/shapes/CMakeFiles/shapegroup.dir/depend.make

# Include the progress variables for this target.
include src/shapes/CMakeFiles/shapegroup.dir/progress.make

# Include the compile flags for this target's objects.
include src/shapes/CMakeFiles/shapegroup.dir/flags.make

src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o: src/shapes/CMakeFiles/shapegroup.dir/flags.make
src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o: src/shapes/shapegroup.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o"
	cd /home/pony/mitsuba/src/shapes && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/shapegroup.dir/shapegroup.cpp.o -c /home/pony/mitsuba/src/shapes/shapegroup.cpp

src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shapegroup.dir/shapegroup.cpp.i"
	cd /home/pony/mitsuba/src/shapes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/shapes/shapegroup.cpp > CMakeFiles/shapegroup.dir/shapegroup.cpp.i

src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shapegroup.dir/shapegroup.cpp.s"
	cd /home/pony/mitsuba/src/shapes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/shapes/shapegroup.cpp -o CMakeFiles/shapegroup.dir/shapegroup.cpp.s

src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o.requires:
.PHONY : src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o.requires

src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o.provides: src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o.requires
	$(MAKE) -f src/shapes/CMakeFiles/shapegroup.dir/build.make src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o.provides.build
.PHONY : src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o.provides

src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o.provides.build: src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o

# Object files for target shapegroup
shapegroup_OBJECTS = \
"CMakeFiles/shapegroup.dir/shapegroup.cpp.o"

# External object files for target shapegroup
shapegroup_EXTERNAL_OBJECTS =

binaries/plugins/shapegroup.so: src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o
binaries/plugins/shapegroup.so: src/shapes/CMakeFiles/shapegroup.dir/build.make
binaries/plugins/shapegroup.so: binaries/libmitsuba-core.so
binaries/plugins/shapegroup.so: binaries/libmitsuba-render.so
binaries/plugins/shapegroup.so: binaries/libmitsuba-core.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libz.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libpng.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libz.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libpng.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libHalf.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libIex.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libImath.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libIlmThread.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libIlmImf.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libpthread.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libIlmImf.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libpthread.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libfftw3.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libfftw3_threads.so
binaries/plugins/shapegroup.so: /usr/lib/x86_64-linux-gnu/libxerces-c.so
binaries/plugins/shapegroup.so: src/shapes/CMakeFiles/shapegroup.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared module ../../binaries/plugins/shapegroup.so"
	cd /home/pony/mitsuba/src/shapes && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shapegroup.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/shapes/CMakeFiles/shapegroup.dir/build: binaries/plugins/shapegroup.so
.PHONY : src/shapes/CMakeFiles/shapegroup.dir/build

src/shapes/CMakeFiles/shapegroup.dir/requires: src/shapes/CMakeFiles/shapegroup.dir/shapegroup.cpp.o.requires
.PHONY : src/shapes/CMakeFiles/shapegroup.dir/requires

src/shapes/CMakeFiles/shapegroup.dir/clean:
	cd /home/pony/mitsuba/src/shapes && $(CMAKE_COMMAND) -P CMakeFiles/shapegroup.dir/cmake_clean.cmake
.PHONY : src/shapes/CMakeFiles/shapegroup.dir/clean

src/shapes/CMakeFiles/shapegroup.dir/depend:
	cd /home/pony/mitsuba && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pony/mitsuba /home/pony/mitsuba/src/shapes /home/pony/mitsuba /home/pony/mitsuba/src/shapes /home/pony/mitsuba/src/shapes/CMakeFiles/shapegroup.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/shapes/CMakeFiles/shapegroup.dir/depend

