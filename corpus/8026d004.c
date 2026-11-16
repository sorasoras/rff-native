#include "tc_rt.h"

u32 fn_8026d004(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r6 = ((u32)param_2 + (u32)param_1) & 0xfffffffcu;
    r31 = ((u32)param_1 + 3u) & 0xfffffffcu;
    if (r31 > r6 || (r6 - r31) < 0x48u) {
        r3 = 0u;
    } else {
        a.r[0] = r31;
        a.r[1] = 0x46524d48u;
        a.r[2] = r31 + 0x48u;
        a.r[3] = r6;
        a.r[4] = param_3;
        (void)tc_call(0x8026c4f0u, &a);
        r3 = r31;
        wr32(r31 + 0x3cu, rd32(r31 + 0x18u));
        wr32(r31 + 0x40u, rd32(r31 + 0x1cu));
        wr32(r31 + 0x44u, 0u);
    }
    return r3;
}
