#include "tc_rt.h"

s32 fn_802cf354(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x4cu);
    return (s32)(((r4 >> 0x17u) & 0x1e0u) + (rd32((u32)param_1 + 0x58u) + (((r4 >> 0x18u) & 0xfu) * 0x14u)));
}
