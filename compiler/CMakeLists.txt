find_package(Boost COMPONENTS system filesystem REQUIRED)

add_library(compiler
        file_finder.cpp)
target_include_directories(compiler PUBLIC
        ..)
target_link_libraries(compiler PUBLIC
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        )
