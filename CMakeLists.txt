cmake_minimum_required(VERSION 3.7)
project(MarsRoverSimulator)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(libraries/sdl_cpp_wrapper)

add_executable(MarsRoverSimulator
        main.cpp)
target_link_libraries(MarsRoverSimulator
        sdl-cpp)
