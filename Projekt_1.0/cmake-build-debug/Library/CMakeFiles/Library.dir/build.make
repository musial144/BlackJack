# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/student/clion-2019.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/student/clion-2019.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/student/Pulpit/BlackJack/Projekt_1.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug

# Include any dependencies generated for this target.
include Library/CMakeFiles/Library.dir/depend.make

# Include the progress variables for this target.
include Library/CMakeFiles/Library.dir/progress.make

# Include the compile flags for this target's objects.
include Library/CMakeFiles/Library.dir/flags.make

Library/CMakeFiles/Library.dir/src/Card.cpp.o: Library/CMakeFiles/Library.dir/flags.make
Library/CMakeFiles/Library.dir/src/Card.cpp.o: ../Library/src/Card.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Library/CMakeFiles/Library.dir/src/Card.cpp.o"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/Card.cpp.o -c /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/Card.cpp

Library/CMakeFiles/Library.dir/src/Card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/Card.cpp.i"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/Card.cpp > CMakeFiles/Library.dir/src/Card.cpp.i

Library/CMakeFiles/Library.dir/src/Card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/Card.cpp.s"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/Card.cpp -o CMakeFiles/Library.dir/src/Card.cpp.s

Library/CMakeFiles/Library.dir/src/CardRepository.cpp.o: Library/CMakeFiles/Library.dir/flags.make
Library/CMakeFiles/Library.dir/src/CardRepository.cpp.o: ../Library/src/CardRepository.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Library/CMakeFiles/Library.dir/src/CardRepository.cpp.o"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/CardRepository.cpp.o -c /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/CardRepository.cpp

Library/CMakeFiles/Library.dir/src/CardRepository.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/CardRepository.cpp.i"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/CardRepository.cpp > CMakeFiles/Library.dir/src/CardRepository.cpp.i

Library/CMakeFiles/Library.dir/src/CardRepository.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/CardRepository.cpp.s"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/CardRepository.cpp -o CMakeFiles/Library.dir/src/CardRepository.cpp.s

Library/CMakeFiles/Library.dir/src/CardManager.cpp.o: Library/CMakeFiles/Library.dir/flags.make
Library/CMakeFiles/Library.dir/src/CardManager.cpp.o: ../Library/src/CardManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Library/CMakeFiles/Library.dir/src/CardManager.cpp.o"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/CardManager.cpp.o -c /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/CardManager.cpp

Library/CMakeFiles/Library.dir/src/CardManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/CardManager.cpp.i"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/CardManager.cpp > CMakeFiles/Library.dir/src/CardManager.cpp.i

Library/CMakeFiles/Library.dir/src/CardManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/CardManager.cpp.s"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/CardManager.cpp -o CMakeFiles/Library.dir/src/CardManager.cpp.s

Library/CMakeFiles/Library.dir/src/Hand.cpp.o: Library/CMakeFiles/Library.dir/flags.make
Library/CMakeFiles/Library.dir/src/Hand.cpp.o: ../Library/src/Hand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Library/CMakeFiles/Library.dir/src/Hand.cpp.o"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/Hand.cpp.o -c /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/Hand.cpp

Library/CMakeFiles/Library.dir/src/Hand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/Hand.cpp.i"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/Hand.cpp > CMakeFiles/Library.dir/src/Hand.cpp.i

Library/CMakeFiles/Library.dir/src/Hand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/Hand.cpp.s"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/Hand.cpp -o CMakeFiles/Library.dir/src/Hand.cpp.s

Library/CMakeFiles/Library.dir/src/Player.cpp.o: Library/CMakeFiles/Library.dir/flags.make
Library/CMakeFiles/Library.dir/src/Player.cpp.o: ../Library/src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Library/CMakeFiles/Library.dir/src/Player.cpp.o"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/Player.cpp.o -c /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/Player.cpp

Library/CMakeFiles/Library.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/Player.cpp.i"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/Player.cpp > CMakeFiles/Library.dir/src/Player.cpp.i

Library/CMakeFiles/Library.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/Player.cpp.s"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/Player.cpp -o CMakeFiles/Library.dir/src/Player.cpp.s

