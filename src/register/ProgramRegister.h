//
// Created by 86759 on 2022-01-14.
//

#ifndef EMULATOR_PROGRAMREGISTER_H
#define EMULATOR_PROGRAMREGISTER_H

#include <cstdint>

class ProgramRegister {
public:
    static uint32_t IP_r;
    static uint16_t IP();
    static uint32_t EIP();
    static void IP(uint16_t value);
    static void EIP(uint32_t value);
};


#endif //EMULATOR_PROGRAMREGISTER_H
