enable_testing()

# Вказуємо шлях до Google Test
add_subdirectory(${CMAKE_SOURCE_DIR}/googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runTests test_main.cpp)
target_link_libraries(runTests gtest gtest_main pthread my_lib)

add_test(NAME runTests COMMAND runTests)