//
// Created by 86759 on 2022-01-12.
//

#ifndef EMULATOR_DECODE_H
#define EMULATOR_DECODE_H

#include <cstdint>

namespace decode {

    enum reg_16 {
        AX=0,
        CX=1,
        DX=2,
        BX=3,
        SP=4,
        BP=5,
        SI=6,
        DI=7,
    };
    enum reg_32 {
        EAX=0,
        ECX=1,
        EDX=2,
        EBX=3,
        ESP=4,
        EBP=5,
        ESI=6,
        EDI=7,
    };
    enum reg_8 {
        AL=0,
        CL=1,
        DL=2,
        BL=3,
        AH=4,
        CH=5,
        DH=6,
        BH=7,
    };
    enum sreg {
        ES=0,
        CS=1,
        SS=2,
        DS=3,
        FS=4,
        GS=5,
    };
    enum displacement {
        d8,
        d16,
        d32,
    };
    enum scale_factor {
        x1,
        x2,
        x4,
        x8,
    };

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
