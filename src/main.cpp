#include <cstdio>

#include "register/GeneralRegister.h"
#include "register/ProgramRegister.h"

int main() {
    printf("OpenX86 Emulator\n");

    printf("ProgramRegister::IP() = 0x%04X\n", ProgramRegister::IP());
    printf("ProgramRegister::EIP() = 0x%08X\n", ProgramRegister::EIP());

    printf("GeneralRegister::EAX() = 0x%08X\n", GeneralRegister::EAX());
    printf("GeneralRegister::AX() = 0x%04X\n", GeneralRegister::AX());
    printf("GeneralRegister::AH() = 0x%02X\n", GeneralRegister::AH());
    printf("GeneralRegister::AL() = 0x%02X\n", GeneralRegister::AL());

    return 0;
}

