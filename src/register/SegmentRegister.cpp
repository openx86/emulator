//
// Created by 86759 on 2022-01-14.
//

#include "SegmentRegister.h"
#include "SystemAddressRegister.h"

segment_descriptor_t load_descriptor(uint32_t value) {
    uint32_t descriptor_index = value >> 3;
    uint32_t offset = descriptor_index * 64/8;
    const auto address = SystemAddressRegister::GDT + ;
    const auto descriptor = (uint64_t)*address;
    segment_descriptor_t segment_descriptor;
    segment_descriptor.base =
            ((descriptor & 0x1111'0000'0000'0000) >> 48 <<  0) +
            ((descriptor & 0x0000'0000'0000'0011) >>  0 << 15) +
            ((descriptor & 0x0000'0000'1100'0000) >> 24 << 23) +
            0;
    segment_descriptor.limit =
            ((descriptor & 0x0000'1111'0000'0000) >> 32 <<  0) +
            ((descriptor & 0x0000'0000'0000'0011) >> 16 << 15) +
            0;
//    TODO: set remain bits
}

uint16_t SegmentRegister::CS_r = 0xF000;
uint16_t SegmentRegister::SS_r = 0x0000;
uint16_t SegmentRegister::DS_r = 0x0000;
uint16_t SegmentRegister::ES_r = 0x0000;
uint16_t SegmentRegister::FS_r = 0x0000;
uint16_t SegmentRegister::GS_r = 0x0000;

segment_descriptor_t SegmentRegister::CS_descriptor;
segment_descriptor_t SegmentRegister::SS_descriptor;
segment_descriptor_t SegmentRegister::DS_descriptor;
segment_descriptor_t SegmentRegister::ES_descriptor;
segment_descriptor_t SegmentRegister::FS_descriptor;
segment_descriptor_t SegmentRegister::GS_descriptor;

uint16_t SegmentRegister::CS() { return CS_r; }
uint16_t SegmentRegister::SS() { return SS_r; }
uint16_t SegmentRegister::DS() { return DS_r; }
uint16_t SegmentRegister::ES() { return ES_r; }
uint16_t SegmentRegister::FS() { return FS_r; }
uint16_t SegmentRegister::GS() { return GS_r; }

void SegmentRegister::CS(uint16_t value) { CS_r = value; CS_descriptor = load_descriptor(value); }
void SegmentRegister::SS(uint16_t value) { SS_r = value; SS_descriptor = load_descriptor(value); }
void SegmentRegister::DS(uint16_t value) { DS_r = value; DS_descriptor = load_descriptor(value); }
void SegmentRegister::ES(uint16_t value) { ES_r = value; ES_descriptor = load_descriptor(value); }
void SegmentRegister::FS(uint16_t value) { FS_r = value; FS_descriptor = load_descriptor(value); }
void SegmentRegister::GS(uint16_t value) { GS_r = value; GS_descriptor = load_descriptor(value); }
