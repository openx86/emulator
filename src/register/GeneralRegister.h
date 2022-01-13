//
// Created by 86759 on 2022-01-14.
//

#ifndef EMULATOR_GENERALREGISTER_H
#define EMULATOR_GENERALREGISTER_H

#include <cstdint>
#include <bitset>


class GeneralRegister {
public:
    static uint32_t AX_r;
    static uint32_t BX_r;
    static uint32_t CX_r;
    static uint32_t DX_r;
    static uint32_t SI_r;
    static uint32_t DI_r;
    static uint32_t BP_r;
    static uint32_t SP_r;

    static uint8_t AL();
    static uint8_t BL();
    static uint8_t CL();
    static uint8_t DL();
    static uint8_t AH();
    static uint8_t BH();
    static uint8_t CH();
    static uint8_t DH();

    static uint16_t AX();
    static uint16_t BX();
    static uint16_t CX();
    static uint16_t DX();
    static uint16_t SI();
    static uint16_t DI();
    static uint16_t BP();
    static uint16_t SP();

    static uint32_t EAX();
    static uint32_t EBX();
    static uint32_t ECX();
    static uint32_t EDX();
    static uint32_t ESI();
    static uint32_t EDI();
    static uint32_t EBP();
    static uint32_t ESP();

    static void AL(uint8_t value);
    static void BL(uint8_t value);
    static void CL(uint8_t value);
    static void DL(uint8_t value);
    static void AH(uint8_t value);
    static void BH(uint8_t value);
    static void CH(uint8_t value);
    static void DH(uint8_t value);

    static void AX(uint16_t value);
    static void BX(uint16_t value);
    static void CX(uint16_t value);
    static void DX(uint16_t value);
    static void SI(uint16_t value);
    static void DI(uint16_t value);
    static void BP(uint16_t value);
    static void SP(uint16_t value);

    static void EAX(uint32_t value);
    static void EBX(uint32_t value);
    static void ECX(uint32_t value);
    static void EDX(uint32_t value);
    static void ESI(uint32_t value);
    static void EDI(uint32_t value);
    static void EBP(uint32_t value);
    static void ESP(uint32_t value);
};


#endif //EMULATOR_GENERALREGISTER_H
