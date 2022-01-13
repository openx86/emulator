//
// Created by 86759 on 2022-01-14.
//

#include "SystemAddressRegister.h"

uint64_t SystemAddressRegister::GDTR = 0;
uint64_t SystemAddressRegister::IDTR = 0;
uint64_t SystemAddressRegister::LDTR = 0;
