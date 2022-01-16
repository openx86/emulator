add_library(bin bin.cpp)
add_library(debuger debug.cpp)
target_link_libraries(
        emulator
        PUBLIC
        bin
        debuger
)
