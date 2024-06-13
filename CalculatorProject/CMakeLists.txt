cmake_minimum_required(VERSION 3.10)
project(CalculatorProject)

# Установка шляху до GoogleTest
set(GOOGLETEST_ROOT ${CMAKE_SOURCE_DIR}/../googletest)

# Додавання підкаталогів
add_subdirectory(src)
add_subdirectory(tests)