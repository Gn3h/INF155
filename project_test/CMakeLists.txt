cmake_minimum_required(VERSION 3.16)
project(my_project C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(my_program
    src/main.c
    src/math_utils.c
)

target_include_directories(my_program PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Helpful warnings (GCC/Clang)
target_compile_options(my_program PRIVATE -Wall -Wextra -Wpedantic)

# Debug symbols by default if you build Debug
# (CMake already adds -g in Debug mode for GCC/Clang)
