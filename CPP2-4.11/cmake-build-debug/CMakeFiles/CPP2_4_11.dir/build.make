# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\Personal Files\Documents\Code\C\CLion Project\CPP2-4.11"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Personal Files\Documents\Code\C\CLion Project\CPP2-4.11\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CPP2_4_11.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CPP2_4_11.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPP2_4_11.dir/flags.make

CMakeFiles/CPP2_4_11.dir/main.c.obj: CMakeFiles/CPP2_4_11.dir/flags.make
CMakeFiles/CPP2_4_11.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Personal Files\Documents\Code\C\CLion Project\CPP2-4.11\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CPP2_4_11.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\CPP2_4_11.dir\main.c.obj   -c "E:\Personal Files\Documents\Code\C\CLion Project\CPP2-4.11\main.c"

CMakeFiles/CPP2_4_11.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CPP2_4_11.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\Personal Files\Documents\Code\C\CLion Project\CPP2-4.11\main.c" > CMakeFiles\CPP2_4_11.dir\main.c.i

CMakeFiles/CPP2_4_11.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CPP2_4_11.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\Personal Files\Documents\Code\C\CLion Project\CPP2-4.11\main.c" -o CMakeFiles\CPP2_4_11.dir\main.c.s

# Object files for target CPP2_4_11
CPP2_4_11_OBJECTS = \
"CMakeFiles/CPP2_4_11.dir/main.c.obj"

# External object files for target CPP2_4_11
CPP2_4_11_EXTERNAL_OBJECTS =

CPP2_4_11.exe: CMakeFiles/CPP2_4_11.dir/main.c.obj
CPP2_4_11.exe: CMakeFiles/CPP2_4_11.dir/build.make
CPP2_4_11.exe: CMakeFiles/CPP2_4_11.dir/linklibs.rsp
CPP2_4_11.exe: CMakeFiles/CPP2_4_11.dir/objects1.rsp
CPP2_4_11.exe: CMakeFiles/CPP2_4_11.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Personal Files\Documents\Code\C\CLion Project\CPP2-4.11\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CPP2_4_11.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CPP2_4_11.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPP2_4_11.dir/build: CPP2_4_11.exe

.PHONY : CMakeFiles/CPP2_4_11.dir/build

CMakeFiles/CPP2_4_11.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CPP2_4_11.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CPP2_4_11.dir/clean

CMakeFiles/CPP2_4_11.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Personal Files\Documents\Code\C\CLion Project\CPP2-4.11" "E:\Personal Files\Documents\Code\C\CLion Project\CPP2-4.11" "E:\Personal Files\Documents\Code\C\CLion Project\CPP2-4.11\cmake-build-debug" "E:\Personal Files\Documents\Code\C\CLion Project\CPP2-4.11\cmake-build-debug" "E:\Personal Files\Documents\Code\C\CLion Project\CPP2-4.11\cmake-build-debug\CMakeFiles\CPP2_4_11.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CPP2_4_11.dir/depend

