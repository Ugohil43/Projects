# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /DATA/Projects_c++/FloatFraction

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /DATA/Projects_c++/FloatFraction/build

# Include any dependencies generated for this target.
include CMakeFiles/Fraction.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Fraction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Fraction.dir/flags.make

CMakeFiles/Fraction.dir/Fraction.cpp.o: CMakeFiles/Fraction.dir/flags.make
CMakeFiles/Fraction.dir/Fraction.cpp.o: ../Fraction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/DATA/Projects_c++/FloatFraction/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Fraction.dir/Fraction.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Fraction.dir/Fraction.cpp.o -c /DATA/Projects_c++/FloatFraction/Fraction.cpp

CMakeFiles/Fraction.dir/Fraction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fraction.dir/Fraction.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /DATA/Projects_c++/FloatFraction/Fraction.cpp > CMakeFiles/Fraction.dir/Fraction.cpp.i

CMakeFiles/Fraction.dir/Fraction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fraction.dir/Fraction.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /DATA/Projects_c++/FloatFraction/Fraction.cpp -o CMakeFiles/Fraction.dir/Fraction.cpp.s

CMakeFiles/Fraction.dir/Fraction.cpp.o.requires:

.PHONY : CMakeFiles/Fraction.dir/Fraction.cpp.o.requires

CMakeFiles/Fraction.dir/Fraction.cpp.o.provides: CMakeFiles/Fraction.dir/Fraction.cpp.o.requires
	$(MAKE) -f CMakeFiles/Fraction.dir/build.make CMakeFiles/Fraction.dir/Fraction.cpp.o.provides.build
.PHONY : CMakeFiles/Fraction.dir/Fraction.cpp.o.provides

CMakeFiles/Fraction.dir/Fraction.cpp.o.provides.build: CMakeFiles/Fraction.dir/Fraction.cpp.o


# Object files for target Fraction
Fraction_OBJECTS = \
"CMakeFiles/Fraction.dir/Fraction.cpp.o"

# External object files for target Fraction
Fraction_EXTERNAL_OBJECTS =

libFraction.a: CMakeFiles/Fraction.dir/Fraction.cpp.o
libFraction.a: CMakeFiles/Fraction.dir/build.make
libFraction.a: CMakeFiles/Fraction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/DATA/Projects_c++/FloatFraction/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libFraction.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Fraction.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fraction.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Fraction.dir/build: libFraction.a

.PHONY : CMakeFiles/Fraction.dir/build

CMakeFiles/Fraction.dir/requires: CMakeFiles/Fraction.dir/Fraction.cpp.o.requires

.PHONY : CMakeFiles/Fraction.dir/requires

CMakeFiles/Fraction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Fraction.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Fraction.dir/clean

CMakeFiles/Fraction.dir/depend:
	cd /DATA/Projects_c++/FloatFraction/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /DATA/Projects_c++/FloatFraction /DATA/Projects_c++/FloatFraction /DATA/Projects_c++/FloatFraction/build /DATA/Projects_c++/FloatFraction/build /DATA/Projects_c++/FloatFraction/build/CMakeFiles/Fraction.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Fraction.dir/depend

