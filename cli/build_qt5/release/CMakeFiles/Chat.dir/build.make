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

# Include any dependencies generated for this target.
include CMakeFiles/Chat.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Chat.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Chat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Chat.dir/flags.make

ui_loginform.h: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/loginform.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_loginform.h"
	/usr/lib/qt5/bin/uic -o /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/ui_loginform.h /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/loginform.ui

ui_mainwindow.h: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/mainwindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_mainwindow.h"
	/usr/lib/qt5/bin/uic -o /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/ui_mainwindow.h /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/mainwindow.ui

ui_registrationform.h: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/registrationform.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ui_registrationform.h"
	/usr/lib/qt5/bin/uic -o /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/ui_registrationform.h /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/registrationform.ui

ui_startscreen.h: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/startscreen.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating ui_startscreen.h"
	/usr/lib/qt5/bin/uic -o /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/ui_startscreen.h /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/startscreen.ui

CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.o: CMakeFiles/Chat.dir/flags.make
CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.o: Chat_autogen/mocs_compilation.cpp
CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.o: CMakeFiles/Chat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.o -c /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/Chat_autogen/mocs_compilation.cpp

CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/Chat_autogen/mocs_compilation.cpp > CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.i

CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/Chat_autogen/mocs_compilation.cpp -o CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.s

CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.o: CMakeFiles/Chat.dir/flags.make
CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.o: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/CommandLineInterface.cpp
CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.o: CMakeFiles/Chat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.o -MF CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.o.d -o CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.o -c /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/CommandLineInterface.cpp

CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/CommandLineInterface.cpp > CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.i

CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/CommandLineInterface.cpp -o CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.s

CMakeFiles/Chat.dir/sources/Database.cpp.o: CMakeFiles/Chat.dir/flags.make
CMakeFiles/Chat.dir/sources/Database.cpp.o: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Database.cpp
CMakeFiles/Chat.dir/sources/Database.cpp.o: CMakeFiles/Chat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Chat.dir/sources/Database.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chat.dir/sources/Database.cpp.o -MF CMakeFiles/Chat.dir/sources/Database.cpp.o.d -o CMakeFiles/Chat.dir/sources/Database.cpp.o -c /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Database.cpp

CMakeFiles/Chat.dir/sources/Database.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chat.dir/sources/Database.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Database.cpp > CMakeFiles/Chat.dir/sources/Database.cpp.i

CMakeFiles/Chat.dir/sources/Database.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chat.dir/sources/Database.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Database.cpp -o CMakeFiles/Chat.dir/sources/Database.cpp.s

CMakeFiles/Chat.dir/sources/Message.cpp.o: CMakeFiles/Chat.dir/flags.make
CMakeFiles/Chat.dir/sources/Message.cpp.o: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Message.cpp
CMakeFiles/Chat.dir/sources/Message.cpp.o: CMakeFiles/Chat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Chat.dir/sources/Message.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chat.dir/sources/Message.cpp.o -MF CMakeFiles/Chat.dir/sources/Message.cpp.o.d -o CMakeFiles/Chat.dir/sources/Message.cpp.o -c /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Message.cpp

CMakeFiles/Chat.dir/sources/Message.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chat.dir/sources/Message.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Message.cpp > CMakeFiles/Chat.dir/sources/Message.cpp.i

CMakeFiles/Chat.dir/sources/Message.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chat.dir/sources/Message.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Message.cpp -o CMakeFiles/Chat.dir/sources/Message.cpp.s

CMakeFiles/Chat.dir/sources/Parsing.cpp.o: CMakeFiles/Chat.dir/flags.make
CMakeFiles/Chat.dir/sources/Parsing.cpp.o: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Parsing.cpp
CMakeFiles/Chat.dir/sources/Parsing.cpp.o: CMakeFiles/Chat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Chat.dir/sources/Parsing.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chat.dir/sources/Parsing.cpp.o -MF CMakeFiles/Chat.dir/sources/Parsing.cpp.o.d -o CMakeFiles/Chat.dir/sources/Parsing.cpp.o -c /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Parsing.cpp

CMakeFiles/Chat.dir/sources/Parsing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chat.dir/sources/Parsing.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Parsing.cpp > CMakeFiles/Chat.dir/sources/Parsing.cpp.i

CMakeFiles/Chat.dir/sources/Parsing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chat.dir/sources/Parsing.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Parsing.cpp -o CMakeFiles/Chat.dir/sources/Parsing.cpp.s

