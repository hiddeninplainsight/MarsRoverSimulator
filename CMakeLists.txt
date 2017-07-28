cmake_minimum_required(VERSION 3.7)
project(mars-rover-simulator)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

add_subdirectory(libraries/sdl_cpp_wrapper)
add_subdirectory(compiler)
add_subdirectory(mars-rover-simulator)

add_subdirectory(libraries/googletest)
add_subdirectory(compiler-tests)
