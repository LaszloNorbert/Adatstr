# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = D:\Egyetem\Prog2\Adatstr\Parcialis5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Egyetem\Prog2\Adatstr\Parcialis5\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Parcialis5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Parcialis5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Parcialis5.dir/flags.make

CMakeFiles/Parcialis5.dir/main.c.obj: CMakeFiles/Parcialis5.dir/flags.make
CMakeFiles/Parcialis5.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Egyetem\Prog2\Adatstr\Parcialis5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Parcialis5.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Parcialis5.dir\main.c.obj -c D:\Egyetem\Prog2\Adatstr\Parcialis5\main.c

CMakeFiles/Parcialis5.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Parcialis5.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Egyetem\Prog2\Adatstr\Parcialis5\main.c > CMakeFiles\Parcialis5.dir\main.c.i

CMakeFiles/Parcialis5.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Parcialis5.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Egyetem\Prog2\Adatstr\Parcialis5\main.c -o CMakeFiles\Parcialis5.dir\main.c.s

CMakeFiles/Parcialis5.dir/Feladat5.c.obj: CMakeFiles/Parcialis5.dir/flags.make
CMakeFiles/Parcialis5.dir/Feladat5.c.obj: ../Feladat5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Egyetem\Prog2\Adatstr\Parcialis5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Parcialis5.dir/Feladat5.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Parcialis5.dir\Feladat5.c.obj -c D:\Egyetem\Prog2\Adatstr\Parcialis5\Feladat5.c

CMakeFiles/Parcialis5.dir/Feladat5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Parcialis5.dir/Feladat5.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Egyetem\Prog2\Adatstr\Parcialis5\Feladat5.c > CMakeFiles\Parcialis5.dir\Feladat5.c.i

CMakeFiles/Parcialis5.dir/Feladat5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Parcialis5.dir/Feladat5.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Egyetem\Prog2\Adatstr\Parcialis5\Feladat5.c -o CMakeFiles\Parcialis5.dir\Feladat5.c.s

# Object files for target Parcialis5
Parcialis5_OBJECTS = \
"CMakeFiles/Parcialis5.dir/main.c.obj" \
"CMakeFiles/Parcialis5.dir/Feladat5.c.obj"

# External object files for target Parcialis5
Parcialis5_EXTERNAL_OBJECTS =

Parcialis5.exe: CMakeFiles/Parcialis5.dir/main.c.obj
Parcialis5.exe: CMakeFiles/Parcialis5.dir/Feladat5.c.obj
Parcialis5.exe: CMakeFiles/Parcialis5.dir/build.make
Parcialis5.exe: CMakeFiles/Parcialis5.dir/linklibs.rsp
Parcialis5.exe: CMakeFiles/Parcialis5.dir/objects1.rsp
Parcialis5.exe: CMakeFiles/Parcialis5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Egyetem\Prog2\Adatstr\Parcialis5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Parcialis5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Parcialis5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Parcialis5.dir/build: Parcialis5.exe

.PHONY : CMakeFiles/Parcialis5.dir/build

CMakeFiles/Parcialis5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Parcialis5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Parcialis5.dir/clean

CMakeFiles/Parcialis5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Egyetem\Prog2\Adatstr\Parcialis5 D:\Egyetem\Prog2\Adatstr\Parcialis5 D:\Egyetem\Prog2\Adatstr\Parcialis5\cmake-build-debug D:\Egyetem\Prog2\Adatstr\Parcialis5\cmake-build-debug D:\Egyetem\Prog2\Adatstr\Parcialis5\cmake-build-debug\CMakeFiles\Parcialis5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Parcialis5.dir/depend
