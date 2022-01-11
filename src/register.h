//
// Created by 86759 on 2022-01-12.
//

#ifndef EMULATOR_REGISTER_H
#define EMULATOR_REGISTER_H

#include <cstdlib>
#include <cstdint>

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
    static int init();
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
};

class SystemAddressRegister {
public:
    static uint64_t GDTR;
    static uint64_t IDTR;
    static uint64_t LDTR;
    static int init();
};

#endif //EMULATOR_REGISTER_H
