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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Egyetem\Prog2\Adatstr\2.het

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Egyetem\Prog2\Adatstr\2.het\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/2_het.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2_het.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2_het.dir/flags.make

CMakeFiles/2_het.dir/main.c.obj: CMakeFiles/2_het.dir/flags.make
CMakeFiles/2_het.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Egyetem\Prog2\Adatstr\2.het\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/2_het.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\2_het.dir\main.c.obj   -c D:\Egyetem\Prog2\Adatstr\2.het\main.c

CMakeFiles/2_het.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/2_het.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Egyetem\Prog2\Adatstr\2.het\main.c > CMakeFiles\2_het.dir\main.c.i

CMakeFiles/2_het.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/2_het.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Egyetem\Prog2\Adatstr\2.het\main.c -o CMakeFiles\2_het.dir\main.c.s

CMakeFiles/2_het.dir/source.c.obj: CMakeFiles/2_het.dir/flags.make
CMakeFiles/2_het.dir/source.c.obj: ../source.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Egyetem\Prog2\Adatstr\2.het\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/2_het.dir/source.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\2_het.dir\source.c.obj   -c D:\Egyetem\Prog2\Adatstr\2.het\source.c

CMakeFiles/2_het.dir/source.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/2_het.dir/source.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Egyetem\Prog2\Adatstr\2.het\source.c > CMakeFiles\2_het.dir\source.c.i

CMakeFiles/2_het.dir/source.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/2_het.dir/source.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Egyetem\Prog2\Adatstr\2.het\source.c -o CMakeFiles\2_het.dir\source.c.s

# Object files for target 2_het
2_het_OBJECTS = \
"CMakeFiles/2_het.dir/main.c.obj" \
"CMakeFiles/2_het.dir/source.c.obj"

# External object files for target 2_het
2_het_EXTERNAL_OBJECTS =

2_het.exe: CMakeFiles/2_het.dir/main.c.obj
2_het.exe: CMakeFiles/2_het.dir/source.c.obj
2_het.exe: CMakeFiles/2_het.dir/build.make
2_het.exe: CMakeFiles/2_het.dir/linklibs.rsp
2_het.exe: CMakeFiles/2_het.dir/objects1.rsp
2_het.exe: CMakeFiles/2_het.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Egyetem\Prog2\Adatstr\2.het\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable 2_het.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\2_het.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2_het.dir/build: 2_het.exe

.PHONY : CMakeFiles/2_het.dir/build

CMakeFiles/2_het.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\2_het.dir\cmake_clean.cmake
.PHONY : CMakeFiles/2_het.dir/clean

CMakeFiles/2_het.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Egyetem\Prog2\Adatstr\2.het D:\Egyetem\Prog2\Adatstr\2.het D:\Egyetem\Prog2\Adatstr\2.het\cmake-build-debug D:\Egyetem\Prog2\Adatstr\2.het\cmake-build-debug D:\Egyetem\Prog2\Adatstr\2.het\cmake-build-debug\CMakeFiles\2_het.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/2_het.dir/depend

