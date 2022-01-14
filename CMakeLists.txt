cmake_minimum_required(VERSION 3.21)
project(emulator)
set(CMAKE_CXX_STANDARD 20)

add_executable(emulator src/definition.h src/main.cpp)

add_subdirectory(src)
