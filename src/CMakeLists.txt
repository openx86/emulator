cmake_minimum_required(VERSION 3.20)
project(emulator)
set(CMAKE_CXX_STANDARD 17)

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.cpp register.h)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(emulator ${SOURCE_FILES})
