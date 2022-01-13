#include <cstdio>

#include "register/GeneralRegister.h"
#include "register/ProgramRegister.h"
#include "memory/memory.h"
#include "util/bin.h"

int main() {
    printf("OpenX86 Emulator\n");

    printf("ProgramRegister::IP() = 0x%04X\n", ProgramRegister::IP());
    printf("ProgramRegister::EIP() = 0x%08X\n", ProgramRegister::EIP());

    ProgramRegister::IP(0xABCD);
    printf("ProgramRegister::IP() = 0x%04X\n", ProgramRegister::IP());
    printf("ProgramRegister::EIP() = 0x%08X\n", ProgramRegister::EIP());

    ProgramRegister::EIP(0xABCD);
    printf("ProgramRegister::IP() = 0x%04X\n", ProgramRegister::IP());
    printf("ProgramRegister::EIP() = 0x%08X\n", ProgramRegister::EIP());

    printf("GeneralRegister::EAX() = 0x%08X\n", GeneralRegister::EAX());
    printf("GeneralRegister::AX() = 0x%04X\n", GeneralRegister::AX());
    printf("GeneralRegister::AH() = 0x%02X\n", GeneralRegister::AH());
    printf("GeneralRegister::AL() = 0x%02X\n", GeneralRegister::AL());

//    memory::init(1024 * 1024 * 128);
//    uint8_t value[4] = {1,2,3,4};
//    memory::store(0x00000008, 4, value);

    const std::string bios_path(R"(D:\GitHub\cw1997\emulator\bios.bin)");

    const bin bios_bin(bios_path);

    memory::init(bios_bin.size);
    memory::store(0x00000000, bios_bin.size, bios_bin.content);

//    for (uint64_t i = 0; i < bios_bin.size; ++i) {
//        printf("0x%08X = 0x%08X\n", i, *memory::load(i));
//    }

//    getchar();

    return 0;
}

