include(${gtest_SOURCE_DIR}/cmake/internal_utils.cmake)
config_compiler_and_linker()


add_executable(compiler-tests
        first.test.cpp
        )

target_link_libraries(compiler-tests PRIVATE
        gmock
        gmock_main
        compiler
        )

target_include_directories(compiler-tests PRIVATE
        "${gmock_SOURCE_DIR}/include"
        "${gtest_SOURCE_DIR}/include"
        )
