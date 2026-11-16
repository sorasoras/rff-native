#include "tc_rt.h"

s32 fn_8021a650(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    r3 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
    r0 = rd32(r3 + 0x14u);
    r3 = rd32(r3 + 0x58u);
    r0 = (r0 << 3u) & 0xfffffff8u;
    r3 = r3 + r0;
    r3 = r3 + 0x10u;
    return (s32)r3;
}
