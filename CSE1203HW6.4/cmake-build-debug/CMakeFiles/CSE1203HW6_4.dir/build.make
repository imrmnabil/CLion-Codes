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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\Personal Files\Documents\Code\C\CLion Project\CSE1203HW6.4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Personal Files\Documents\Code\C\CLion Project\CSE1203HW6.4\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CSE1203HW6_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CSE1203HW6_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CSE1203HW6_4.dir/flags.make

CMakeFiles/CSE1203HW6_4.dir/main.c.obj: CMakeFiles/CSE1203HW6_4.dir/flags.make
CMakeFiles/CSE1203HW6_4.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Personal Files\Documents\Code\C\CLion Project\CSE1203HW6.4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CSE1203HW6_4.dir/main.c.obj"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\CSE1203HW6_4.dir\main.c.obj   -c "E:\Personal Files\Documents\Code\C\CLion Project\CSE1203HW6.4\main.c"

CMakeFiles/CSE1203HW6_4.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CSE1203HW6_4.dir/main.c.i"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\Personal Files\Documents\Code\C\CLion Project\CSE1203HW6.4\main.c" > CMakeFiles\CSE1203HW6_4.dir\main.c.i

CMakeFiles/CSE1203HW6_4.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CSE1203HW6_4.dir/main.c.s"
	C:\TDM-GCC-64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\Personal Files\Documents\Code\C\CLion Project\CSE1203HW6.4\main.c" -o CMakeFiles\CSE1203HW6_4.dir\main.c.s

# Object files for target CSE1203HW6_4
CSE1203HW6_4_OBJECTS = \
"CMakeFiles/CSE1203HW6_4.dir/main.c.obj"

# External object files for target CSE1203HW6_4
CSE1203HW6_4_EXTERNAL_OBJECTS =

CSE1203HW6_4.exe: CMakeFiles/CSE1203HW6_4.dir/main.c.obj
CSE1203HW6_4.exe: CMakeFiles/CSE1203HW6_4.dir/build.make
CSE1203HW6_4.exe: CMakeFiles/CSE1203HW6_4.dir/linklibs.rsp
CSE1203HW6_4.exe: CMakeFiles/CSE1203HW6_4.dir/objects1.rsp
CSE1203HW6_4.exe: CMakeFiles/CSE1203HW6_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Personal Files\Documents\Code\C\CLion Project\CSE1203HW6.4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CSE1203HW6_4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CSE1203HW6_4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CSE1203HW6_4.dir/build: CSE1203HW6_4.exe

.PHONY : CMakeFiles/CSE1203HW6_4.dir/build

CMakeFiles/CSE1203HW6_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CSE1203HW6_4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CSE1203HW6_4.dir/clean

CMakeFiles/CSE1203HW6_4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Personal Files\Documents\Code\C\CLion Project\CSE1203HW6.4" "E:\Personal Files\Documents\Code\C\CLion Project\CSE1203HW6.4" "E:\Personal Files\Documents\Code\C\CLion Project\CSE1203HW6.4\cmake-build-debug" "E:\Personal Files\Documents\Code\C\CLion Project\CSE1203HW6.4\cmake-build-debug" "E:\Personal Files\Documents\Code\C\CLion Project\CSE1203HW6.4\cmake-build-debug\CMakeFiles\CSE1203HW6_4.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CSE1203HW6_4.dir/depend
