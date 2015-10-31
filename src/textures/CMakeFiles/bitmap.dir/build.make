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
include src/textures/CMakeFiles/bitmap.dir/depend.make

# Include the progress variables for this target.
include src/textures/CMakeFiles/bitmap.dir/progress.make

# Include the compile flags for this target's objects.
include src/textures/CMakeFiles/bitmap.dir/flags.make

src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o: src/textures/CMakeFiles/bitmap.dir/flags.make
src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o: src/textures/bitmap.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o"
	cd /home/pony/mitsuba/src/textures && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/bitmap.dir/bitmap.cpp.o -c /home/pony/mitsuba/src/textures/bitmap.cpp

src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bitmap.dir/bitmap.cpp.i"
	cd /home/pony/mitsuba/src/textures && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/textures/bitmap.cpp > CMakeFiles/bitmap.dir/bitmap.cpp.i

src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bitmap.dir/bitmap.cpp.s"
	cd /home/pony/mitsuba/src/textures && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/textures/bitmap.cpp -o CMakeFiles/bitmap.dir/bitmap.cpp.s

src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o.requires:
.PHONY : src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o.requires

src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o.provides: src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o.requires
	$(MAKE) -f src/textures/CMakeFiles/bitmap.dir/build.make src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o.provides.build
.PHONY : src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o.provides

src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o.provides.build: src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o

# Object files for target bitmap
bitmap_OBJECTS = \
"CMakeFiles/bitmap.dir/bitmap.cpp.o"

# External object files for target bitmap
bitmap_EXTERNAL_OBJECTS =

binaries/plugins/bitmap.so: src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o
binaries/plugins/bitmap.so: src/textures/CMakeFiles/bitmap.dir/build.make
binaries/plugins/bitmap.so: binaries/libmitsuba-core.so
binaries/plugins/bitmap.so: binaries/libmitsuba-render.so
binaries/plugins/bitmap.so: binaries/libmitsuba-hw.so
binaries/plugins/bitmap.so: binaries/libmitsuba-render.so
binaries/plugins/bitmap.so: binaries/libmitsuba-core.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libz.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libpng.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libz.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libpng.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libHalf.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libIex.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libImath.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libIlmThread.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libIlmImf.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libpthread.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libIlmImf.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libpthread.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libfftw3.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libfftw3_threads.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libxerces-c.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libGLU.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libGL.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libSM.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libICE.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libX11.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libXext.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libGLEWmx.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libGLU.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libGL.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libSM.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libICE.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libX11.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libXext.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libGLEWmx.so
binaries/plugins/bitmap.so: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
binaries/plugins/bitmap.so: src/textures/CMakeFiles/bitmap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared module ../../binaries/plugins/bitmap.so"
	cd /home/pony/mitsuba/src/textures && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bitmap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/textures/CMakeFiles/bitmap.dir/build: binaries/plugins/bitmap.so
.PHONY : src/textures/CMakeFiles/bitmap.dir/build

src/textures/CMakeFiles/bitmap.dir/requires: src/textures/CMakeFiles/bitmap.dir/bitmap.cpp.o.requires
.PHONY : src/textures/CMakeFiles/bitmap.dir/requires

src/textures/CMakeFiles/bitmap.dir/clean:
	cd /home/pony/mitsuba/src/textures && $(CMAKE_COMMAND) -P CMakeFiles/bitmap.dir/cmake_clean.cmake
.PHONY : src/textures/CMakeFiles/bitmap.dir/clean

src/textures/CMakeFiles/bitmap.dir/depend:
	cd /home/pony/mitsuba && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pony/mitsuba /home/pony/mitsuba/src/textures /home/pony/mitsuba /home/pony/mitsuba/src/textures /home/pony/mitsuba/src/textures/CMakeFiles/bitmap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/textures/CMakeFiles/bitmap.dir/depend

