add_library(ControlRegister ControlRegister.cpp)
add_library(FlagsRegister FlagsRegister.cpp)
add_library(GeneralRegister GeneralRegister.cpp)
add_library(ProgramRegister ProgramRegister.cpp)
add_library(SegmentRegister SegmentRegister.cpp)
add_library(SystemAddressRegister SystemAddressRegister.cpp)
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
