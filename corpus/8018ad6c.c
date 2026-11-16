#include "tc_rt.h"

void fn_8018ad6c(s32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
    r3 = rd32(r31 + 0x3fcu);
    a.r[0] = r3;
    a.r[1] = param_3;
    a.r[2] = param_3;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(r3) + 0x4cu), &a);
    c0lt = param_2 < 7;
    if ((u32)param_2 != 7u) {
    } else {
        r4 = rd32(r31 + 0x3fcu);
        r3 = rd32(r4 + 0x80u) | 0x20000000u;
        wr32(r4 + 0x80u, r3);
        if ((u32)((s32)((r3 << 2u) & 0xc0000000u) >> 31) != 0u) {
            wr32(r4 + 0x80u, rd32(r4 + 0x80u) | 0x8000000u);
        }
        a.r[0] = rd32(r31 + 0x3fcu);
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x800841d4u, &a);
    }
    return;
}
