add_library(execute execute.cpp)
add_library(decode decode.cpp)
target_link_libraries(
        emulator
        PUBLIC
        execute
        decode
)
