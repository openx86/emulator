//
// Created by 86759 on 2022-01-14.
//

#ifndef EMULATOR_CONTROLREGISTER_H
#define EMULATOR_CONTROLREGISTER_H

#include <cstdint>
#include <bitset>


class ControlRegister {
public:
    static uint32_t CR[4];

    static uint32_t CR0();
    static uint32_t CR1();
    static uint32_t CR2();
    static uint32_t CR3();

    static uint8_t PE();
    static void PE(uint8_t value);
};


#endif //EMULATOR_CONTROLREGISTER_H
