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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Programs\Addressbook\src\win

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Programs\Addressbook\src\win\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/Addressbook.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Addressbook.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Addressbook.dir/flags.make

CMakeFiles/Addressbook.dir/main.cpp.obj: CMakeFiles/Addressbook.dir/flags.make
CMakeFiles/Addressbook.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Programs\Addressbook\src\win\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Addressbook.dir/main.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Addressbook.dir\main.cpp.obj -c D:\Programs\Addressbook\src\win\main.cpp

CMakeFiles/Addressbook.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Addressbook.dir/main.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Programs\Addressbook\src\win\main.cpp > CMakeFiles\Addressbook.dir\main.cpp.i

CMakeFiles/Addressbook.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Addressbook.dir/main.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Programs\Addressbook\src\win\main.cpp -o CMakeFiles\Addressbook.dir\main.cpp.s

CMakeFiles/Addressbook.dir/addressbook.cpp.obj: CMakeFiles/Addressbook.dir/flags.make
CMakeFiles/Addressbook.dir/addressbook.cpp.obj: ../addressbook.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Programs\Addressbook\src\win\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Addressbook.dir/addressbook.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Addressbook.dir\addressbook.cpp.obj -c D:\Programs\Addressbook\src\win\addressbook.cpp

CMakeFiles/Addressbook.dir/addressbook.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Addressbook.dir/addressbook.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Programs\Addressbook\src\win\addressbook.cpp > CMakeFiles\Addressbook.dir\addressbook.cpp.i

CMakeFiles/Addressbook.dir/addressbook.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Addressbook.dir/addressbook.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Programs\Addressbook\src\win\addressbook.cpp -o CMakeFiles\Addressbook.dir\addressbook.cpp.s

# Object files for target Addressbook
Addressbook_OBJECTS = \
"CMakeFiles/Addressbook.dir/main.cpp.obj" \
"CMakeFiles/Addressbook.dir/addressbook.cpp.obj"

# External object files for target Addressbook
Addressbook_EXTERNAL_OBJECTS =

Addressbook.exe: CMakeFiles/Addressbook.dir/main.cpp.obj
Addressbook.exe: CMakeFiles/Addressbook.dir/addressbook.cpp.obj
Addressbook.exe: CMakeFiles/Addressbook.dir/build.make
Addressbook.exe: CMakeFiles/Addressbook.dir/linklibs.rsp
Addressbook.exe: CMakeFiles/Addressbook.dir/objects1.rsp
Addressbook.exe: CMakeFiles/Addressbook.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Programs\Addressbook\src\win\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Addressbook.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Addressbook.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Addressbook.dir/build: Addressbook.exe

.PHONY : CMakeFiles/Addressbook.dir/build

CMakeFiles/Addressbook.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Addressbook.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Addressbook.dir/clean

CMakeFiles/Addressbook.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Programs\Addressbook\src\win D:\Programs\Addressbook\src\win D:\Programs\Addressbook\src\win\cmake-build-release D:\Programs\Addressbook\src\win\cmake-build-release D:\Programs\Addressbook\src\win\cmake-build-release\CMakeFiles\Addressbook.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Addressbook.dir/depend