Library/CMakeFiles/Library.dir/src/PlayerManager.cpp.o: Library/CMakeFiles/Library.dir/flags.make
Library/CMakeFiles/Library.dir/src/PlayerManager.cpp.o: ../Library/src/PlayerManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object Library/CMakeFiles/Library.dir/src/PlayerManager.cpp.o"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/PlayerManager.cpp.o -c /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/PlayerManager.cpp

Library/CMakeFiles/Library.dir/src/PlayerManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/PlayerManager.cpp.i"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/PlayerManager.cpp > CMakeFiles/Library.dir/src/PlayerManager.cpp.i

Library/CMakeFiles/Library.dir/src/PlayerManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/PlayerManager.cpp.s"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/PlayerManager.cpp -o CMakeFiles/Library.dir/src/PlayerManager.cpp.s

Library/CMakeFiles/Library.dir/src/PlayerRepository.cpp.o: Library/CMakeFiles/Library.dir/flags.make
Library/CMakeFiles/Library.dir/src/PlayerRepository.cpp.o: ../Library/src/PlayerRepository.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object Library/CMakeFiles/Library.dir/src/PlayerRepository.cpp.o"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/PlayerRepository.cpp.o -c /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/PlayerRepository.cpp

Library/CMakeFiles/Library.dir/src/PlayerRepository.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/PlayerRepository.cpp.i"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/PlayerRepository.cpp > CMakeFiles/Library.dir/src/PlayerRepository.cpp.i

Library/CMakeFiles/Library.dir/src/PlayerRepository.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/PlayerRepository.cpp.s"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/PlayerRepository.cpp -o CMakeFiles/Library.dir/src/PlayerRepository.cpp.s

Library/CMakeFiles/Library.dir/src/Table.cpp.o: Library/CMakeFiles/Library.dir/flags.make
Library/CMakeFiles/Library.dir/src/Table.cpp.o: ../Library/src/Table.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object Library/CMakeFiles/Library.dir/src/Table.cpp.o"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/Table.cpp.o -c /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/Table.cpp

Library/CMakeFiles/Library.dir/src/Table.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/Table.cpp.i"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/Table.cpp > CMakeFiles/Library.dir/src/Table.cpp.i

Library/CMakeFiles/Library.dir/src/Table.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/Table.cpp.s"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/Table.cpp -o CMakeFiles/Library.dir/src/Table.cpp.s

Library/CMakeFiles/Library.dir/src/CardRepositoryException.cpp.o: Library/CMakeFiles/Library.dir/flags.make
Library/CMakeFiles/Library.dir/src/CardRepositoryException.cpp.o: ../Library/src/CardRepositoryException.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object Library/CMakeFiles/Library.dir/src/CardRepositoryException.cpp.o"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/CardRepositoryException.cpp.o -c /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/CardRepositoryException.cpp

Library/CMakeFiles/Library.dir/src/CardRepositoryException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/CardRepositoryException.cpp.i"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/CardRepositoryException.cpp > CMakeFiles/Library.dir/src/CardRepositoryException.cpp.i

Library/CMakeFiles/Library.dir/src/CardRepositoryException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/CardRepositoryException.cpp.s"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/CardRepositoryException.cpp -o CMakeFiles/Library.dir/src/CardRepositoryException.cpp.s

Library/CMakeFiles/Library.dir/src/PlayerRepositoryException.cpp.o: Library/CMakeFiles/Library.dir/flags.make
Library/CMakeFiles/Library.dir/src/PlayerRepositoryException.cpp.o: ../Library/src/PlayerRepositoryException.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object Library/CMakeFiles/Library.dir/src/PlayerRepositoryException.cpp.o"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/PlayerRepositoryException.cpp.o -c /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/PlayerRepositoryException.cpp

Library/CMakeFiles/Library.dir/src/PlayerRepositoryException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/PlayerRepositoryException.cpp.i"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/PlayerRepositoryException.cpp > CMakeFiles/Library.dir/src/PlayerRepositoryException.cpp.i

