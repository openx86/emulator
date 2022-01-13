//
// Created by 86759 on 2022-01-14.
//

#include "ControlRegister.h"

uint32_t ControlRegister::CR[4] = {0,0,0,0};

uint32_t ControlRegister::CR0() { return CR[0]; }
uint32_t ControlRegister::CR1() { return CR[1]; }
uint32_t ControlRegister::CR2() { return CR[2]; }
uint32_t ControlRegister::CR3() { return CR[3]; }

uint8_t ControlRegister::PE() {
    const auto CR0 = ControlRegister::CR[0];
    std::bitset<sizeof(CR0)> CR0_bit(CR0);
    return CR0_bit[0];
}
void ControlRegister::PE(uint8_t value) {
    const auto CR0 = ControlRegister::CR[0];
    std::bitset<sizeof(CR0)> CR0_bit(CR0);
    CR0_bit[0] = value;
}
