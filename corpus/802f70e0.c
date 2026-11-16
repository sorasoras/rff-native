#include "tc_rt.h"

u32 fn_802f70e0(s32 param_1)
{
    u32 ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 0x60u);
    r0 = rd32((u32)param_1 + 0x64u);
    r4 = r5 ^ 0x80000000u;
    r3 = r0 - r5;
    r0 = r5 - r0;
    ca = (r3 + r4) < r3;
    r3 = r3 + r4;
    r3 = r0 & ~(u32)((u64)~r3 + (u64)r3 + (u64)ca);
    return r3;
}
