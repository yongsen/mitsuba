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
include src/bsdfs/CMakeFiles/twosided.dir/depend.make

# Include the progress variables for this target.
include src/bsdfs/CMakeFiles/twosided.dir/progress.make

# Include the compile flags for this target's objects.
include src/bsdfs/CMakeFiles/twosided.dir/flags.make

src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o: src/bsdfs/CMakeFiles/twosided.dir/flags.make
src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o: src/bsdfs/twosided.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o"
	cd /home/pony/mitsuba/src/bsdfs && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/twosided.dir/twosided.cpp.o -c /home/pony/mitsuba/src/bsdfs/twosided.cpp

src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/twosided.dir/twosided.cpp.i"
	cd /home/pony/mitsuba/src/bsdfs && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/bsdfs/twosided.cpp > CMakeFiles/twosided.dir/twosided.cpp.i

src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/twosided.dir/twosided.cpp.s"
	cd /home/pony/mitsuba/src/bsdfs && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/bsdfs/twosided.cpp -o CMakeFiles/twosided.dir/twosided.cpp.s

src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o.requires:
.PHONY : src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o.requires

src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o.provides: src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o.requires
	$(MAKE) -f src/bsdfs/CMakeFiles/twosided.dir/build.make src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o.provides.build
.PHONY : src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o.provides

src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o.provides.build: src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o

# Object files for target twosided
twosided_OBJECTS = \
"CMakeFiles/twosided.dir/twosided.cpp.o"

# External object files for target twosided
twosided_EXTERNAL_OBJECTS =

binaries/plugins/twosided.so: src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o
binaries/plugins/twosided.so: src/bsdfs/CMakeFiles/twosided.dir/build.make
binaries/plugins/twosided.so: binaries/libmitsuba-core.so
binaries/plugins/twosided.so: binaries/libmitsuba-render.so
binaries/plugins/twosided.so: binaries/libmitsuba-hw.so
binaries/plugins/twosided.so: binaries/libmitsuba-render.so
binaries/plugins/twosided.so: binaries/libmitsuba-core.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libz.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libpng.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libz.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libpng.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libHalf.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libIex.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libImath.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libIlmThread.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libIlmImf.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libpthread.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libIlmImf.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libpthread.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libfftw3.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libfftw3_threads.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libxerces-c.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libGLU.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libGL.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libSM.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libICE.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libX11.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libXext.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libGLEWmx.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libGLU.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libGL.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libSM.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libICE.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libX11.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libXext.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libGLEWmx.so
binaries/plugins/twosided.so: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
binaries/plugins/twosided.so: src/bsdfs/CMakeFiles/twosided.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared module ../../binaries/plugins/twosided.so"
	cd /home/pony/mitsuba/src/bsdfs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/twosided.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/bsdfs/CMakeFiles/twosided.dir/build: binaries/plugins/twosided.so
.PHONY : src/bsdfs/CMakeFiles/twosided.dir/build

src/bsdfs/CMakeFiles/twosided.dir/requires: src/bsdfs/CMakeFiles/twosided.dir/twosided.cpp.o.requires
.PHONY : src/bsdfs/CMakeFiles/twosided.dir/requires

src/bsdfs/CMakeFiles/twosided.dir/clean:
	cd /home/pony/mitsuba/src/bsdfs && $(CMAKE_COMMAND) -P CMakeFiles/twosided.dir/cmake_clean.cmake
.PHONY : src/bsdfs/CMakeFiles/twosided.dir/clean

src/bsdfs/CMakeFiles/twosided.dir/depend:
	cd /home/pony/mitsuba && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pony/mitsuba /home/pony/mitsuba/src/bsdfs /home/pony/mitsuba /home/pony/mitsuba/src/bsdfs /home/pony/mitsuba/src/bsdfs/CMakeFiles/twosided.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/bsdfs/CMakeFiles/twosided.dir/depend

