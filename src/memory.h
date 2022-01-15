//
// Created by 86759 on 2022-01-14.
//

#ifndef EMULATOR_MEMORY_H
#define EMULATOR_MEMORY_H

#include <cstdint>

class memory {
public:
    static uint8_t* heap;

    static bool init(size_t size);
    static uint8_t* load(size_t offset);
    static void store(size_t offset, size_t length, const uint8_t* value);
};


#endif //EMULATOR_MEMORY_H
