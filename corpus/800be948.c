#include "tc_rt.h"

void fn_800be948(u32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r27 = param_1;
    r28 = 0u;
    r31 = param_1;
    do {
        r29 = rd32(r31);
        if (r29 != 0u) {
            r3 = tc_call(0x80057a90u, &a);
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
            wr32(r31, 0u);
        }
        r28 = r28 + 1u;
        r31 = r31 + 8u;
    } while ((s32)r28 < 10);
    r28 = 0u;
    do {
        wr32(r27 + 0x50u, 0u);
        wr32(r27 + 0x54u, 0u);
        wr32(r27 + 0x58u, 0u);
        a.r[0] = rd32(r27 + 0x5cu);
        (void)tc_call(0x8004bc54u, &a);
        r28 = r28 + 1u;
        wr32(r27 + 0x5cu, 0xffffffffu);
        r27 = r27 + 0x10u;
    } while ((s32)r28 < 744);
    return;
}
