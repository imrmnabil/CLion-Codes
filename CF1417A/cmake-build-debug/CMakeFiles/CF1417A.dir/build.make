# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CF1417A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF1417A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF1417A.dir/flags.make

CMakeFiles/CF1417A.dir/main.c.o: CMakeFiles/CF1417A.dir/flags.make
CMakeFiles/CF1417A.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CF1417A.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CF1417A.dir/main.c.o   -c "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A/main.c"

CMakeFiles/CF1417A.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CF1417A.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A/main.c" > CMakeFiles/CF1417A.dir/main.c.i

CMakeFiles/CF1417A.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CF1417A.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A/main.c" -o CMakeFiles/CF1417A.dir/main.c.s

# Object files for target CF1417A
CF1417A_OBJECTS = \
"CMakeFiles/CF1417A.dir/main.c.o"

# External object files for target CF1417A
CF1417A_EXTERNAL_OBJECTS =

CF1417A: CMakeFiles/CF1417A.dir/main.c.o
CF1417A: CMakeFiles/CF1417A.dir/build.make
CF1417A: CMakeFiles/CF1417A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CF1417A"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CF1417A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF1417A.dir/build: CF1417A

.PHONY : CMakeFiles/CF1417A.dir/build

CMakeFiles/CF1417A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CF1417A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CF1417A.dir/clean

CMakeFiles/CF1417A.dir/depend:
	cd "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A" "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A" "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A/cmake-build-debug" "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A/cmake-build-debug" "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CF1417A/cmake-build-debug/CMakeFiles/CF1417A.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CF1417A.dir/depend
