//
// Created by 86759 on 2022-01-14.
//

#include "SystemAddressRegister.h"
#include <cstring>

uint64_t SystemAddressRegister::GDTR_r;
uint64_t SystemAddressRegister::IDTR_r;
//uint64_t SystemAddressRegister::LDTR_r;

system_address_descriptor_t SystemAddressRegister::GDTR() {
    system_address_descriptor_t system_address_descriptor;
    memset(&system_address_descriptor, GDTR_r, sizeof(system_address_descriptor_t));
    return system_address_descriptor;
}
system_address_descriptor_t SystemAddressRegister::IDTR() {
    system_address_descriptor_t system_address_descriptor;
    memset(&system_address_descriptor, IDTR_r, sizeof(system_address_descriptor_t));
    return system_address_descriptor;
}
//system_address_descriptor_t SystemAddressRegister::LDTR() {
//    system_address_descriptor_t system_address_descriptor;
//    memset(&system_address_descriptor, LDTR_r, sizeof(system_address_descriptor_t));
//    return system_address_descriptor;
//}

void SystemAddressRegister::GDTR(system_address_descriptor_t value) {
    memset(&GDTR_r, value.base, sizeof(system_address_descriptor_t));
    memset(&SystemAddressRegister::GDTR_r + sizeof(value.base), value.limit, sizeof(system_address_descriptor_t));
    GDT = reinterpret_cast<uint32_t*>(value.base);
}
void SystemAddressRegister::IDTR(system_address_descriptor_t value) {
    memset(&IDTR_r, value.base, sizeof(system_address_descriptor_t));
    memset(&SystemAddressRegister::IDTR_r + sizeof(value.base), value.limit, sizeof(system_address_descriptor_t));
    IDT = reinterpret_cast<uint32_t*>(value.base);
}
//void SystemAddressRegister::LDTR(system_address_descriptor_t value) {
//    memset(&LDTR_r, value.base, sizeof(system_address_descriptor_t));
//    memset(&SystemAddressRegister::LDTR_r + sizeof(value.base), value.limit, sizeof(system_address_descriptor_t));
//    LDT = (uint32_t*)value.base;
//}
