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
CMAKE_SOURCE_DIR = "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CPP2_8_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CPP2_8_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPP2_8_1.dir/flags.make

CMakeFiles/CPP2_8_1.dir/main.c.o: CMakeFiles/CPP2_8_1.dir/flags.make
CMakeFiles/CPP2_8_1.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CPP2_8_1.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CPP2_8_1.dir/main.c.o   -c "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1/main.c"

CMakeFiles/CPP2_8_1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CPP2_8_1.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1/main.c" > CMakeFiles/CPP2_8_1.dir/main.c.i

CMakeFiles/CPP2_8_1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CPP2_8_1.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1/main.c" -o CMakeFiles/CPP2_8_1.dir/main.c.s

# Object files for target CPP2_8_1
CPP2_8_1_OBJECTS = \
"CMakeFiles/CPP2_8_1.dir/main.c.o"

# External object files for target CPP2_8_1
CPP2_8_1_EXTERNAL_OBJECTS =

CPP2_8_1: CMakeFiles/CPP2_8_1.dir/main.c.o
CPP2_8_1: CMakeFiles/CPP2_8_1.dir/build.make
CPP2_8_1: CMakeFiles/CPP2_8_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CPP2_8_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CPP2_8_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPP2_8_1.dir/build: CPP2_8_1

.PHONY : CMakeFiles/CPP2_8_1.dir/build

CMakeFiles/CPP2_8_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CPP2_8_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CPP2_8_1.dir/clean

CMakeFiles/CPP2_8_1.dir/depend:
	cd "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1" "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1" "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1/cmake-build-debug" "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1/cmake-build-debug" "/mnt/e/Personal Files/Documents/Code/C/CLion Project/CPP2-8.1/cmake-build-debug/CMakeFiles/CPP2_8_1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CPP2_8_1.dir/depend

