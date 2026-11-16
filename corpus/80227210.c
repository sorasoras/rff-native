#include "tc_rt.h"

u32 fn_80227210(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    r5 = (u32)param_2 - 1u;
    r6 = ~(r5 | r5);
    r0 = r6 & ((u32)param_2 + rd32(0x80570a50u) - 1u);
    r3 = r0;
    r0 = r0 + (u32)param_1 + (u32)param_2 - 1u;
    r0 = r6 & r0;
    wr32(0x80570a50u, r0);
    return r3;
}
