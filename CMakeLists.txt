cmake_minimum_required(VERSION 3.10)

project(hello_world)

# Set build directory
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

add_executable(hello_world "Exercism/#0 hello_world.cpp")

set(EXECUTABLE_OUTPUT_PATH ../exec)