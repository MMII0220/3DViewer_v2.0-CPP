# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/deathstl/Desktop/CPP4_3DViewer_v2.0-1/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/deathstl/Desktop/CPP4_3DViewer_v2.0-1/src/build

# Utility rule file for 3DViewer_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/3DViewer_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/3DViewer_autogen.dir/progress.make

CMakeFiles/3DViewer_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/deathstl/Desktop/CPP4_3DViewer_v2.0-1/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target 3DViewer"
	/usr/local/bin/cmake -E cmake_autogen /Users/deathstl/Desktop/CPP4_3DViewer_v2.0-1/src/build/CMakeFiles/3DViewer_autogen.dir/AutogenInfo.json ""

3DViewer_autogen: CMakeFiles/3DViewer_autogen
3DViewer_autogen: CMakeFiles/3DViewer_autogen.dir/build.make
.PHONY : 3DViewer_autogen

# Rule to build all files generated by this target.
CMakeFiles/3DViewer_autogen.dir/build: 3DViewer_autogen
.PHONY : CMakeFiles/3DViewer_autogen.dir/build

CMakeFiles/3DViewer_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/3DViewer_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/3DViewer_autogen.dir/clean

CMakeFiles/3DViewer_autogen.dir/depend:
	cd /Users/deathstl/Desktop/CPP4_3DViewer_v2.0-1/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/deathstl/Desktop/CPP4_3DViewer_v2.0-1/src /Users/deathstl/Desktop/CPP4_3DViewer_v2.0-1/src /Users/deathstl/Desktop/CPP4_3DViewer_v2.0-1/src/build /Users/deathstl/Desktop/CPP4_3DViewer_v2.0-1/src/build /Users/deathstl/Desktop/CPP4_3DViewer_v2.0-1/src/build/CMakeFiles/3DViewer_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/3DViewer_autogen.dir/depend
