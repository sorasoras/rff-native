#include "tc_rt.h"

void fn_80228f60(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r25 = 0, r26 = 0, r27 = 0, r29 = 0;
    TcArgs a = {0};
    r27 = param_2;
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0x2000u;
    (void)tc_call(0x8000443cu, &a);
    if (param_2 != 0u) {
        r29 = param_1 + 0x2000u;
        r26 = param_3 + ((param_2 << 2u) & 0xfffffffcu);
        for (;;) {
            r27 = r27 - 1u;
            r26 = r26 - 4u;
            if ((s32)r27 < 0) break;
            if ((s32)r27 >= 2) {
                r3 = (r27 >> 0x1fu) & 1u;
                if ((((r27 & 1u) ^ r3) - r3) == 0u) {
                    r25 = rd32(r26);
                    a.r[0] = r25;
                    r3 = tc_call(0x8025e7a4u, &a);
                    r3 = (r3 << 2u) & 0xfffffffcu;
                    r29 = r29 - (r3 + 1u);
                    a.r[0] = r29;
                    a.r[1] = r25;
                    (void)tc_call(0x80228e08u, &a);
                    wr32(r26, r29 - param_1);
                    continue;
                }
            }
            r25 = rd32(r26);
            a.r[0] = r25;
            r3 = tc_call(0x802550d4u, &a);
            r29 = r29 - (r3 + 1u);
            a.r[0] = r29;
            a.r[1] = r25;
            (void)tc_call(0x8025bd34u, &a);
            wr32(r26, r29 - param_1);
        }
        r3 = param_2 + 1u;
        r7 = 0u;
        r6 = param_1 + ((r29 - param_1) & 0xfffffffcu) - ((r3 << 2u) & 0xfffffffcu);
        if (r3 != 0u) {
            c0gt = r3 > 8u;
            r3 = param_2 - 7u;
            if (c0gt) {
                r4 = param_3;
                r5 = r6;
                ctr = ((r3 + 7u) >> 3u) & 0x1fffffffu;
                if (r3 > 0u) {
                    do {
                        r7 = r7 + 8u;
                        wr32(r5, rd32(r4));
                        wr32(r5 + 4u, rd32(r4 + 4u));
                        wr32(r5 + 8u, rd32(r4 + 8u));
                        wr32(r5 + 0xcu, rd32(r4 + 0xcu));
                        wr32(r5 + 0x10u, rd32(r4 + 0x10u));
                        wr32(r5 + 0x14u, rd32(r4 + 0x14u));
                        wr32(r5 + 0x18u, rd32(r4 + 0x18u));
                        r0 = rd32(r4 + 0x1cu);
                        r4 = r4 + 0x20u;
                        wr32(r5 + 0x1cu, r0);
                        r5 = r5 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            r3 = param_2 + 1u;
            r5 = (r7 << 2u) & 0xfffffffcu;
            r4 = param_3 + r5;
            r5 = r6 + r5;
            ctr = r3 - r7;
            if (r7 < r3) {
                do {
                    r0 = rd32(r4);
                    r4 = r4 + 4u;
                    wr32(r5, r0);
                    r5 = r5 + 4u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        wr32(r6 - 4u, param_2);
        wr32(param_1 + 8u, r6 - 4u - param_1);
    } else {
        wr32(param_1 + 8u, 0u);
    }
    return;
}
