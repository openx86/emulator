//
// Created by 86759 on 2022-01-12.
//

#ifndef EMULATOR_UTIL_H
#define EMULATOR_UTIL_H

#include <bitset>

#include "register.h"

namespace util {

    enum bit_width {
        bit_8 = 8,
        bit_16 = 16,
        bit_32 = 32,
    };

    bit_width get_current_bit() {
        const auto CR0 = ControlRegister::CR[0];
        std::bitset<sizeof(CR0)> CR0_bit(CR0);
        const auto PE = CR0_bit[0];
        if (PE == 0) {
            return bit_width::bit_8;
        } else {
//            TODO: need to check segment descriptor D bit
            return bit_width::bit_8;
        }
    }

}


#endif //EMULATOR_UTIL_H
