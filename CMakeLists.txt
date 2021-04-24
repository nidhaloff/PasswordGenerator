
cmake_minimum_required(VERSION 3.16.3)
project (passwordGenerator)

add_library(passGen
  STATIC
    passGen.cpp
  )


add_executable(passwordGenerator main.cpp)
target_link_libraries(passwordGenerator passGen)