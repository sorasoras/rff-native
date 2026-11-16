#include "tc_rt.h"

u32 fn_800da124(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0x74u);
    wr32((u32)param_1 + 0x78u, 0u);
    r0 = r0 & 0x7fffffffu;
    r0 = r0 | 0x20000000u;
    wr32((u32)param_1 + 0x7cu, 0x40u);
    wr32((u32)param_1 + 0xfcu, 0u);
    wr32((u32)param_1 + 0xf8u, param_2);
    wr32((u32)param_1 + 0xf4u, param_3);
    wr32((u32)param_1 + 0x74u, r0);
    wr32((u32)param_1 + 0x118u, 0u);
    wr32((u32)param_1 + 0x11cu, 0u);
    return 1u;
}
