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
CMAKE_SOURCE_DIR = "E:\Personal Files\Documents\Code\C\CLion Project\CF1426C"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Personal Files\Documents\Code\C\CLion Project\CF1426C\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CF1426C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF1426C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF1426C.dir/flags.make

CMakeFiles/CF1426C.dir/main.c.obj: CMakeFiles/CF1426C.dir/flags.make
CMakeFiles/CF1426C.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Personal Files\Documents\Code\C\CLion Project\CF1426C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CF1426C.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\CF1426C.dir\main.c.obj   -c "E:\Personal Files\Documents\Code\C\CLion Project\CF1426C\main.c"

CMakeFiles/CF1426C.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CF1426C.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\Personal Files\Documents\Code\C\CLion Project\CF1426C\main.c" > CMakeFiles\CF1426C.dir\main.c.i

CMakeFiles/CF1426C.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CF1426C.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\Personal Files\Documents\Code\C\CLion Project\CF1426C\main.c" -o CMakeFiles\CF1426C.dir\main.c.s

# Object files for target CF1426C
CF1426C_OBJECTS = \
"CMakeFiles/CF1426C.dir/main.c.obj"

# External object files for target CF1426C
CF1426C_EXTERNAL_OBJECTS =

CF1426C.exe: CMakeFiles/CF1426C.dir/main.c.obj
CF1426C.exe: CMakeFiles/CF1426C.dir/build.make
CF1426C.exe: CMakeFiles/CF1426C.dir/linklibs.rsp
CF1426C.exe: CMakeFiles/CF1426C.dir/objects1.rsp
CF1426C.exe: CMakeFiles/CF1426C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Personal Files\Documents\Code\C\CLion Project\CF1426C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CF1426C.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CF1426C.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF1426C.dir/build: CF1426C.exe

.PHONY : CMakeFiles/CF1426C.dir/build

CMakeFiles/CF1426C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CF1426C.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CF1426C.dir/clean

CMakeFiles/CF1426C.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Personal Files\Documents\Code\C\CLion Project\CF1426C" "E:\Personal Files\Documents\Code\C\CLion Project\CF1426C" "E:\Personal Files\Documents\Code\C\CLion Project\CF1426C\cmake-build-debug" "E:\Personal Files\Documents\Code\C\CLion Project\CF1426C\cmake-build-debug" "E:\Personal Files\Documents\Code\C\CLion Project\CF1426C\cmake-build-debug\CMakeFiles\CF1426C.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CF1426C.dir/depend

