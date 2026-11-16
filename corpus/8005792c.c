#include "tc_rt.h"

void fn_8005792c(u32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r27 = param_1;
    r31 = rd32(param_1);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r28 = rd32(r3 + 8u);
        r30 = rd32(r28);
        r3 = tc_call(0x80057a90u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r30;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
        wr32(r28, 0u);
        a.r[0] = param_1;
        a.r[1] = rd32(r28 + 0x14u);
        (void)tc_call(0x8007aff0u, &a);
        if (r28 != 0u) {
            r3 = tc_call(0x80057a90u, &a);
            r6 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r28;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = r28;
                    (void)tc_call(0x80094ec0u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r28;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                }
            }
        }
    }
    a.r[0] = param_1;
    (void)tc_call(0x8007ae84u, &a);
    r28 = 0u;
    do {
        r3 = rd32(r27 + 0x1cu);
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = r3;
            (void)tc_call(0x8004bc54u, &a);
            wr32(r27 + 0x1cu, 0xffffffffu);
            wr32(r27 + 0x20u, 0u);
            wr32(r27 + 0x24u, 1u);
        }
        r28 = r28 + 1u;
        r27 = r27 + 0xcu;
    } while ((s32)r28 < 181);
    return;
}
