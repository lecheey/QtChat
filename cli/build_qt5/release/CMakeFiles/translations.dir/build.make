# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lecheey/scripts/CPLUS-UI-ChatCPPTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release

# Utility rule file for translations.

# Include any custom commands dependencies for this target.
include CMakeFiles/translations.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/translations.dir/progress.make

translations: CMakeFiles/translations.dir/build.make
.PHONY : translations

# Rule to build all files generated by this target.
CMakeFiles/translations.dir/build: translations
.PHONY : CMakeFiles/translations.dir/build

CMakeFiles/translations.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/translations.dir/cmake_clean.cmake
.PHONY : CMakeFiles/translations.dir/clean

CMakeFiles/translations.dir/depend:
	cd /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lecheey/scripts/CPLUS-UI-ChatCPPTest /home/lecheey/scripts/CPLUS-UI-ChatCPPTest /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles/translations.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/translations.dir/depend

