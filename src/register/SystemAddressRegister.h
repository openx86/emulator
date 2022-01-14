//
// Created by 86759 on 2022-01-14.
//

#ifndef EMULATOR_SYSTEMADDRESSREGISTER_H
#define EMULATOR_SYSTEMADDRESSREGISTER_H

#include <cstdint>

typedef struct {
    uint16_t limit;
    uint32_t base;
} system_address_descriptor_t;

class SystemAddressRegister {
public:
    static uint64_t GDTR_r;
    static uint64_t IDTR_r;
//    static uint64_t LDTR_r;

    static uint32_t* GDT;
    static uint32_t* IDT;
//    static uint32_t* LDT;

    static system_address_descriptor_t GDTR();
    static system_address_descriptor_t IDTR();
//    static system_address_descriptor_t LDTR();

    static void GDTR(system_address_descriptor_t value);
    static void IDTR(system_address_descriptor_t value);
//    static void LDTR(system_address_descriptor_t value);
};


#endif //EMULATOR_SYSTEMADDRESSREGISTER_H
