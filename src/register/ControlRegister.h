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
    static uint8_t PE() {
        const auto CR0 = ControlRegister::CR[0];
        std::bitset<sizeof(CR0)> CR0_bit(CR0);
        return CR0_bit[0];
    }
};


#endif //EMULATOR_CONTROLREGISTER_H
