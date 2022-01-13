//
// Created by 86759 on 2022-01-14.
//

#include "memory.h"
#include <cstdlib>
#include <cstring>

uint8_t* memory::heap;

bool memory::init(size_t size) {
    heap = static_cast<uint8_t *>(malloc(size));
    return heap != nullptr;
}

uint8_t* memory::load(size_t offset) {
    const auto base = heap + offset;
    return base;
}

void memory::store(size_t offset, size_t length, const uint8_t* value) {
    const auto base = heap + offset;
    for (int i = 0; i < length; ++i) {
        const auto ptr = base + i;
        *ptr = value[i];
    }
}
