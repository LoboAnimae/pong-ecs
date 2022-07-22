cmake_minimum_required(VERSION 3.22)
project(PongProject)

set(CMAKE_CXX_STANDARD 23)

add_executable(PongProject src/main.cpp src/Game/GameController.cpp src/Game/GameController.h src/Controller/Controller.cpp src/Controller/Controller.h src/Loop/Loop.cpp src/Loop/Loop.h src/Time/Time.cpp src/Time/Time.h src/Events/Event.cpp src/Events/Event.h src/Screen/Screen.cpp src/Screen/Screen.h)
include_directories(/Library/Frameworks/SDL2.framework/Headers)