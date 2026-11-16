#include "tc_rt.h"

void fn_800da79c(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x118u);
    if (r4 != 0u) {
        if ((u32)((s32)((rd32(r4 + 0x74u) << 1u) & 0xc0000000u) >> 31) == 0u) {
            a.r[0] = r4;
            a.r[1] = (u32)param_1;
            a.r[2] = 2u;
            a.f[0] = 0.0;
            f1 = tc_callf(rd32(rd32(r4) + 0x7cu), &a);
        }
        wr32((u32)param_1 + 0x118u, 0u);
    }
    r3 = rd32((u32)param_1 + 0x11cu);
    if (r3 != 0u) {
        if ((u32)((s32)((rd32(r3 + 0x74u) << 1u) & 0xc0000000u) >> 31) == 0u) {
            a.r[0] = r3;
            a.r[1] = (u32)param_1;
            a.r[2] = 4u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x7cu), &a);
        }
        wr32((u32)param_1 + 0x11cu, 0u);
    }
    return;
}
