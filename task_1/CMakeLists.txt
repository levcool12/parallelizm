cmake_minimum_required(VERSION 3.10)
project(SinArray)

set(CMAKE_CXX_STANDARD 11)

add_executable(sin_array_float main.cpp)
target_compile_definitions(sin_array_float PRIVATE USE_FLOAT)

add_executable(sin_array_double main.cpp)