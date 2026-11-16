#include "tc_rt.h"

void fn_80215964(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r27 = ((u32)param_2 << 2u) & 0xfffffffcu;
    r31 = rd32(rd32((u32)param_1 + r27));
    if ((s32)r31 > 0) {
        r3 = tc_call(0x80097e5cu, &a);
        a.r[0] = (r31 << 2u) & 0xfffffffcu;
        a.r[1] = r3;
        r3 = tc_call(0x80215268u, &a);
        r29 = (u32)param_1 + r27;
        r26 = 0u;
        wr32(rd32((u32)param_1 + 0x3f8u) + r27, r3);
        r30 = rd32(rd32((u32)param_1 + 0x3f8u) + r27);
        while ((s32)r26 < (s32)r31) {
            wr32(r30, 0u);
            r25 = 0u;
            r28 = 0u;
            for (;;) {
                r3 = rd32(r29 + 0x148u);
                if ((s32)r25 >= (s32)rd32(r3)) break;
                r3 = r3 + r28;
                if (r26 == rd32(r3 + 4u) || r26 == rd32(r3 + 8u)) {
                    r3 = tc_call(0x80097e5cu, &a);
                    a.r[0] = 8u;
                    a.r[1] = r3;
                    r3 = tc_call(0x80215200u, &a);
                    if (r3 != 0u) {
                        wr32(r3, 0u);
                        wr32(r3 + 4u, 0u);
                    }
                    wr32(r3, rd32(r29 + 0x148u) + r28 + 4u);
                    r4 = rd32(r30);
                    if (r4 != 0u) {
                        wr32(r3 + 4u, rd32(r4 + 4u));
                        wr32(rd32(r30) + 4u, r3);
                    } else {
                        wr32(r30, r3);
                    }
                }
                r28 = r28 + 8u;
                r25 = r25 + 1u;
            }
            r30 = r30 + 4u;
            r26 = r26 + 1u;
        }
        r3 = tc_call(0x80097e5cu, &a);
        a.r[0] = (rd32(rd32((u32)param_1 + r27)) << 2u) & 0xfffffffcu;
        a.r[1] = r3;
        r3 = tc_call(0x80215268u, &a);
        wr32(rd32((u32)param_1 + 0x3fcu) + r27, r3);
    } else {
        wr32(rd32((u32)param_1 + 0x3f8u) + r27, 0u);
        wr32(rd32((u32)param_1 + 0x3fcu) + r27, 0u);
    }
    return;
}