Library/CMakeFiles/Library.dir/src/PlayerRepositoryException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/PlayerRepositoryException.cpp.s"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/PlayerRepositoryException.cpp -o CMakeFiles/Library.dir/src/PlayerRepositoryException.cpp.s

Library/CMakeFiles/Library.dir/src/TableException.cpp.o: Library/CMakeFiles/Library.dir/flags.make
Library/CMakeFiles/Library.dir/src/TableException.cpp.o: ../Library/src/TableException.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object Library/CMakeFiles/Library.dir/src/TableException.cpp.o"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/TableException.cpp.o -c /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/TableException.cpp

Library/CMakeFiles/Library.dir/src/TableException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/TableException.cpp.i"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/TableException.cpp > CMakeFiles/Library.dir/src/TableException.cpp.i

Library/CMakeFiles/Library.dir/src/TableException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/TableException.cpp.s"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/BlackJack/Projekt_1.0/Library/src/TableException.cpp -o CMakeFiles/Library.dir/src/TableException.cpp.s

# Object files for target Library
Library_OBJECTS = \
"CMakeFiles/Library.dir/src/Card.cpp.o" \
"CMakeFiles/Library.dir/src/CardRepository.cpp.o" \
"CMakeFiles/Library.dir/src/CardManager.cpp.o" \
"CMakeFiles/Library.dir/src/Hand.cpp.o" \
"CMakeFiles/Library.dir/src/Player.cpp.o" \
"CMakeFiles/Library.dir/src/PlayerManager.cpp.o" \
"CMakeFiles/Library.dir/src/PlayerRepository.cpp.o" \
"CMakeFiles/Library.dir/src/Table.cpp.o" \
"CMakeFiles/Library.dir/src/CardRepositoryException.cpp.o" \
"CMakeFiles/Library.dir/src/PlayerRepositoryException.cpp.o" \
"CMakeFiles/Library.dir/src/TableException.cpp.o"

# External object files for target Library
Library_EXTERNAL_OBJECTS =

Library/libLibrary.a: Library/CMakeFiles/Library.dir/src/Card.cpp.o
Library/libLibrary.a: Library/CMakeFiles/Library.dir/src/CardRepository.cpp.o
Library/libLibrary.a: Library/CMakeFiles/Library.dir/src/CardManager.cpp.o
Library/libLibrary.a: Library/CMakeFiles/Library.dir/src/Hand.cpp.o
Library/libLibrary.a: Library/CMakeFiles/Library.dir/src/Player.cpp.o
Library/libLibrary.a: Library/CMakeFiles/Library.dir/src/PlayerManager.cpp.o
Library/libLibrary.a: Library/CMakeFiles/Library.dir/src/PlayerRepository.cpp.o
Library/libLibrary.a: Library/CMakeFiles/Library.dir/src/Table.cpp.o
Library/libLibrary.a: Library/CMakeFiles/Library.dir/src/CardRepositoryException.cpp.o
Library/libLibrary.a: Library/CMakeFiles/Library.dir/src/PlayerRepositoryException.cpp.o
Library/libLibrary.a: Library/CMakeFiles/Library.dir/src/TableException.cpp.o
Library/libLibrary.a: Library/CMakeFiles/Library.dir/build.make
Library/libLibrary.a: Library/CMakeFiles/Library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX static library libLibrary.a"
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && $(CMAKE_COMMAND) -P CMakeFiles/Library.dir/cmake_clean_target.cmake
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Library.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Library/CMakeFiles/Library.dir/build: Library/libLibrary.a

.PHONY : Library/CMakeFiles/Library.dir/build

Library/CMakeFiles/Library.dir/clean:
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library && $(CMAKE_COMMAND) -P CMakeFiles/Library.dir/cmake_clean.cmake
.PHONY : Library/CMakeFiles/Library.dir/clean

Library/CMakeFiles/Library.dir/depend:
	cd /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/Pulpit/BlackJack/Projekt_1.0 /home/student/Pulpit/BlackJack/Projekt_1.0/Library /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library /home/student/Pulpit/BlackJack/Projekt_1.0/cmake-build-debug/Library/CMakeFiles/Library.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Library/CMakeFiles/Library.dir/depend

