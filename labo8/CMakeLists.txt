cmake_minimum_required(VERSION 3.10.0)
project(labo8 VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(labo8 
    src/main.c
    src/strutils.c
)

