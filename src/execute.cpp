//
// Created by 86759 on 2022-01-13.
//

#include "execute.h"

#include "register/ControlRegister.h"
#include "register/SegmentRegister.h"
#include "register/ProgramRegister.h"

uint32_t get_program_counter() {
    const auto PE = ControlRegister::PE();
    if (PE == 0) {
        return (SegmentRegister::CS() << 4) + ProgramRegister::IP();
    } else {

    }
}

int execute::execute() {
    for (;;) {

    }
    return 0;
}
