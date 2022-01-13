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
bool is_prefix_REPE(const uint8_t *bytes) {
    return bytes[0] == 0xF3;
}
bool is_prefix_REPNE(const uint8_t *bytes) {
    return bytes[0] == 0xF2;
}
bool is_prefix_LOCK(const uint8_t *bytes) {
    return bytes[0] == 0xF0;
}
bool is_prefix_segment_override_CS(const uint8_t *bytes) {
    return bytes[0] == 0x2E;
}
bool is_prefix_segment_override_SS(const uint8_t *bytes) {
    return bytes[0] == 0x36;
}
bool is_prefix_segment_override_DS(const uint8_t *bytes) {
    return bytes[0] == 0x3E;
}
bool is_prefix_segment_override_ES(const uint8_t *bytes) {
    return bytes[0] == 0x26;
}
bool is_prefix_segment_override_FS(const uint8_t *bytes) {
    return bytes[0] == 0x64;
}
bool is_prefix_segment_override_GS(const uint8_t *bytes) {
    return bytes[0] == 0x65;
}
bool is_prefix_override_operand_size(const uint8_t *bytes) {
    return bytes[0] == 0x66;
}
bool is_prefix_override_address_size(const uint8_t *bytes) {
    return bytes[0] == 0x67;
}
bool is_MOV_reg_to_reg_mem(const uint8_t *bytes) {
    return false;
}

decode::Opcode decode::decode_opcode(const uint8_t *bytes) {
    if (is_HLT(bytes)) return decode::Opcode::HLT;
    if (is_NOP(bytes)) return decode::Opcode::NOP;
    return invalid;
}

