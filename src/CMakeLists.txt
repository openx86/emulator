cmake_minimum_required(VERSION 3.20)
project(emulator)
set(CMAKE_CXX_STANDARD 20)

add_executable(emulator main.cpp)

add_library(register register.h register.cpp)
target_link_libraries(emulator register)

add_library(util util.h util.cpp)
target_link_libraries(emulator util)

add_library(decode decode.h decode.cpp)
target_link_libraries(emulator decode)
