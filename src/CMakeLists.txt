cmake_minimum_required(VERSION 3.20)
project(emulator)
set(CMAKE_CXX_STANDARD 17)

add_executable(emulator main.cpp)

add_library(register register.h register.cpp)
target_link_libraries(emulator register)
