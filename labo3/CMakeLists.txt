cmake_minimum_required(VERSION 3.16)
project(my_project C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(exercice0
    src/exercice0.c
)

target_include_directories(exercice0 PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Helpful warnings (GCC/Clang)
target_compile_options(exercice0 PRIVATE -Wall -Wextra -Wpedantic)

# Debug symbols by default if you build Debug
# (CMake already adds -g in Debug mode for GCC/Clang)
