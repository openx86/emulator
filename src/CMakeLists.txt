add_executable(emulator definition.h main.cpp)

add_subdirectory(interface)
target_link_libraries(
        emulator
        PUBLIC
        memory
)

add_subdirectory(core)
target_link_libraries(
        emulator
        PUBLIC
        execute
        decode
)

add_subdirectory(util)
target_link_libraries(
        emulator
        PUBLIC
        bin
        debuger
)

add_subdirectory(register)
target_link_libraries(
        emulator
        PUBLIC
        ControlRegister
        FlagsRegister
        GeneralRegister
        ProgramRegister
        SegmentRegister
        SystemAddressRegister
)
