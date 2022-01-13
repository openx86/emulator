//
// Created by 86759 on 2022-01-14.
//

#ifndef EMULATOR_FLAGSREGISTER_H
#define EMULATOR_FLAGSREGISTER_H

#include <cstdint>

class FlagsRegister {
public:
    static uint32_t EFLAGS_r;
    static uint32_t EFLAGS();
    static void EFLAGS(uint32_t value);
};


#endif //EMULATOR_FLAGSREGISTER_H
