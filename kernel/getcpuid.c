//
// Created by anton on 2/13/25.
//
#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "riscv.h"
#include "defs.h"


uint64
sys_getcpuid(void)
{
    return cpuid();
}