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

void GeneralRegister::AL(uint8_t value) { auto* tmp = (uint8_t *)(&AX_r); *tmp = value; }
void GeneralRegister::BL(uint8_t value) { auto* tmp = (uint8_t *)(&BX_r); *tmp = value; }
void GeneralRegister::CL(uint8_t value) { auto* tmp = (uint8_t *)(&CX_r); *tmp = value; }
void GeneralRegister::DL(uint8_t value) { auto* tmp = (uint8_t *)(&DX_r); *tmp = value; }
void GeneralRegister::AH(uint8_t value) { auto* tmp = (uint8_t *)(&AX_r); *tmp = value; }
void GeneralRegister::BH(uint8_t value) { auto* tmp = (uint8_t *)(&BX_r); *tmp = value; }
void GeneralRegister::CH(uint8_t value) { auto* tmp = (uint8_t *)(&CX_r); *tmp = value; }
void GeneralRegister::DH(uint8_t value) { auto* tmp = (uint8_t *)(&DX_r); *tmp = value; }

void GeneralRegister::AX(uint16_t value) { auto* tmp = (uint16_t *)(&AX_r); *tmp = value; }
void GeneralRegister::BX(uint16_t value) { auto* tmp = (uint16_t *)(&BX_r); *tmp = value; }
void GeneralRegister::CX(uint16_t value) { auto* tmp = (uint16_t *)(&CX_r); *tmp = value; }
void GeneralRegister::DX(uint16_t value) { auto* tmp = (uint16_t *)(&DX_r); *tmp = value; }
void GeneralRegister::SI(uint16_t value) { auto* tmp = (uint16_t *)(&SI_r); *tmp = value; }
void GeneralRegister::DI(uint16_t value) { auto* tmp = (uint16_t *)(&DI_r); *tmp = value; }
void GeneralRegister::BP(uint16_t value) { auto* tmp = (uint16_t *)(&BP_r); *tmp = value; }
void GeneralRegister::SP(uint16_t value) { auto* tmp = (uint16_t *)(&SP_r); *tmp = value; }

void GeneralRegister::EAX(uint32_t value) { auto* tmp = (uint32_t *)(&AX_r); *tmp = value; }
void GeneralRegister::EBX(uint32_t value) { auto* tmp = (uint32_t *)(&BX_r); *tmp = value; }
void GeneralRegister::ECX(uint32_t value) { auto* tmp = (uint32_t *)(&CX_r); *tmp = value; }
void GeneralRegister::EDX(uint32_t value) { auto* tmp = (uint32_t *)(&DX_r); *tmp = value; }
void GeneralRegister::ESI(uint32_t value) { auto* tmp = (uint32_t *)(&SI_r); *tmp = value; }
void GeneralRegister::EDI(uint32_t value) { auto* tmp = (uint32_t *)(&DI_r); *tmp = value; }
void GeneralRegister::EBP(uint32_t value) { auto* tmp = (uint32_t *)(&BP_r); *tmp = value; }
void GeneralRegister::ESP(uint32_t value) { auto* tmp = (uint32_t *)(&SP_r); *tmp = value; }
