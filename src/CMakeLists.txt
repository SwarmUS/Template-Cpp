cmake_minimum_required(VERSION 3.10)

set(This ${CMAKE_PROJECT_NAME})

set(Headers 
    hal/register.hpp
)

set(Sources

    main.cpp

    hal/register.cpp

    spi/read.cpp
)

add_executable(${This}_run ${Sources})

add_library(${This}_lib STATIC ${Sources} ${Headers})