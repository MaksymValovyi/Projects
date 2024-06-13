enable_testing()

# Підключення Google Test
add_subdirectory(${GOOGLETEST_ROOT})

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runTests test_main.cpp)
target_link_libraries(runTests gtest gtest_main pthread my_lib)

add_test(NAME runTests COMMAND runTests)