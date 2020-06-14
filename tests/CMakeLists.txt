cmake_minimum_required(VERSION 3.10)
set(THIS "${CMAKE_PROJECT_NAME}_tests")

add_subdirectory(external)

set(Sources
    main.cpp
    src/spi/read_tests.cpp
    src/hal/register_tests.cpp
)

add_executable(${THIS} ${Sources})


target_link_libraries(${THIS} PUBLIC
    gtest
    ${CMAKE_PROJECT_NAME}_lib
)

add_test(
    NAME ${THIS}
    COMMAND ${THIS}
)