#include "tc_rt.h"

s32 fn_801970c0(s32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 c1lt = 0, ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = (u32)param_4;
    (void)tc_call(0x801892ccu, &a);
    wr32((u32)param_1 + 0x28u, 0x80370a80u);
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = ((u32)param_4 << 2u) & 0xfffffffcu;
    r3 = tc_call(0x801b39d8u, &a);
    c1lt = param_4 < 0;
    wr32((u32)param_1 + 0x2cu, r3);
    r3 = 0u;
    if (param_4 > 0) {
        r6 = (u32)param_4 - 8u;
        if (param_4 > 8) {
            r5 = 0u;
            if (!c1lt && param_4 <= 2147483646) {
                r5 = 1u;
            }
            if (r5 != 0u) {
                r7 = 0u;
                ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r6 > 0) {
                    do {
                        r3 = r3 + 8u;
                        wr32(rd32((u32)param_1 + 0x2cu) + r7, 0u);
                        wr32(rd32((u32)param_1 + 0x2cu) + r7 + 4u, 0u);
                        wr32(rd32((u32)param_1 + 0x2cu) + r7 + 8u, 0u);
                        wr32(rd32((u32)param_1 + 0x2cu) + r7 + 0xcu, 0u);
                        wr32(rd32((u32)param_1 + 0x2cu) + r7 + 0x10u, 0u);
                        wr32(rd32((u32)param_1 + 0x2cu) + r7 + 0x14u, 0u);
                        wr32(rd32((u32)param_1 + 0x2cu) + r7 + 0x18u, 0u);
                        r4 = rd32((u32)param_1 + 0x2cu) + r7;
                        r7 = r7 + 0x20u;
                        wr32(r4 + 0x1cu, 0u);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r5 = (r3 << 2u) & 0xfffffffcu;
        ctr = (u32)param_4 - r3;
        if ((s32)r3 < param_4) {
            do {
                wr32(rd32((u32)param_1 + 0x2cu) + r5, 0u);
                r5 = r5 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32((u32)param_1 + 0x30u, 0u);
    return param_1;
}
