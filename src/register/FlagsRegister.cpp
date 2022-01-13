//
// Created by 86759 on 2022-01-14.
//

#include "FlagsRegister.h"

uint32_t FlagsRegister::EFLAGS_r = 0x00000000;

uint32_t FlagsRegister::EFLAGS() { return EFLAGS_r; }
void FlagsRegister::EFLAGS(uint32_t value) { EFLAGS_r = value; }
