cmake_minimum_required(VERSION 3.7)

add_executable(mars-rover-simulator
        main.cpp)
target_link_libraries(mars-rover-simulator
        sdl-cpp)
