//
// Created by 86759 on 2022-01-12.
//

#ifndef EMULATOR_REGISTER_H
#define EMULATOR_REGISTER_H

#include <cstdlib>
#include <cstdint>
#include <bitset>

class ProgramRegister {
public:
    static uint32_t IP_r;
    static uint16_t IP();
    static uint32_t EIP();
};

class GeneralRegister {
public:
    static uint32_t EAX;
    static uint32_t EBX;
    static uint32_t ECX;
    static uint32_t EDX;
    static uint32_t ESI;
    static uint32_t EDI;
    static uint32_t EBP;
    static uint32_t ESP;
    static uint32_t EIP;
    static int init();
};

class SegmentRegister {
public:
    static uint16_t CS;
    static uint16_t SS;
    static uint16_t DS;
    static uint16_t ES;
    static uint16_t FS;
    static uint16_t GS;
};

class FlagsRegister {
public:
    static uint32_t EFLAGS;
    static int init();
};

class ControlRegister {
public:
    static uint32_t CR[4];
    static int init();
    static uint8_t PE() {
        const auto CR0 = ControlRegister::CR[0];
        std::bitset<sizeof(CR0)> CR0_bit(CR0);
        return CR0_bit[0];
    }
};

class SystemAddressRegister {
public:
    static uint64_t GDTR;
    static uint64_t IDTR;
    static uint64_t LDTR;
    static int init();
};

#endif //EMULATOR_REGISTER_H