CMakeFiles/Chat.dir/sources/Test.cpp.o: CMakeFiles/Chat.dir/flags.make
CMakeFiles/Chat.dir/sources/Test.cpp.o: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Test.cpp
CMakeFiles/Chat.dir/sources/Test.cpp.o: CMakeFiles/Chat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Chat.dir/sources/Test.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chat.dir/sources/Test.cpp.o -MF CMakeFiles/Chat.dir/sources/Test.cpp.o.d -o CMakeFiles/Chat.dir/sources/Test.cpp.o -c /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Test.cpp

CMakeFiles/Chat.dir/sources/Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chat.dir/sources/Test.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Test.cpp > CMakeFiles/Chat.dir/sources/Test.cpp.i

CMakeFiles/Chat.dir/sources/Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chat.dir/sources/Test.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/Test.cpp -o CMakeFiles/Chat.dir/sources/Test.cpp.s

CMakeFiles/Chat.dir/sources/User.cpp.o: CMakeFiles/Chat.dir/flags.make
CMakeFiles/Chat.dir/sources/User.cpp.o: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/User.cpp
CMakeFiles/Chat.dir/sources/User.cpp.o: CMakeFiles/Chat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Chat.dir/sources/User.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chat.dir/sources/User.cpp.o -MF CMakeFiles/Chat.dir/sources/User.cpp.o.d -o CMakeFiles/Chat.dir/sources/User.cpp.o -c /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/User.cpp

CMakeFiles/Chat.dir/sources/User.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chat.dir/sources/User.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/User.cpp > CMakeFiles/Chat.dir/sources/User.cpp.i

CMakeFiles/Chat.dir/sources/User.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chat.dir/sources/User.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/User.cpp -o CMakeFiles/Chat.dir/sources/User.cpp.s

CMakeFiles/Chat.dir/sources/loginform.cpp.o: CMakeFiles/Chat.dir/flags.make
CMakeFiles/Chat.dir/sources/loginform.cpp.o: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/loginform.cpp
CMakeFiles/Chat.dir/sources/loginform.cpp.o: CMakeFiles/Chat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Chat.dir/sources/loginform.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chat.dir/sources/loginform.cpp.o -MF CMakeFiles/Chat.dir/sources/loginform.cpp.o.d -o CMakeFiles/Chat.dir/sources/loginform.cpp.o -c /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/loginform.cpp

CMakeFiles/Chat.dir/sources/loginform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chat.dir/sources/loginform.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/loginform.cpp > CMakeFiles/Chat.dir/sources/loginform.cpp.i

CMakeFiles/Chat.dir/sources/loginform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chat.dir/sources/loginform.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/loginform.cpp -o CMakeFiles/Chat.dir/sources/loginform.cpp.s

CMakeFiles/Chat.dir/sources/mainwindow.cpp.o: CMakeFiles/Chat.dir/flags.make
CMakeFiles/Chat.dir/sources/mainwindow.cpp.o: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/mainwindow.cpp
CMakeFiles/Chat.dir/sources/mainwindow.cpp.o: CMakeFiles/Chat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Chat.dir/sources/mainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chat.dir/sources/mainwindow.cpp.o -MF CMakeFiles/Chat.dir/sources/mainwindow.cpp.o.d -o CMakeFiles/Chat.dir/sources/mainwindow.cpp.o -c /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/mainwindow.cpp

CMakeFiles/Chat.dir/sources/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chat.dir/sources/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/mainwindow.cpp > CMakeFiles/Chat.dir/sources/mainwindow.cpp.i

CMakeFiles/Chat.dir/sources/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chat.dir/sources/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/mainwindow.cpp -o CMakeFiles/Chat.dir/sources/mainwindow.cpp.s

CMakeFiles/Chat.dir/sources/registrationform.cpp.o: CMakeFiles/Chat.dir/flags.make
CMakeFiles/Chat.dir/sources/registrationform.cpp.o: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/registrationform.cpp
CMakeFiles/Chat.dir/sources/registrationform.cpp.o: CMakeFiles/Chat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Chat.dir/sources/registrationform.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chat.dir/sources/registrationform.cpp.o -MF CMakeFiles/Chat.dir/sources/registrationform.cpp.o.d -o CMakeFiles/Chat.dir/sources/registrationform.cpp.o -c /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/registrationform.cpp

CMakeFiles/Chat.dir/sources/registrationform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chat.dir/sources/registrationform.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/registrationform.cpp > CMakeFiles/Chat.dir/sources/registrationform.cpp.i

CMakeFiles/Chat.dir/sources/registrationform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chat.dir/sources/registrationform.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/registrationform.cpp -o CMakeFiles/Chat.dir/sources/registrationform.cpp.s

