#include <cstdio>

#include "register.h"
#include "util.h"

int main() {
    printf("OpenX86 Emulator\n");

    GeneralRegister::init();
    SegmentRegister::init();
    FlagsRegister::init();
    ControlRegister::init();
    SystemAddressRegister::init();
    printf("FlagsRegister::EFLAGS = %d\n", FlagsRegister::EFLAGS);
    printf("util::get_current_bit() = %d\n", util::get_current_bit());

    return 0;
}

