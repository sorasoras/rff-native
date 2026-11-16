#include "tc_rt.h"

void fn_800da840(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32(0x805706e8u);
    r5 = rd32(0x8046adecu);
    while (r5 != 0u) {
        r3 = r5;
        r5 = rd32(r5);
        r3 = rd32(r3 + 8u);
        if ((r6 == rd32(r3 + 0x7cu) && (u32)((s32)((rd32(r3 + 0x74u) << 1u) & 0xc0000000u) >> 31) == 0u) && (rd32(r3 + 0xf8u) != 2u && (u32)param_2 == rd32(r3 + 0xf4u))) {
            a.r[0] = r3;
            a.r[1] = param_1;
            a.r[2] = 3u;
            a.r[3] = r6;
            a.r[4] = param_1;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(r3) + 0x7cu), &a);
            return;
        }
    }
    return;
}
