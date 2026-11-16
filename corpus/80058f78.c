#include "tc_rt.h"

u32 fn_80058f78(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_3 != 0u) {
        r29 = (u32)param_2 * 0x14u;
        r4 = (u32)param_1 + r29;
        wr32(r4 + 0xcu, 0u);
        r30 = r4 + 0xcu;
    } else {
        r29 = (u32)param_2 * 0x14u;
        r4 = (u32)param_1 + r29;
        r30 = r4 + 0xcu;
        r4 = rd32(r4 + 0xcu);
        r0 = r4 - 1u;
        wr32(r30, r0);
        if ((s32)r0 > 0) {
            r3 = 0u;
            return r3;
        }
    }
    if (rd32(r30) == 0u || (u32)param_3 != 0u) {
        r31 = rd32((u32)param_1 + r29);
        if (r31 != 0u) {
            r3 = tc_call(0x8005885cu, &a);
            r6 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r31;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = r31;
                    (void)tc_call(0x80094ec0u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r31;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                }
            }
            r31 = (u32)param_1 + r29;
            wr32((u32)param_1 + r29, 0u);
            r3 = rd32(r31 + 4u);
            if (r3 != 0u) {
                r3 = r3 - 0x10u;
                a.r[0] = r3;
                (void)tc_call(0x80058900u, &a);
            }
            wr32(r31 + 4u, 0u);
        }
        r3 = 1u;
        wr32(r30, 0u);
    } else {
        r3 = 0u;
    }
    return r3;
}
