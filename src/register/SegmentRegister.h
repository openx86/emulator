//
// Created by 86759 on 2022-01-14.
//

#ifndef EMULATOR_SEGMENTREGISTER_H
#define EMULATOR_SEGMENTREGISTER_H

#include <cstdint>

class SegmentRegister {
public:
    static uint16_t CS_r;
    static uint16_t SS_r;
    static uint16_t DS_r;
    static uint16_t ES_r;
    static uint16_t FS_r;
    static uint16_t GS_r;

    static uint16_t CS();
    static uint16_t SS();
    static uint16_t DS();
    static uint16_t ES();
    static uint16_t FS();
    static uint16_t GS();

    static void CS(uint16_t value);
    static void SS(uint16_t value);
    static void DS(uint16_t value);
    static void ES(uint16_t value);
    static void FS(uint16_t value);
    static void GS(uint16_t value);
};


#endif //EMULATOR_SEGMENTREGISTER_H
