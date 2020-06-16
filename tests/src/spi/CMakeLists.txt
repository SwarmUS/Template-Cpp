set(THIS spi_tests)

set(Sources
    spi_tests.cpp
)

add_executable(${THIS} ${Sources})

#including headers
target_include_directories(${THIS} PUBLIC ${PROJECT_SOURCE_DIR}/include)

#add dependencies here
target_link_libraries(${THIS} PUBLIC
#external
    gtest
    gmock

#internal code
    spi
    hal
)

#For those who uses ctest
add_test(
    NAME ${THIS}
    COMMAND ${THIS}
)