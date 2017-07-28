cmake_minimum_required(VERSION 3.7)

add_executable(MarsRoverSimulator
        main.cpp)
target_link_libraries(MarsRoverSimulator
        sdl-cpp)
