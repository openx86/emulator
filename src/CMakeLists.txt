add_subdirectory(util)
target_link_libraries(
        emulator
        bin
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

add_subdirectory(decode)
target_link_libraries(emulator decode)

add_subdirectory(memory)
target_link_libraries(emulator memory)
