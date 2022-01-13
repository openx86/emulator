//
// Created by 86759 on 2022-01-14.
//

#include "GeneralRegister.h"

//uint32_t GeneralRegister::AX_r = 0x12345678;
uint32_t GeneralRegister::AX_r = 0x00000000;
uint32_t GeneralRegister::BX_r = 0x00000000;
uint32_t GeneralRegister::CX_r = 0x00000000;
uint32_t GeneralRegister::DX_r = 0x00000000;
uint32_t GeneralRegister::SI_r = 0x00000000;
uint32_t GeneralRegister::DI_r = 0x00000000;
uint32_t GeneralRegister::BP_r = 0x00000000;
uint32_t GeneralRegister::SP_r = 0x00000000;

uint8_t GeneralRegister::AL() { return AX_r >> 0; }
uint8_t GeneralRegister::BL() { return BX_r >> 0; }
uint8_t GeneralRegister::CL() { return CX_r >> 0; }
uint8_t GeneralRegister::DL() { return DX_r >> 0; }
uint8_t GeneralRegister::AH() { return AX_r >> 8; }
uint8_t GeneralRegister::BH() { return BX_r >> 8; }
uint8_t GeneralRegister::CH() { return CX_r >> 8; }
uint8_t GeneralRegister::DH() { return DX_r >> 8; }

uint16_t GeneralRegister::AX() { return AX_r; }
uint16_t GeneralRegister::BX() { return BX_r; }
uint16_t GeneralRegister::CX() { return CX_r; }
uint16_t GeneralRegister::DX() { return DX_r; }
uint16_t GeneralRegister::SI() { return SI_r; }
uint16_t GeneralRegister::DI() { return DI_r; }
uint16_t GeneralRegister::BP() { return BP_r; }
uint16_t GeneralRegister::SP() { return SP_r; }

uint32_t GeneralRegister::EAX() { return AX_r; }
uint32_t GeneralRegister::EBX() { return BX_r; }
uint32_t GeneralRegister::ECX() { return CX_r; }
uint32_t GeneralRegister::EDX() { return DX_r; }
uint32_t GeneralRegister::ESI() { return SI_r; }
uint32_t GeneralRegister::EDI() { return DI_r; }
uint32_t GeneralRegister::EBP() { return BP_r; }
uint32_t GeneralRegister::ESP() { return SP_r; }
