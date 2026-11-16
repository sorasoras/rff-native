#include "tc_rt.h"

u32 fn_803024c0(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x28u);
    a.r[0] = (u32)rd8(r5);
    a.r[1] = rd32(r5 + 4u);
    a.r[2] = r5;
    r3 = tc_call(0x8030e93cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if (param_2 >= rd32(r3)) {
            r3 = 0u;
        } else {
            if ((u32)rd16((u32)param_1 + 6u) >= 0x101u) {
                r4 = r3 + ((param_2 << 3u) & 0xfffffff8u);
                r3 = (u32)rd8(r4 + 4u);
                r4 = rd32(r4 + 8u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = rd32((u32)param_1 + 0x28u);
                r3 = tc_call(0x8030e93cu, &a);
            } else {
                r3 = r3 + ((param_2 << 3u) & 0xfffffff8u);
                r3 = rd32(r3 + 8u);
                r3 = r3 + rd32((u32)param_1 + 0x28u);
            }
        }
    }
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32(r3 + 0x20u);
    }
    return r3;
}
