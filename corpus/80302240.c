#include "tc_rt.h"

u32 fn_80302240(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0;
    TcArgs a = {0};
    r7 = rd32((u32)param_1 + 0x28u);
    a.r[0] = (u32)rd8(r7 + 0x20u);
    a.r[1] = rd32(r7 + 0x24u);
    a.r[2] = r7;
    r3 = tc_call(0x8030e93cu, &a);
    if (r3 == 0u) {
        r4 = 0u;
    } else {
        if (param_2 >= rd32(r3)) {
            r4 = 0u;
        } else {
            r4 = r3 + ((param_2 << 3u) & 0xfffffff8u);
            r3 = (u32)rd8(r4 + 4u);
            r4 = rd32(r4 + 8u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = rd32((u32)param_1 + 0x28u);
            r3 = tc_call(0x8030e93cu, &a);
            r4 = r3;
        }
    }
    if (r4 == 0u) {
        r3 = 0u;
    } else {
        r3 = (u32)rd8(r4 + 0x20u);
        r4 = rd32(r4 + 0x24u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = rd32((u32)param_1 + 0x28u);
        r3 = tc_call(0x8030e93cu, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            if (param_3 >= rd32(r3)) {
                r3 = 0u;
            } else {
                r4 = r3 + ((param_3 << 3u) & 0xfffffff8u);
                r3 = (u32)rd8(r4 + 4u);
                r4 = rd32(r4 + 8u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = rd32((u32)param_1 + 0x28u);
                r3 = tc_call(0x8030e93cu, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                } else {
                    wr32(param_4, rd32(r3));
                    wr32(param_4 + 4u, rd32(r3 + 4u));
                    wr32(param_4 + 8u, rd32(r3 + 8u));
                    wr32(param_4 + 0xcu, rd32(r3 + 0xcu));
                    r0 = rd32(r3 + 0x10u);
                    r3 = 1u;
                    wr32(param_4 + 0x10u, r0);
                }
            }
        }
    }
    return r3;
}
