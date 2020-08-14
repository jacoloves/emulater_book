#ifndef EMULATOR_H_
#define EMULATOR_H_

#include <stdint.h>

enum Register { EAX, ECX, EDX, EBX, ESP, EBP, ESI, EDI, REGISTERS_COUNT };

typedef struct {
    /* 汎用レジスタ */
    uint32_t registers[REGISTERS_COUNT];

    /* EFLAGSレジスタ */
    uint32_t eflags;
}