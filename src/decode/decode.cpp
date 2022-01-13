//
// Created by 86759 on 2022-01-12.
//

#include "decode.h"

bool is_HLT(const uint8_t *bytes) {
    return bytes[0] == 0xF4;
}

bool is_NOP(const uint8_t *bytes) {
    return bytes[0] == 0x90;
}

bool is_MOV_reg_to_reg_mem(const uint8_t *bytes) {
    return false;
}

decode::Opcode decode::decode_opcode(const uint8_t *bytes) {
    if (is_HLT(bytes)) return decode::Opcode::HLT;
    if (is_NOP(bytes)) return decode::Opcode::NOP;
    return invalid;
}

