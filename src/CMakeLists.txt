cmake_minimum_required(VERSION 3.20)
project(emulator)
set(CMAKE_CXX_STANDARD 20)

add_executable(emulator main.cpp)

add_subdirectory(register)
target_link_libraries(
        emulator
        GeneralRegister
        ProgramRegister
        SegmentRegister
        FlagsRegister
        ControlRegister
        SystemAddressRegister
)

add_subdirectory(decode)
target_link_libraries(emulator decode)

add_library(util util.h util.cpp)
target_link_libraries(emulator util)
