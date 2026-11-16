#include "tc_rt.h"

u32 fn_8026cd2c(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r6 = ((u32)param_2 + (u32)param_1) & 0xfffffffcu;
    r31 = ((u32)param_1 + 3u) & 0xfffffffcu;
    if (r31 > r6 || (r6 - r31) < 0x64u) {
        r3 = 0u;
    } else {
        a.r[0] = r31;
        a.r[1] = 0x45585048u;
        a.r[2] = r31 + 0x50u;
        a.r[3] = r6;
        a.r[4] = param_3;
        (void)tc_call(0x8026c4f0u, &a);
        wr16(r31 + 0x4cu, 0u);
        r3 = r31;
        wr16(r31 + 0x4eu, 0u);
        r6 = rd32(r31 + 0x18u);
        r7 = rd32(r31 + 0x1cu);
        wr16(r6, 0x4652u);
        wr16(r6 + 2u, 0u);
        wr32(r6 + 4u, r7 - (r6 + 0x10u));
        wr32(r6 + 8u, 0u);
        wr32(r6 + 0xcu, 0u);
        wr32(r31 + 0x3cu, r6);
        wr32(r31 + 0x40u, r6);
        wr32(r31 + 0x44u, 0u);
        wr32(r31 + 0x48u, 0u);
    }
    return r3;
}
