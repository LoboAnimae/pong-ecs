cmake_minimum_required(VERSION 3.22)
project(PongProject VERSION 0.1)

set(CMAKE_CXX_STANDARD 23)

add_executable(PongProject src/main.cpp src/Systems/SystemsManager.cpp src/Systems/SystemsManager.h)

add_subdirectory(src/Console)
add_subdirectory(src/Coords)
add_subdirectory(src/Entity)
add_subdirectory(src/Events)
add_subdirectory(src/Game)
add_subdirectory(src/Misc)
add_subdirectory(src/Screen)
add_subdirectory(src/Static)
add_subdirectory(src/Structs)
add_subdirectory(src/Time)
add_subdirectory(src/Error)
add_subdirectory(src/Systems)


target_include_directories(${PROJECT_NAME}
        PUBLIC src/Console
        PUBLIC src/Coords
        PUBLIC src/Entity
        PUBLIC src/Events
        PUBLIC src/Game
        PUBLIC src/Misc
        PUBLIC src/Screen
        PUBLIC src/Static
        PUBLIC src/Structs
        PUBLIC src/Time
        PUBLIC src/Error
        PUBLIC src/Systems
        )

target_link_directories(${PROJECT_NAME}
        PRIVATE src/Console
        PRIVATE src/Coords
        PRIVATE src/Entity
        PRIVATE src/Events
        PRIVATE src/Game
        PRIVATE src/Misc
        PRIVATE src/Screen
        PRIVATE src/Static
        PRIVATE src/Structs
        PRIVATE src/Time
        PRIVATE src/Error
        PRIVATE src/Systems
        )

target_link_libraries(${PROJECT_NAME}
        SDL2
        Console
        Coords
        Entity
        Events
        Error
        Game
        Misc
        Screen
        Static
        Structs
        Time
        Systems
        )