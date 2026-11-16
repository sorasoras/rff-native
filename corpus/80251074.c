#include "tc_rt.h"

void fn_80251074(u32 param_1)
{
    wr32(rd32(0x80576c88u) + 0x238u, ((u32)((s32)((param_1 << 1u) & 0xfffeu) >> 5) & 0x3ffu) | 0x4d000000u);
    return;
}
