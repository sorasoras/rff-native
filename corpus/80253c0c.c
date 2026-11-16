#include "tc_rt.h"

void fn_80253c0c(u32 param_1)
{
    u32 r3 = 0;
    wr8(0xcc008000u, 0x61u);
    r3 = rd32(0x80576c88u);
    wr32(0xcc008000u, ((rd32(param_1) >> 8u) & 0xffffffu) | 0xf2000000u);
    wr16(r3 + 2u, 0u);
    return;
}
