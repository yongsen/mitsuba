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
include src/volume/CMakeFiles/volcache.dir/depend.make

# Include the progress variables for this target.
include src/volume/CMakeFiles/volcache.dir/progress.make

# Include the compile flags for this target's objects.
include src/volume/CMakeFiles/volcache.dir/flags.make

src/volume/CMakeFiles/volcache.dir/volcache.cpp.o: src/volume/CMakeFiles/volcache.dir/flags.make
src/volume/CMakeFiles/volcache.dir/volcache.cpp.o: src/volume/volcache.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/volume/CMakeFiles/volcache.dir/volcache.cpp.o"
	cd /home/pony/mitsuba/src/volume && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/volcache.dir/volcache.cpp.o -c /home/pony/mitsuba/src/volume/volcache.cpp

src/volume/CMakeFiles/volcache.dir/volcache.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/volcache.dir/volcache.cpp.i"
	cd /home/pony/mitsuba/src/volume && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/volume/volcache.cpp > CMakeFiles/volcache.dir/volcache.cpp.i

src/volume/CMakeFiles/volcache.dir/volcache.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/volcache.dir/volcache.cpp.s"
	cd /home/pony/mitsuba/src/volume && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/volume/volcache.cpp -o CMakeFiles/volcache.dir/volcache.cpp.s

src/volume/CMakeFiles/volcache.dir/volcache.cpp.o.requires:
.PHONY : src/volume/CMakeFiles/volcache.dir/volcache.cpp.o.requires

src/volume/CMakeFiles/volcache.dir/volcache.cpp.o.provides: src/volume/CMakeFiles/volcache.dir/volcache.cpp.o.requires
	$(MAKE) -f src/volume/CMakeFiles/volcache.dir/build.make src/volume/CMakeFiles/volcache.dir/volcache.cpp.o.provides.build
.PHONY : src/volume/CMakeFiles/volcache.dir/volcache.cpp.o.provides

src/volume/CMakeFiles/volcache.dir/volcache.cpp.o.provides.build: src/volume/CMakeFiles/volcache.dir/volcache.cpp.o

# Object files for target volcache
volcache_OBJECTS = \
"CMakeFiles/volcache.dir/volcache.cpp.o"

# External object files for target volcache
volcache_EXTERNAL_OBJECTS =

binaries/plugins/volcache.so: src/volume/CMakeFiles/volcache.dir/volcache.cpp.o
binaries/plugins/volcache.so: src/volume/CMakeFiles/volcache.dir/build.make
binaries/plugins/volcache.so: binaries/libmitsuba-core.so
binaries/plugins/volcache.so: binaries/libmitsuba-render.so
binaries/plugins/volcache.so: binaries/libmitsuba-core.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libz.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libpng.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libz.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libpng.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libHalf.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libIex.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libImath.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libIlmThread.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libIlmImf.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libpthread.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libIlmImf.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libpthread.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libfftw3.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libfftw3_threads.so
binaries/plugins/volcache.so: /usr/lib/x86_64-linux-gnu/libxerces-c.so
binaries/plugins/volcache.so: src/volume/CMakeFiles/volcache.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared module ../../binaries/plugins/volcache.so"
	cd /home/pony/mitsuba/src/volume && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/volcache.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/volume/CMakeFiles/volcache.dir/build: binaries/plugins/volcache.so
.PHONY : src/volume/CMakeFiles/volcache.dir/build

src/volume/CMakeFiles/volcache.dir/requires: src/volume/CMakeFiles/volcache.dir/volcache.cpp.o.requires
.PHONY : src/volume/CMakeFiles/volcache.dir/requires

src/volume/CMakeFiles/volcache.dir/clean:
	cd /home/pony/mitsuba/src/volume && $(CMAKE_COMMAND) -P CMakeFiles/volcache.dir/cmake_clean.cmake
.PHONY : src/volume/CMakeFiles/volcache.dir/clean

src/volume/CMakeFiles/volcache.dir/depend:
	cd /home/pony/mitsuba && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pony/mitsuba /home/pony/mitsuba/src/volume /home/pony/mitsuba /home/pony/mitsuba/src/volume /home/pony/mitsuba/src/volume/CMakeFiles/volcache.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/volume/CMakeFiles/volcache.dir/depend

