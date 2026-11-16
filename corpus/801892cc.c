#include "tc_rt.h"

u32 fn_801892cc(u32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 c1lt = 0, ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_2 * (u32)param_3;
    wr32(param_1 + 4u, (u32)param_2);
    wr32(param_1 + 8u, (u32)param_3);
    wr32(param_1, r31);
    wr32(param_1 + 0xcu, (u32)param_4);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x28u, 0x8036f630u);
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = (u32)param_3 * (((u32)param_2 << 2u) & 0xfffffffcu);
    r3 = tc_call(0x801b39d8u, &a);
    c1lt = (s32)r31 < 0;
    wr32(param_1 + 0x24u, r3);
    r3 = 0u;
    if ((s32)r31 > 0) {
        r6 = r31 - 8u;
        if ((s32)r31 > 8) {
            r5 = 0u;
            if (!c1lt && (s32)r31 <= 2147483646) {
                r5 = 1u;
            }
            if (r5 != 0u) {
                r7 = 0u;
                ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r6 > 0) {
                    do {
                        r3 = r3 + 8u;
                        wr32(rd32(param_1 + 0x24u) + r7, 0u);
                        wr32(rd32(param_1 + 0x24u) + r7 + 4u, 0u);
                        wr32(rd32(param_1 + 0x24u) + r7 + 8u, 0u);
                        wr32(rd32(param_1 + 0x24u) + r7 + 0xcu, 0u);
                        wr32(rd32(param_1 + 0x24u) + r7 + 0x10u, 0u);
                        wr32(rd32(param_1 + 0x24u) + r7 + 0x14u, 0u);
                        wr32(rd32(param_1 + 0x24u) + r7 + 0x18u, 0u);
                        r4 = rd32(param_1 + 0x24u) + r7;
                        r7 = r7 + 0x20u;
                        wr32(r4 + 0x1cu, 0u);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r5 = (r3 << 2u) & 0xfffffffcu;
        ctr = r31 - r3;
        if ((s32)r3 < (s32)r31) {
            do {
                wr32(rd32(param_1 + 0x24u) + r5, 0u);
                r5 = r5 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    return param_1;
}
