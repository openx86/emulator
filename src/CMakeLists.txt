add_executable(emulator definition.h main.cpp)

add_subdirectory(core)
target_link_libraries(
        emulator
        execute
        decode
)

add_subdirectory(interface)
target_link_libraries(
        emulator
        memory
)

add_subdirectory(register)
target_link_libraries(
        emulator
        ControlRegister
        FlagsRegister
        GeneralRegister
        ProgramRegister
        SegmentRegister
        SystemAddressRegister
)

add_subdirectory(util)
target_link_libraries(
        emulator
        bin
        debuger
)

