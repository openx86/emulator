//
// Created by 86759 on 2022-01-15.
//

#include "debug.h"

#include "../register/GeneralRegister.h"
#include "../register/ProgramRegister.h"

using namespace debug;

void debug::dump() {
    printf("ProgramRegister::EIP() = 0x%08X\n", ProgramRegister::EIP());
    printf("GeneralRegister::EAX() = 0x%08X\n", GeneralRegister::EAX());
    printf("GeneralRegister::EBX() = 0x%08X\n", GeneralRegister::EBX());
    printf("GeneralRegister::ECX() = 0x%08X\n", GeneralRegister::ECX());
    printf("GeneralRegister::EDX() = 0x%08X\n", GeneralRegister::EDX());
    printf("GeneralRegister::ESI() = 0x%08X\n", GeneralRegister::ESI());
    printf("GeneralRegister::EDI() = 0x%08X\n", GeneralRegister::EDI());
    printf("GeneralRegister::EBP() = 0x%08X\n", GeneralRegister::EBP());
    printf("GeneralRegister::ESP() = 0x%08X\n", GeneralRegister::ESP());
}
