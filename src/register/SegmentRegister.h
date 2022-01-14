//
// Created by 86759 on 2022-01-14.
//

#ifndef EMULATOR_SEGMENTREGISTER_H
#define EMULATOR_SEGMENTREGISTER_H

#include <cstdint>

typedef enum {
    b16=0,
    b32=1,
} operation_size_e;

typedef enum {
    DPL_0=0,
    DPL_1=1,
    DPL_2=2,
    DPL_3=3,
} descriptor_privilege_level_e;

typedef enum {
    system_segment_descriptor=0,
    code_or_data_segment_descriptor=1,
} segment_descriptor_e;

typedef struct {
    uint32_t base;
    uint32_t limit;
    bool granularity;
    operation_size_e operation_size;
    bool available;
    bool present;
    descriptor_privilege_level_e descriptor_privilege_level;
    segment_descriptor_e segment_descriptor;
    bool accessed;
} segment_descriptor_t;

class SegmentRegister {
public:
    static uint16_t CS_r;
    static uint16_t SS_r;
    static uint16_t DS_r;
    static uint16_t ES_r;
    static uint16_t FS_r;
    static uint16_t GS_r;

    static segment_descriptor_t CS_descriptor;
    static segment_descriptor_t SS_descriptor;
    static segment_descriptor_t DS_descriptor;
    static segment_descriptor_t ES_descriptor;
    static segment_descriptor_t FS_descriptor;
    static segment_descriptor_t GS_descriptor;

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
