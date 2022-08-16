cmake_minimum_required(VERSION 3.22)
project(PongProject VERSION 0.1)

set(CMAKE_CXX_STANDARD 23)

add_executable(PongProject src/main.cpp)

add_subdirectory(src/Game)


target_include_directories(${PROJECT_NAME}
        PUBLIC src/Game
        )

target_link_directories(${PROJECT_NAME}
        PRIVATE src/Game
        )

target_link_libraries(${PROJECT_NAME}
        SDL2
        Game
        )