#include "tc_rt.h"

u32 fn_8021b1a8(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r28 = 0u;
        r29 = 0u;
        wr32(param_1, 0x803788b0u);
        do {
            r27 = rd32(rd32(param_1 + 8u) + r29);
            while (r27 != 0u) {
                r26 = r27;
                r27 = rd32(r27 + 4u);
                r3 = tc_call(0x80097e5cu, &a);
                r6 = r3;
                if (rd32(r3 + 0x10u) != 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r26;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                } else {
                    if (rd32(r3 + 0x20u) != 0u) {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = r26;
                        (void)tc_call(0x80094ec0u, &a);
                    } else {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r26;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        (void)tc_call(0x80040e98u, &a);
                    }
                }
            }
            r28 = r28 + 1u;
            r29 = r29 + 4u;
        } while ((s32)r28 < 82);
        r29 = rd32(param_1 + 8u);
        r3 = tc_call(0x80097e5cu, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r29;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r29;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r29;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
        r29 = rd32(param_1 + 0x14u);
        r3 = tc_call(0x80097e5cu, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r29;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r29;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r29;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
