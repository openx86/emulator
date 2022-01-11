//
// Created by 86759 on 2022-01-12.
//

#include "register.h"

uint32_t GeneralRegister::EAX;
uint32_t GeneralRegister::EBX;
uint32_t GeneralRegister::ECX;
uint32_t GeneralRegister::EDX;
uint32_t GeneralRegister::ESI;
uint32_t GeneralRegister::EDI;
uint32_t GeneralRegister::EBP;
uint32_t GeneralRegister::ESP;
uint32_t GeneralRegister::EIP;
int GeneralRegister::init() {
    GeneralRegister::EAX = 0;
    GeneralRegister::EBX = 0;
    GeneralRegister::ECX = 0;
    GeneralRegister::EDX = 0;
    GeneralRegister::ESI = 0;
    GeneralRegister::EDI = 0;
    GeneralRegister::EBP = 0;
    GeneralRegister::ESP = 0;
    GeneralRegister::EIP = 0;
    return 0;
}

uint16_t SegmentRegister::CS;
uint16_t SegmentRegister::SS;
uint16_t SegmentRegister::DS;
uint16_t SegmentRegister::ES;
uint16_t SegmentRegister::FS;
uint16_t SegmentRegister::GS;
int SegmentRegister::init() {
    SegmentRegister::CS = 0;
    SegmentRegister::SS = 0;
    SegmentRegister::DS = 0;
    SegmentRegister::ES = 0;
    SegmentRegister::FS = 0;
    SegmentRegister::GS = 0;
    return 0;
}

uint32_t FlagsRegister::EFLAGS;
int FlagsRegister::init() {
    FlagsRegister::EFLAGS = 0;
    return 0;
}

uint32_t ControlRegister::CR[4];
int ControlRegister::init() {
    ControlRegister::CR[0] = 0;
    ControlRegister::CR[1] = 0;
    ControlRegister::CR[2] = 0;
    ControlRegister::CR[3] = 0;
    return 0;
}

uint64_t SystemAddressRegister::GDTR;
uint64_t SystemAddressRegister::IDTR;
uint64_t SystemAddressRegister::LDTR;
int SystemAddressRegister::init() {
    SystemAddressRegister::GDTR = 0;
    SystemAddressRegister::IDTR = 0;
    SystemAddressRegister::LDTR = 0;
    return 0;
}

