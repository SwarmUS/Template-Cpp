cmake_minimum_required(VERSION 3.10)

set(This Tests)

set(Sources
    ExampleTests.cpp
    ExampleTests2.cpp
    main.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest
    ${CMAKE_PROJECT_NAME}_lib
)

add_test(
    NAME ${This}
    COMMAND ${This}
)