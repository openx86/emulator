//
// Created by 86759 on 2022-01-12.
//

#include "decode.h"

using namespace decode;

bool _check_opcode_5_3(uint8_t source, uint8_t target) {
    return _check_opcode<uint8_t>(0b0011'1000, source, target);
}

bool _check_opcode_7_3(uint8_t source, uint8_t target) {
    return _check_opcode<uint8_t>(0b1111'1000, source, target);
}

sreg_e get_sreg2(uint8_t byte) {
    const uint8_t mask = 0b0011'1000;
    sreg_e sreg = static_cast<sreg_e>((byte & mask) >> 3);
    return sreg;
}

sreg_e get_sreg3(uint8_t byte) {
    const uint8_t mask = 0b0001'1000;
    sreg_e sreg = static_cast<sreg_e>((byte & mask) >> 3);
    return sreg;
}

uint32_t address_generate(uint8_t mod_rm) {
    mod_rm &= 0b1100'0111;
    switch (mod_rm) {
        default:
            return 0x0000'0000;
    }
}

bool is_HLT(const uint8_t *bytes) { return bytes[0] == 0xF4; }
bool is_NOP(const uint8_t *bytes) { return bytes[0] == 0x90; }
bool is_prefix_REPE(const uint8_t *bytes) { return bytes[0] == 0xF3; }
bool is_prefix_REPNE(const uint8_t *bytes) { return bytes[0] == 0xF2; }
bool is_prefix_LOCK(const uint8_t *bytes) { return bytes[0] == 0xF0; }
bool is_prefix_segment_override_CS(const uint8_t *bytes) { return bytes[0] == 0x2E; }
bool is_prefix_segment_override_SS(const uint8_t *bytes) { return bytes[0] == 0x36; }
bool is_prefix_segment_override_DS(const uint8_t *bytes) { return bytes[0] == 0x3E; }
bool is_prefix_segment_override_ES(const uint8_t *bytes) { return bytes[0] == 0x26; }
bool is_prefix_segment_override_FS(const uint8_t *bytes) { return bytes[0] == 0x64; }
bool is_prefix_segment_override_GS(const uint8_t *bytes) { return bytes[0] == 0x65; }
bool is_prefix_override_operand_size(const uint8_t *bytes) { return bytes[0] == 0x66; }
bool is_prefix_override_address_size(const uint8_t *bytes) { return bytes[0] == 0x67; }
bool is_MOV_reg_to_rm_w_0(const uint8_t *bytes) { return bytes[0] == 0x88; }
bool is_MOV_reg_to_rm_w_1(const uint8_t *bytes) { return bytes[0] == 0x89; }
bool is_MOV_rm_to_reg_w_0(const uint8_t *bytes) { return bytes[0] == 0x8A; }
bool is_MOV_rm_to_reg_w_1(const uint8_t *bytes) { return bytes[0] == 0x8B; }
bool is_MOV_sreg_to_rm(const uint8_t *bytes) { return bytes[0] == 0x8C; }
bool is_MOV_rm_to_sreg(const uint8_t *bytes) { return bytes[0] == 0x8D; }

opcode_e decode_opcode(const uint8_t *bytes) {
    if (is_HLT(bytes)) return opcode_e::HLT;
    if (is_NOP(bytes)) return opcode_e::NOP;
    if (is_prefix_REPE(bytes)) return opcode_e::prefix_REPE;
    if (is_prefix_REPNE(bytes)) return opcode_e::prefix_REPNE;
    if (is_prefix_LOCK(bytes)) return opcode_e::prefix_LOCK;
    if (is_prefix_segment_override_CS(bytes)) return opcode_e::prefix_segment_override_CS;
    if (is_prefix_segment_override_SS(bytes)) return opcode_e::prefix_segment_override_SS;
    if (is_prefix_segment_override_DS(bytes)) return opcode_e::prefix_segment_override_DS;
    if (is_prefix_segment_override_ES(bytes)) return opcode_e::prefix_segment_override_ES;
    if (is_prefix_segment_override_FS(bytes)) return opcode_e::prefix_segment_override_FS;
    if (is_prefix_segment_override_GS(bytes)) return opcode_e::prefix_override_operand_size;
    if (is_prefix_override_operand_size(bytes)) return opcode_e::prefix_override_address_size;
    if (is_prefix_override_address_size(bytes)) return opcode_e::MOV_reg_to_rm_w_0;
    if (is_MOV_reg_to_rm_w_0(bytes)) return opcode_e::MOV_reg_to_rm_w_1;
    if (is_MOV_reg_to_rm_w_1(bytes)) return opcode_e::MOV_rm_to_reg_w_0;
    if (is_MOV_rm_to_reg_w_0(bytes)) return opcode_e::MOV_rm_to_reg_w_1;
    if (is_MOV_rm_to_reg_w_1(bytes)) return opcode_e::MOV_sreg_to_rm;
    if (is_MOV_sreg_to_rm(bytes)) return opcode_e::MOV_rm_to_sreg;
    if (is_MOV_rm_to_sreg(bytes)) return opcode_e::MOV_rm_to_sreg;
    return invalid;
}
