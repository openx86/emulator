//
// Created by 86759 on 2022-01-12.
//

#ifndef EMULATOR_DECODE_H
#define EMULATOR_DECODE_H

#include <cstdint>

namespace decode {

    typedef enum {
        AX=0,
        CX=1,
        DX=2,
        BX=3,
        SP=4,
        BP=5,
        SI=6,
        DI=7,
    } reg_16_e;
    typedef enum {
        EAX=0,
        ECX=1,
        EDX=2,
        EBX=3,
        ESP=4,
        EBP=5,
        ESI=6,
        EDI=7,
    } reg_32_e;
    typedef enum {
        AL=0,
        CL=1,
        DL=2,
        BL=3,
        AH=4,
        CH=5,
        DH=6,
        BH=7,
    } reg_8_e;
    typedef enum {
        ES=0,
        CS=1,
        SS=2,
        DS=3,
        FS=4,
        GS=5,
    } sreg_e;
    typedef enum {
        d8,
        d16,
        d32,
    } displacement_e;
    typedef enum {
        x1,
        x2,
        x4,
        x8,
    } scale_factor_e;

    template<typename T> bool _check_opcode(T mask, T source, T target) {
        source &= mask;
        target &= mask;
        return source == target;
    }

    template<typename T> T get_bit_2_0(uint8_t byte) {
        const uint8_t mask = 0b0000'0111;
        T result = static_cast<T>((byte & mask) >> 3);
        return result;
    }

    template<typename T> T get_bit_5_3(uint8_t byte) {
        const uint8_t mask = 0b0011'1000;
        T result = static_cast<T>((byte & mask) >> 3);
        return result;
    }

    typedef enum {
        invalid,
        HLT,
        NOP,
        prefix_REPE,
        prefix_REPNE,
        prefix_LOCK,
        prefix_segment_override_CS,
        prefix_segment_override_SS,
        prefix_segment_override_DS,
        prefix_segment_override_ES,
        prefix_segment_override_FS,
        prefix_override_operand_size,
        prefix_override_address_size,
        MOV_reg_to_rm_w_0,
        MOV_reg_to_rm_w_1,
        MOV_rm_to_reg_w_0,
        MOV_rm_to_reg_w_1,
        MOV_sreg_to_rm,
        MOV_rm_to_sreg,
    } opcode_e;

    uint32_t address_generate(uint8_t mod_rm);
    opcode_e decode_opcode(const uint8_t bytes[4]);
    opcode_e decode_field(const uint8_t bytes[4]);

}


#endif //EMULATOR_DECODE_H
