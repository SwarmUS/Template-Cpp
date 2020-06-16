cmake_minimum_required(VERSION 3.2)

set(THIS ${CMAKE_PROJECT_NAME})

set(Headers 

)

set(Sources
    
)

add_subdirectory(hal)
add_subdirectory(spi)

add_executable(${THIS} main.cpp ${Sources})

#linking dependencies
target_link_libraries(${THIS} PUBLIC 
  spi
  hal
)

#including headers
target_include_directories(${THIS} PUBLIC ${PROJECT_SOURCE_DIR}/include)

#Microsoft visual c++
if(MSVC)
  target_compile_options(${THIS} PRIVATE 
  /W4 
#  /WX #Enable this if you want to enable warnings as errors
  )
#GNU and CLAN supports those flags
else()
  target_compile_options(${THIS} PRIVATE 
  -Wall 
  -Wextra 
  -pedantic
#  -Werror #Enable this if you want to enable warnings as errors
  ) 
endif()