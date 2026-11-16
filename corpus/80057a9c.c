#include "tc_rt.h"

void fn_80057a9c(u32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_1;
    r30 = rd32(param_1);
    while (r30 != 0u) {
        r3 = r30;
        r30 = rd32(r30);
        r27 = rd32(r3 + 8u);
        if (rd32(r27 + 0x1cu) == 1u) {
            r29 = rd32(r27);
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
            wr32(r27, 0u);
            a.r[0] = param_1;
            a.r[1] = rd32(r27 + 0x14u);
            (void)tc_call(0x8007aff0u, &a);
            if (r27 != 0u) {
                r3 = tc_call(0x80057a90u, &a);
                r6 = r3;
                if (rd32(r3 + 0x10u) != 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r27;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                } else {
                    if (rd32(r3 + 0x20u) != 0u) {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = r27;
                        (void)tc_call(0x80094ec0u, &a);
                    } else {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r27;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        (void)tc_call(0x80040e98u, &a);
                    }
                }
            }
        }
    }
    r27 = 0u;
    do {
        r3 = rd32(r31 + 0x1cu);
        if ((r3 + 0x10000u) != 0xffffu && rd32(r31 + 0x24u) == 1u) {
            a.r[0] = r3;
            (void)tc_call(0x8004bc54u, &a);
            wr32(r31 + 0x1cu, 0xffffffffu);
            wr32(r31 + 0x20u, 0u);
            wr32(r31 + 0x24u, 1u);
        }
        r27 = r27 + 1u;
        r31 = r31 + 0xcu;
    } while ((s32)r27 < 181);
    return;
}
