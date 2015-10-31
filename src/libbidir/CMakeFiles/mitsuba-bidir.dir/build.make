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
include src/libbidir/CMakeFiles/mitsuba-bidir.dir/depend.make

# Include the progress variables for this target.
include src/libbidir/CMakeFiles/mitsuba-bidir.dir/progress.make

# Include the compile flags for this target's objects.
include src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make

src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch: data/pch/mitsuba_precompiled.hpp
src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch: data/pch/mitsuba_precompiled.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/cmake -E make_directory /home/pony/mitsuba/src/libbidir/mitsuba-bidir_pch/.
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  -fvisibility=hidden -pipe -march=nocona -ffast-math -Wall -Winvalid-pch -mfpmath=sse -fopenmp -O3 -DNDEBUG -DMTS_DEBUG -DSINGLE_PRECISION -DSPECTRUM_SAMPLES=3 -DMTS_SSE -DMTS_HAS_COHERENT_RT -DMTS_HAS_FFTW=1 -DMTS_HAS_LIBPNG=1 -DMTS_HAS_LIBJPEG=1 -DMTS_HAS_OPENEXR=1 -DMTS_BUILD_MODULE=MTS_MODULE_BIDIR -I/home/pony/mitsuba/include/eigen3 -I/usr/include/OpenEXR -I/home/pony/mitsuba/include -fPIC -x c++-header -c -o /home/pony/mitsuba/src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch /home/pony/mitsuba/data/pch/mitsuba_precompiled.hpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o: src/libbidir/common.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/common.cpp.o -c /home/pony/mitsuba/src/libbidir/common.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/common.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/common.cpp > CMakeFiles/mitsuba-bidir.dir/common.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/common.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/common.cpp -o CMakeFiles/mitsuba-bidir.dir/common.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o: src/libbidir/edge.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/edge.cpp.o -c /home/pony/mitsuba/src/libbidir/edge.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/edge.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/edge.cpp > CMakeFiles/mitsuba-bidir.dir/edge.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/edge.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/edge.cpp -o CMakeFiles/mitsuba-bidir.dir/edge.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o: src/libbidir/manifold.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o -c /home/pony/mitsuba/src/libbidir/manifold.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/manifold.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/manifold.cpp > CMakeFiles/mitsuba-bidir.dir/manifold.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/manifold.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/manifold.cpp -o CMakeFiles/mitsuba-bidir.dir/manifold.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o: src/libbidir/mut_bidir.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o -c /home/pony/mitsuba/src/libbidir/mut_bidir.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/mut_bidir.cpp > CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/mut_bidir.cpp -o CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o: src/libbidir/mut_caustic.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o -c /home/pony/mitsuba/src/libbidir/mut_caustic.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/mut_caustic.cpp > CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/mut_caustic.cpp -o CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o: src/libbidir/mut_lens.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o -c /home/pony/mitsuba/src/libbidir/mut_lens.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/mut_lens.cpp > CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/mut_lens.cpp -o CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o: src/libbidir/mut_manifold.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o -c /home/pony/mitsuba/src/libbidir/mut_manifold.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/mut_manifold.cpp > CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/mut_manifold.cpp -o CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o: src/libbidir/mut_mchain.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o -c /home/pony/mitsuba/src/libbidir/mut_mchain.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/mut_mchain.cpp > CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/mut_mchain.cpp -o CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o: src/libbidir/path.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/path.cpp.o -c /home/pony/mitsuba/src/libbidir/path.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/path.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/path.cpp > CMakeFiles/mitsuba-bidir.dir/path.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/path.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/path.cpp -o CMakeFiles/mitsuba-bidir.dir/path.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o: src/libbidir/pathsampler.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o -c /home/pony/mitsuba/src/libbidir/pathsampler.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/pathsampler.cpp > CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/pathsampler.cpp -o CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o: src/libbidir/rsampler.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o -c /home/pony/mitsuba/src/libbidir/rsampler.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/rsampler.cpp > CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/rsampler.cpp -o CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o: src/libbidir/util.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_13)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/util.cpp.o -c /home/pony/mitsuba/src/libbidir/util.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/util.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/util.cpp > CMakeFiles/mitsuba-bidir.dir/util.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/util.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/util.cpp -o CMakeFiles/mitsuba-bidir.dir/util.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o: src/libbidir/verification.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_14)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/verification.cpp.o -c /home/pony/mitsuba/src/libbidir/verification.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/verification.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/verification.cpp > CMakeFiles/mitsuba-bidir.dir/verification.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/verification.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/verification.cpp -o CMakeFiles/mitsuba-bidir.dir/verification.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o

