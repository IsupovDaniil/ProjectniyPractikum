# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\1\CppDistro\cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\1\CppDistro\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\1\ProjectPractikum\lw-2\SFML.1\03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\1\ProjectPractikum\lw-2\SFML.1\03

# Include any dependencies generated for this target.
include CMakeFiles/03.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/03.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/03.dir/flags.make

CMakeFiles/03.dir/main.obj: CMakeFiles/03.dir/flags.make
CMakeFiles/03.dir/main.obj: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\1\ProjectPractikum\lw-2\SFML.1\03\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/03.dir/main.obj"
	D:\1\CppDistro\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\03.dir\main.obj -c D:\1\ProjectPractikum\lw-2\SFML.1\03\main.cpp

CMakeFiles/03.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/03.dir/main.i"
	D:\1\CppDistro\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\1\ProjectPractikum\lw-2\SFML.1\03\main.cpp > CMakeFiles\03.dir\main.i

CMakeFiles/03.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/03.dir/main.s"
	D:\1\CppDistro\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\1\ProjectPractikum\lw-2\SFML.1\03\main.cpp -o CMakeFiles\03.dir\main.s

CMakeFiles/03.dir/main.obj.requires:

.PHONY : CMakeFiles/03.dir/main.obj.requires

CMakeFiles/03.dir/main.obj.provides: CMakeFiles/03.dir/main.obj.requires
	$(MAKE) -f CMakeFiles\03.dir\build.make CMakeFiles/03.dir/main.obj.provides.build
.PHONY : CMakeFiles/03.dir/main.obj.provides

CMakeFiles/03.dir/main.obj.provides.build: CMakeFiles/03.dir/main.obj


# Object files for target 03
03_OBJECTS = \
"CMakeFiles/03.dir/main.obj"

# External object files for target 03
03_EXTERNAL_OBJECTS =

03.exe: CMakeFiles/03.dir/main.obj
03.exe: CMakeFiles/03.dir/build.make
03.exe: D:/1/CppDistro/MinGW/lib/libsfml-window-s.a
03.exe: D:/1/CppDistro/MinGW/lib/libsfml-graphics-s.a
03.exe: D:/1/CppDistro/MinGW/lib/libsfml-system-s.a
03.exe: D:/1/CppDistro/MinGW/lib/libfreetype.a
03.exe: D:/1/CppDistro/MinGW/lib/libjpeg.a
03.exe: CMakeFiles/03.dir/linklibs.rsp
03.exe: CMakeFiles/03.dir/objects1.rsp
03.exe: CMakeFiles/03.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\1\ProjectPractikum\lw-2\SFML.1\03\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 03.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\03.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/03.dir/build: 03.exe

.PHONY : CMakeFiles/03.dir/build

CMakeFiles/03.dir/requires: CMakeFiles/03.dir/main.obj.requires

.PHONY : CMakeFiles/03.dir/requires

CMakeFiles/03.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\03.dir\cmake_clean.cmake
.PHONY : CMakeFiles/03.dir/clean

CMakeFiles/03.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\1\ProjectPractikum\lw-2\SFML.1\03 D:\1\ProjectPractikum\lw-2\SFML.1\03 D:\1\ProjectPractikum\lw-2\SFML.1\03 D:\1\ProjectPractikum\lw-2\SFML.1\03 D:\1\ProjectPractikum\lw-2\SFML.1\03\CMakeFiles\03.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/03.dir/depend

