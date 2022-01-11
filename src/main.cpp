#include <cstdio>

#include "register.h"

int main() {
    printf("OpenX86 Emulator\n");

    GeneralRegister::init();
    SegmentRegister::init();
    FlagsRegister::init();
    ControlRegister::init();
    SystemAddressRegister::init();
    printf("FlagsRegister::EFLAGS = %d\n", FlagsRegister::EFLAGS);

    return 0;
}

