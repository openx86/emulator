add_executable(emulator definition.h main.cpp)

add_subdirectory(util)
target_link_libraries(
        emulator
        bin
        debuger
)

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

add_library(
        lib
        memory.h memory.cpp
        decode.h decode.cpp
        execute.h execute.cpp
)

target_link_libraries(
        emulator
        lib
)

