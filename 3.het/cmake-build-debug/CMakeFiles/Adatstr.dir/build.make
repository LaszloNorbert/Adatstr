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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Adatstr\3.het

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Adatstr\3.het\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Adatstr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Adatstr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Adatstr.dir/flags.make

CMakeFiles/Adatstr.dir/main.c.obj: CMakeFiles/Adatstr.dir/flags.make
CMakeFiles/Adatstr.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Adatstr\3.het\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Adatstr.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Adatstr.dir\main.c.obj   -c D:\Adatstr\3.het\main.c

CMakeFiles/Adatstr.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Adatstr.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Adatstr\3.het\main.c > CMakeFiles\Adatstr.dir\main.c.i

CMakeFiles/Adatstr.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Adatstr.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Adatstr\3.het\main.c -o CMakeFiles\Adatstr.dir\main.c.s

CMakeFiles/Adatstr.dir/source.c.obj: CMakeFiles/Adatstr.dir/flags.make
CMakeFiles/Adatstr.dir/source.c.obj: ../source.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Adatstr\3.het\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Adatstr.dir/source.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Adatstr.dir\source.c.obj   -c D:\Adatstr\3.het\source.c

CMakeFiles/Adatstr.dir/source.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Adatstr.dir/source.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Adatstr\3.het\source.c > CMakeFiles\Adatstr.dir\source.c.i

CMakeFiles/Adatstr.dir/source.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Adatstr.dir/source.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Adatstr\3.het\source.c -o CMakeFiles\Adatstr.dir\source.c.s

# Object files for target Adatstr
Adatstr_OBJECTS = \
"CMakeFiles/Adatstr.dir/main.c.obj" \
"CMakeFiles/Adatstr.dir/source.c.obj"

# External object files for target Adatstr
Adatstr_EXTERNAL_OBJECTS =

Adatstr.exe: CMakeFiles/Adatstr.dir/main.c.obj
Adatstr.exe: CMakeFiles/Adatstr.dir/source.c.obj
Adatstr.exe: CMakeFiles/Adatstr.dir/build.make
Adatstr.exe: CMakeFiles/Adatstr.dir/linklibs.rsp
Adatstr.exe: CMakeFiles/Adatstr.dir/objects1.rsp
Adatstr.exe: CMakeFiles/Adatstr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Adatstr\3.het\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Adatstr.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Adatstr.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Adatstr.dir/build: Adatstr.exe

.PHONY : CMakeFiles/Adatstr.dir/build

CMakeFiles/Adatstr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Adatstr.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Adatstr.dir/clean

CMakeFiles/Adatstr.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Adatstr\3.het D:\Adatstr\3.het D:\Adatstr\3.het\cmake-build-debug D:\Adatstr\3.het\cmake-build-debug D:\Adatstr\3.het\cmake-build-debug\CMakeFiles\Adatstr.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Adatstr.dir/depend

