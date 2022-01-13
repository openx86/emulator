//
// Created by 86759 on 2022-01-14.
//

#ifndef EMULATOR_SYSTEMADDRESSREGISTER_H
#define EMULATOR_SYSTEMADDRESSREGISTER_H

#include <cstdint>

class SystemAddressRegister {
public:
    static uint64_t GDTR;
    static uint64_t IDTR;
    static uint64_t LDTR;
};


#endif //EMULATOR_SYSTEMADDRESSREGISTER_H