src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o: src/libbidir/CMakeFiles/mitsuba-bidir.dir/flags.make
src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o: src/libbidir/vertex.cpp
src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pony/mitsuba/CMakeFiles $(CMAKE_PROGRESS_15)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o -c /home/pony/mitsuba/src/libbidir/vertex.cpp

src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mitsuba-bidir.dir/vertex.cpp.i"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pony/mitsuba/src/libbidir/vertex.cpp > CMakeFiles/mitsuba-bidir.dir/vertex.cpp.i

src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mitsuba-bidir.dir/vertex.cpp.s"
	cd /home/pony/mitsuba/src/libbidir && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pony/mitsuba/src/libbidir/vertex.cpp -o CMakeFiles/mitsuba-bidir.dir/vertex.cpp.s

src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o.requires:
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o.requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o.provides: src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o.requires
	$(MAKE) -f src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o.provides.build
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o.provides

src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o.provides.build: src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o

# Object files for target mitsuba-bidir
mitsuba__bidir_OBJECTS = \
"CMakeFiles/mitsuba-bidir.dir/common.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/edge.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/path.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/util.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/verification.cpp.o" \
"CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o"

# External object files for target mitsuba-bidir
mitsuba__bidir_EXTERNAL_OBJECTS =

binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/build.make
binaries/libmitsuba-bidir.so: binaries/libmitsuba-core.so
binaries/libmitsuba-bidir.so: binaries/libmitsuba-render.so
binaries/libmitsuba-bidir.so: binaries/libmitsuba-core.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libz.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libpng.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libz.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libpng.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libHalf.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libIex.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libImath.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libIlmThread.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libIlmImf.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libpthread.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libIlmImf.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libpthread.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libfftw3.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libfftw3_threads.so
binaries/libmitsuba-bidir.so: /usr/lib/x86_64-linux-gnu/libxerces-c.so
binaries/libmitsuba-bidir.so: src/libbidir/CMakeFiles/mitsuba-bidir.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../binaries/libmitsuba-bidir.so"
	cd /home/pony/mitsuba/src/libbidir && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mitsuba-bidir.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/libbidir/CMakeFiles/mitsuba-bidir.dir/build: binaries/libmitsuba-bidir.so
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/build

src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/common.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/edge.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/manifold.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_bidir.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_caustic.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_lens.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_manifold.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/mut_mchain.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/path.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/pathsampler.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/rsampler.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/util.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/verification.cpp.o.requires
src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires: src/libbidir/CMakeFiles/mitsuba-bidir.dir/vertex.cpp.o.requires
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/requires

src/libbidir/CMakeFiles/mitsuba-bidir.dir/clean:
	cd /home/pony/mitsuba/src/libbidir && $(CMAKE_COMMAND) -P CMakeFiles/mitsuba-bidir.dir/cmake_clean.cmake
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/clean

src/libbidir/CMakeFiles/mitsuba-bidir.dir/depend: src/libbidir/mitsuba-bidir_pch/./mitsuba_precompiled.hpp.gch
	cd /home/pony/mitsuba && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pony/mitsuba /home/pony/mitsuba/src/libbidir /home/pony/mitsuba /home/pony/mitsuba/src/libbidir /home/pony/mitsuba/src/libbidir/CMakeFiles/mitsuba-bidir.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/libbidir/CMakeFiles/mitsuba-bidir.dir/depend

