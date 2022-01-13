//
// Created by 86759 on 2022-01-14.
//

#include "ProgramRegister.h"

//uint32_t ProgramRegister::IP_r = 0x1234FFF0;
uint32_t ProgramRegister::IP_r = 0x0000FFF0;
uint16_t ProgramRegister::IP() { return (uint16_t)IP_r; }
uint32_t ProgramRegister::EIP() { return (uint32_t)IP_r; }
void ProgramRegister::IP(uint16_t value) { auto* IP_16 = (uint16_t *)(&IP_r); *IP_16 = value; }
void ProgramRegister::EIP(uint32_t value) { IP_r = value; }
