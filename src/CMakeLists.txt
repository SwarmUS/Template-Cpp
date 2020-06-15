cmake_minimum_required(VERSION 3.2)

set(This ${CMAKE_PROJECT_NAME})

set(Headers 

)

set(Sources
    hal/hal.cpp

    spi/spi.cpp
)

add_executable(${THIS}_run main.cpp ${Sources})

add_library(${THIS}_lib STATIC ${Sources})



if(MSVC)
  target_compile_options(${THIS}_lib PRIVATE 
  /W4 
  /WX #Disable this if you do not want to treat all warning as error
  )
else()
  target_compile_options(${THIS}_lib PRIVATE 
  -Wall 
  -Wextra 
  -pedantic
  -Werror #Disable this if you do not want to treat all warning as error
  ) 
endif()