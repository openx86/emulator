//
// Created by 86759 on 2022-01-12.
//

#ifndef EMULATOR_DECODE_H
#define EMULATOR_DECODE_H

#include <cstdint>

namespace decode {

enum Opcode {
    invalid,
    MOV_reg_to_reg_mem,
    MOV_reg_mem_to_reg,
    MOV_imm_to_reg_mem,
    MOV_imm_to_reg,
    MOV_mem_to_acc,
    MOV_acc_to_mem,
    MOV_reg_mem_to_sreg,
    MOV_sreg_to_reg_mem,
    HLT,
    NOP,
};

Opcode decode_opcode(const uint8_t bytes[4]);
Opcode decode_field(const uint8_t bytes[4]);

}


#endif //EMULATOR_DECODE_H
