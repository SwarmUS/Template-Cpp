cmake_minimum_required(VERSION 3.10)

set(This ${CMAKE_PROJECT_NAME})

set(Headers 
    Example.hpp
)

set(Sources
    Example.cpp
)

add_executable(${This}_run ${Sources})

add_library(${This}_lib STATIC ${Sources} ${Headers})