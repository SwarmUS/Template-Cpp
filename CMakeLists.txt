cmake_minimum_required(VERSION 3.10)

set(This Template_CXX)

set(CMAKE_CXX_FLAGS "-g -Wall")

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(external)
