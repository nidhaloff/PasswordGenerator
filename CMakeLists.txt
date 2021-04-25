
cmake_minimum_required(VERSION 3.16.3)
project (passwordGenerator VERSION 1.0)

add_library(passGen
  STATIC
    passGen.cpp
    passGen.h
  )


add_executable(passwordGenerator main.cpp)
target_link_libraries(passwordGenerator passGen)