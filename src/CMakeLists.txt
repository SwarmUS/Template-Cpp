cmake_minimum_required(VERSION 3.10)

set(This ${CMAKE_PROJECT_NAME})

set(Headers 

)

set(Sources
    main.cpp

    hal/hal.cpp

    spi/spi.cpp
)

add_executable(${THIS}_run ${Sources})

add_library(${THIS}_lib STATIC ${Sources})

#if(MSVC)
#  target_compile_options(${THIS}_run PRIVATE /W4 /WX)
#else()
#  target_compile_options(${THIS}_run PRIVATE -Wall -Wextra -pedantic -Werror)
#endif()