CMakeFiles/Chat.dir/sources/sha1.cpp.o: CMakeFiles/Chat.dir/flags.make
CMakeFiles/Chat.dir/sources/sha1.cpp.o: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/sha1.cpp
CMakeFiles/Chat.dir/sources/sha1.cpp.o: CMakeFiles/Chat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Chat.dir/sources/sha1.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chat.dir/sources/sha1.cpp.o -MF CMakeFiles/Chat.dir/sources/sha1.cpp.o.d -o CMakeFiles/Chat.dir/sources/sha1.cpp.o -c /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/sha1.cpp

CMakeFiles/Chat.dir/sources/sha1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chat.dir/sources/sha1.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/sha1.cpp > CMakeFiles/Chat.dir/sources/sha1.cpp.i

CMakeFiles/Chat.dir/sources/sha1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chat.dir/sources/sha1.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/sha1.cpp -o CMakeFiles/Chat.dir/sources/sha1.cpp.s

CMakeFiles/Chat.dir/sources/startscreen.cpp.o: CMakeFiles/Chat.dir/flags.make
CMakeFiles/Chat.dir/sources/startscreen.cpp.o: /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/startscreen.cpp
CMakeFiles/Chat.dir/sources/startscreen.cpp.o: CMakeFiles/Chat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/Chat.dir/sources/startscreen.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Chat.dir/sources/startscreen.cpp.o -MF CMakeFiles/Chat.dir/sources/startscreen.cpp.o.d -o CMakeFiles/Chat.dir/sources/startscreen.cpp.o -c /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/startscreen.cpp

CMakeFiles/Chat.dir/sources/startscreen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chat.dir/sources/startscreen.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/startscreen.cpp > CMakeFiles/Chat.dir/sources/startscreen.cpp.i

CMakeFiles/Chat.dir/sources/startscreen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chat.dir/sources/startscreen.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/sources/startscreen.cpp -o CMakeFiles/Chat.dir/sources/startscreen.cpp.s

# Object files for target Chat
Chat_OBJECTS = \
"CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.o" \
"CMakeFiles/Chat.dir/sources/Database.cpp.o" \
"CMakeFiles/Chat.dir/sources/Message.cpp.o" \
"CMakeFiles/Chat.dir/sources/Parsing.cpp.o" \
"CMakeFiles/Chat.dir/sources/Test.cpp.o" \
"CMakeFiles/Chat.dir/sources/User.cpp.o" \
"CMakeFiles/Chat.dir/sources/loginform.cpp.o" \
"CMakeFiles/Chat.dir/sources/mainwindow.cpp.o" \
"CMakeFiles/Chat.dir/sources/registrationform.cpp.o" \
"CMakeFiles/Chat.dir/sources/sha1.cpp.o" \
"CMakeFiles/Chat.dir/sources/startscreen.cpp.o"

# External object files for target Chat
Chat_EXTERNAL_OBJECTS =

Chat: CMakeFiles/Chat.dir/Chat_autogen/mocs_compilation.cpp.o
Chat: CMakeFiles/Chat.dir/sources/CommandLineInterface.cpp.o
Chat: CMakeFiles/Chat.dir/sources/Database.cpp.o
Chat: CMakeFiles/Chat.dir/sources/Message.cpp.o
Chat: CMakeFiles/Chat.dir/sources/Parsing.cpp.o
Chat: CMakeFiles/Chat.dir/sources/Test.cpp.o
Chat: CMakeFiles/Chat.dir/sources/User.cpp.o
Chat: CMakeFiles/Chat.dir/sources/loginform.cpp.o
Chat: CMakeFiles/Chat.dir/sources/mainwindow.cpp.o
Chat: CMakeFiles/Chat.dir/sources/registrationform.cpp.o
Chat: CMakeFiles/Chat.dir/sources/sha1.cpp.o
Chat: CMakeFiles/Chat.dir/sources/startscreen.cpp.o
Chat: CMakeFiles/Chat.dir/build.make
Chat: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.8
Chat: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.8
Chat: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.8
Chat: CMakeFiles/Chat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable Chat"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Chat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Chat.dir/build: Chat
.PHONY : CMakeFiles/Chat.dir/build

CMakeFiles/Chat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Chat.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Chat.dir/clean

CMakeFiles/Chat.dir/depend: ui_loginform.h
CMakeFiles/Chat.dir/depend: ui_mainwindow.h
CMakeFiles/Chat.dir/depend: ui_registrationform.h
CMakeFiles/Chat.dir/depend: ui_startscreen.h
	cd /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lecheey/scripts/CPLUS-UI-ChatCPPTest /home/lecheey/scripts/CPLUS-UI-ChatCPPTest /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release /home/lecheey/scripts/CPLUS-UI-ChatCPPTest/build_qt5/release/CMakeFiles/Chat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Chat.dir/depend

