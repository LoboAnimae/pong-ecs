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
CMAKE_SOURCE_DIR = /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build

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
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PongProject.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/main.cpp.o -MF CMakeFiles/PongProject.dir/src/main.cpp.o.d -o CMakeFiles/PongProject.dir/src/main.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/main.cpp

CMakeFiles/PongProject.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/main.cpp > CMakeFiles/PongProject.dir/src/main.cpp.i

CMakeFiles/PongProject.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/main.cpp -o CMakeFiles/PongProject.dir/src/main.cpp.s

CMakeFiles/PongProject.dir/src/Game/GameController.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Game/GameController.cpp.o: ../src/Game/GameController.cpp
CMakeFiles/PongProject.dir/src/Game/GameController.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PongProject.dir/src/Game/GameController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Game/GameController.cpp.o -MF CMakeFiles/PongProject.dir/src/Game/GameController.cpp.o.d -o CMakeFiles/PongProject.dir/src/Game/GameController.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Game/GameController.cpp

CMakeFiles/PongProject.dir/src/Game/GameController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Game/GameController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Game/GameController.cpp > CMakeFiles/PongProject.dir/src/Game/GameController.cpp.i

CMakeFiles/PongProject.dir/src/Game/GameController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Game/GameController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Game/GameController.cpp -o CMakeFiles/PongProject.dir/src/Game/GameController.cpp.s

CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.o: ../src/Controller/Controller.cpp
CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.o -MF CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.o.d -o CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Controller/Controller.cpp

CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Controller/Controller.cpp > CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.i

CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Controller/Controller.cpp -o CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.s

CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.o: ../src/Loop/Loop.cpp
CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.o -MF CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.o.d -o CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Loop/Loop.cpp

CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Loop/Loop.cpp > CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.i

CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Loop/Loop.cpp -o CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.s

CMakeFiles/PongProject.dir/src/Time/Time.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Time/Time.cpp.o: ../src/Time/Time.cpp
CMakeFiles/PongProject.dir/src/Time/Time.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PongProject.dir/src/Time/Time.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Time/Time.cpp.o -MF CMakeFiles/PongProject.dir/src/Time/Time.cpp.o.d -o CMakeFiles/PongProject.dir/src/Time/Time.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Time/Time.cpp

CMakeFiles/PongProject.dir/src/Time/Time.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Time/Time.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Time/Time.cpp > CMakeFiles/PongProject.dir/src/Time/Time.cpp.i

CMakeFiles/PongProject.dir/src/Time/Time.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Time/Time.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Time/Time.cpp -o CMakeFiles/PongProject.dir/src/Time/Time.cpp.s

CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.o: ../src/Events/EventManager.cpp
CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.o -MF CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.o.d -o CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Events/EventManager.cpp

CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Events/EventManager.cpp > CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.i

CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Events/EventManager.cpp -o CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.s

CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.o: ../src/Screen/Screen.cpp
CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.o -MF CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.o.d -o CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Screen/Screen.cpp

CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Screen/Screen.cpp > CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.i

CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Screen/Screen.cpp -o CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.s

CMakeFiles/PongProject.dir/src/Error/Error.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Error/Error.cpp.o: ../src/Error/Error.cpp
CMakeFiles/PongProject.dir/src/Error/Error.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/PongProject.dir/src/Error/Error.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Error/Error.cpp.o -MF CMakeFiles/PongProject.dir/src/Error/Error.cpp.o.d -o CMakeFiles/PongProject.dir/src/Error/Error.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Error/Error.cpp

CMakeFiles/PongProject.dir/src/Error/Error.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Error/Error.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Error/Error.cpp > CMakeFiles/PongProject.dir/src/Error/Error.cpp.i

CMakeFiles/PongProject.dir/src/Error/Error.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Error/Error.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Error/Error.cpp -o CMakeFiles/PongProject.dir/src/Error/Error.cpp.s

CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.o: ../src/Entity/Entity.cpp
CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.o -MF CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.o.d -o CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Entity/Entity.cpp

CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Entity/Entity.cpp > CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.i

CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Entity/Entity.cpp -o CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.s

CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.o: ../src/Entity/ControllableEntity.cpp
CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.o -MF CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.o.d -o CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Entity/ControllableEntity.cpp

CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Entity/ControllableEntity.cpp > CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.i

CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Entity/ControllableEntity.cpp -o CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.s

CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.o: ../src/Entity/Collider.cpp
CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.o -MF CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.o.d -o CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Entity/Collider.cpp

CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Entity/Collider.cpp > CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.i

CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Entity/Collider.cpp -o CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.s

CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.o: ../src/Console/ConsoleMessage.cpp
CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.o -MF CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.o.d -o CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Console/ConsoleMessage.cpp

CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Console/ConsoleMessage.cpp > CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.i

CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Console/ConsoleMessage.cpp -o CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.s

CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.o: ../src/Coords/Coordinates.cpp
CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.o -MF CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.o.d -o CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Coords/Coordinates.cpp

CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Coords/Coordinates.cpp > CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.i

CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Coords/Coordinates.cpp -o CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.s

CMakeFiles/PongProject.dir/src/Misc.cpp.o: CMakeFiles/PongProject.dir/flags.make
CMakeFiles/PongProject.dir/src/Misc.cpp.o: ../src/Misc.cpp
CMakeFiles/PongProject.dir/src/Misc.cpp.o: CMakeFiles/PongProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/PongProject.dir/src/Misc.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PongProject.dir/src/Misc.cpp.o -MF CMakeFiles/PongProject.dir/src/Misc.cpp.o.d -o CMakeFiles/PongProject.dir/src/Misc.cpp.o -c /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Misc.cpp

CMakeFiles/PongProject.dir/src/Misc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PongProject.dir/src/Misc.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Misc.cpp > CMakeFiles/PongProject.dir/src/Misc.cpp.i

CMakeFiles/PongProject.dir/src/Misc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PongProject.dir/src/Misc.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/src/Misc.cpp -o CMakeFiles/PongProject.dir/src/Misc.cpp.s

# Object files for target PongProject
PongProject_OBJECTS = \
"CMakeFiles/PongProject.dir/src/main.cpp.o" \
"CMakeFiles/PongProject.dir/src/Game/GameController.cpp.o" \
"CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.o" \
"CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.o" \
"CMakeFiles/PongProject.dir/src/Time/Time.cpp.o" \
"CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.o" \
"CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.o" \
"CMakeFiles/PongProject.dir/src/Error/Error.cpp.o" \
"CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.o" \
"CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.o" \
"CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.o" \
"CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.o" \
"CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.o" \
"CMakeFiles/PongProject.dir/src/Misc.cpp.o"

# External object files for target PongProject
PongProject_EXTERNAL_OBJECTS =

PongProject: CMakeFiles/PongProject.dir/src/main.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Game/GameController.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Controller/Controller.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Loop/Loop.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Time/Time.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Events/EventManager.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Screen/Screen.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Error/Error.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Entity/Entity.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Entity/ControllableEntity.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Entity/Collider.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Console/ConsoleMessage.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Coords/Coordinates.cpp.o
PongProject: CMakeFiles/PongProject.dir/src/Misc.cpp.o
PongProject: CMakeFiles/PongProject.dir/build.make
PongProject: CMakeFiles/PongProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable PongProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PongProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PongProject.dir/build: PongProject
.PHONY : CMakeFiles/PongProject.dir/build

CMakeFiles/PongProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PongProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PongProject.dir/clean

CMakeFiles/PongProject.dir/depend:
	cd /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build /home/yagdrassyl/Documents/Code/University/GameEngineArchitecture/PongProject/build/CMakeFiles/PongProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PongProject.dir/depend

