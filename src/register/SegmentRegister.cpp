//
// Created by 86759 on 2022-01-14.
//

#include "SegmentRegister.h"

uint16_t SegmentRegister::CS_r = 0xF000;
uint16_t SegmentRegister::SS_r = 0x0000;
uint16_t SegmentRegister::DS_r = 0x0000;
uint16_t SegmentRegister::ES_r = 0x0000;
uint16_t SegmentRegister::FS_r = 0x0000;
uint16_t SegmentRegister::GS_r = 0x0000;

uint16_t SegmentRegister::CS() { return CS_r; }
uint16_t SegmentRegister::SS() { return SS_r; }
uint16_t SegmentRegister::DS() { return DS_r; }
uint16_t SegmentRegister::ES() { return ES_r; }
uint16_t SegmentRegister::FS() { return FS_r; }
uint16_t SegmentRegister::GS() { return GS_r; }

void SegmentRegister::CS(uint16_t value) { CS_r = value; }
void SegmentRegister::SS(uint16_t value) { SS_r = value; }
void SegmentRegister::DS(uint16_t value) { DS_r = value; }
void SegmentRegister::ES(uint16_t value) { ES_r = value; }
void SegmentRegister::FS(uint16_t value) { FS_r = value; }
void SegmentRegister::GS(uint16_t value) { GS_r = value; }
