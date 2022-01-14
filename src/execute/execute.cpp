//
// Created by 86759 on 2022-01-13.
//

#include <unistd.h>
#include "../definition.h"
#include "execute.h"
#include "../decode/decode.h"
#include "../memory/memory.h"

#include "../register/ControlRegister.h"
#include "../register/SegmentRegister.h"
#include "../register/ProgramRegister.h"
#include "../register/GeneralRegister.h"
#include "../util/debug.h"

uint32_t get_program_counter() {
    const auto PE = ControlRegister::PE();
    if (PE == 0) {
        return (SegmentRegister::CS() << 4) + ProgramRegister::IP();
    } else {
        return SegmentRegister::CS_descriptor.base + ProgramRegister::IP();
    }
}

uint8_t read_reg_8(decode::reg_8_e reg) {
    switch (reg) {
        case decode::AL: return GeneralRegister::AL();
        case decode::CL: return GeneralRegister::CL();
        case decode::DL: return GeneralRegister::DL();
        case decode::BL: return GeneralRegister::BL();
        case decode::AH: return GeneralRegister::AH();
        case decode::CH: return GeneralRegister::CH();
        case decode::DH: return GeneralRegister::DH();
        case decode::BH: return GeneralRegister::BH();
    }
}

[[noreturn]] void execute::execute() {
    for (;;) {
        const auto PC = get_program_counter();
        const uint8_t* byte = memory::load(PC);
        const auto opcode = decode::decode_opcode(byte);
        switch (opcode) {
            case decode::invalid:
                break;
            case decode::HLT:
                break;
            case decode::NOP:
                break;
            case decode::prefix_REPE:
                break;
            case decode::prefix_REPNE:
                break;
            case decode::prefix_LOCK:
                break;
            case decode::prefix_segment_override_CS:
                break;
            case decode::prefix_segment_override_SS:
                break;
            case decode::prefix_segment_override_DS:
                break;
            case decode::prefix_segment_override_ES:
                break;
            case decode::prefix_segment_override_FS:
                break;
            case decode::prefix_override_operand_size:
                break;
            case decode::prefix_override_address_size:
                break;
            case decode::MOV_reg_to_rm_w_0: {
                auto reg = decode::get_bit_5_3<decode::reg_8_e>(byte[1]);
                auto mem = decode::address_generate(byte[1]);
                auto reg_value = read_reg_8(reg);
                memory::store(mem, sizeof(uint8_t), &reg_value);
                break;
            }
            case decode::MOV_reg_to_rm_w_1:
                break;
            case decode::MOV_rm_to_reg_w_0:
                break;
            case decode::MOV_rm_to_reg_w_1:
                break;
            case decode::MOV_sreg_to_rm:
                break;
            case decode::MOV_rm_to_sreg:
                break;
            default: {
                auto reg = decode::get_bit_5_3<decode::reg_8_e>(byte[1]);
                auto mem = decode::address_generate(byte[1]);
                auto reg_value = read_reg_8(reg);
                memory::store(mem, sizeof(uint8_t), &reg_value);
                break;
            }
        }
        debug::dump();
        getchar();
    }
}
