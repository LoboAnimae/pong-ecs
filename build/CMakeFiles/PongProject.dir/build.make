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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs/build

# Include any dependencies generated for this target.
include CMakeFiles/PongProject.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PongProject.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PongProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PongProject.dir/flags.make

CMakeFiles/PongProject.dir/src/main.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/PongProject.dir/src/main.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PongProject.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/main.cpp.o -MF CMakeFiles/PongProject.dir/src/main.cpp.o.d -o CMakeFiles/PongProject.dir/src/main.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs/src/main.cpp

CMakeFiles/PongProject.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs/src/main.cpp > CMakeFiles/PongProject.dir/src/main.cpp.i

CMakeFiles/PongProject.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs/src/main.cpp -o CMakeFiles/PongProject.dir/src/main.cpp.s

# Object files for target PongProject
PongProject_OBJECTS = \
"CMakeFiles/PongProject.dir/src/main.cpp.o"

# External object files for target PongProject
PongProject_EXTERNAL_OBJECTS =

PongProject: CMakeFiles/PongProject.dir/src/main.cpp.o
PongProject: CMakeFiles/PongProject.dir/build.make
PongProject: src/Game/libGame.a
PongProject: CMakeFiles/PongProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PongProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PongProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PongProject.dir/build: PongProject
.PHONY : CMakeFiles/PongProject.dir/build

CMakeFiles/PongProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PongProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PongProject.dir/clean

CMakeFiles/PongProject.dir/depend:
	cd /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs/build /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs/build /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/pong-ecs/build/CMakeFiles/PongProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PongProject.dir/depend

