# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /cygdrive/c/Users/Danny/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Danny/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Opdracht_10.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Opdracht_10.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Opdracht_10.dir/flags.make

CMakeFiles/Opdracht_10.dir/main.cpp.o: CMakeFiles/Opdracht_10.dir/flags.make
CMakeFiles/Opdracht_10.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Opdracht_10.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Opdracht_10.dir/main.cpp.o -c "/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10/main.cpp"

CMakeFiles/Opdracht_10.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Opdracht_10.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10/main.cpp" > CMakeFiles/Opdracht_10.dir/main.cpp.i

CMakeFiles/Opdracht_10.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Opdracht_10.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10/main.cpp" -o CMakeFiles/Opdracht_10.dir/main.cpp.s

CMakeFiles/Opdracht_10.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Opdracht_10.dir/main.cpp.o.requires

CMakeFiles/Opdracht_10.dir/main.cpp.o.provides: CMakeFiles/Opdracht_10.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Opdracht_10.dir/build.make CMakeFiles/Opdracht_10.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Opdracht_10.dir/main.cpp.o.provides

CMakeFiles/Opdracht_10.dir/main.cpp.o.provides.build: CMakeFiles/Opdracht_10.dir/main.cpp.o


# Object files for target Opdracht_10
Opdracht_10_OBJECTS = \
"CMakeFiles/Opdracht_10.dir/main.cpp.o"

# External object files for target Opdracht_10
Opdracht_10_EXTERNAL_OBJECTS =

Opdracht_10.exe: CMakeFiles/Opdracht_10.dir/main.cpp.o
Opdracht_10.exe: CMakeFiles/Opdracht_10.dir/build.make
Opdracht_10.exe: CMakeFiles/Opdracht_10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Opdracht_10.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Opdracht_10.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Opdracht_10.dir/build: Opdracht_10.exe

.PHONY : CMakeFiles/Opdracht_10.dir/build

CMakeFiles/Opdracht_10.dir/requires: CMakeFiles/Opdracht_10.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Opdracht_10.dir/requires

CMakeFiles/Opdracht_10.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Opdracht_10.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Opdracht_10.dir/clean

CMakeFiles/Opdracht_10.dir/depend:
	cd "/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10" "/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10" "/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10/cmake-build-debug" "/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10/cmake-build-debug" "/cygdrive/c/Users/Danny/CLionProjects/Opdracht 10/cmake-build-debug/CMakeFiles/Opdracht_10.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Opdracht_10.dir/depend

