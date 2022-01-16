add_library(memory memory.cpp)
target_link_libraries(
        emulator
        PUBLIC
        memory
)
