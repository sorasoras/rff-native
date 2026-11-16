#include "tc_rt.h"

u32 fn_8011a924(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r0 = rd32(0x80571278u);
    if (r0 == 0u) {
        a.r[0] = 0u;
        (void)tc_call(0x80043e8cu, &a);
        r0 = rd32(0x80571274u);
        r29 = rd32(0x804bc29cu);
        wr32(0x80571270u, 1u);
        wr32(0x804bc2b0u, r0);
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (r29 == 0u) {
            r6 = 0u;
        } else {
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r29;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040db8u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = r29;
                    r3 = tc_call(0x80094e80u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r29;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    r3 = tc_call(0x80040cd8u, &a);
                }
            }
            r6 = r3;
        }
        r5 = rd32(0x804bc29cu);
        r0 = rd32(0x805707f0u);
        wr32(0x804bc2e4u, r6);
        wr32(0x804bc2e0u, r5);
        wr32(0x804bc2e8u, 0u);
        wr32(0x804bc2ecu, r0);
        a.r[0] = 0x804bc2e0u;
        (void)tc_call(0x80038a7cu, &a);
        wr32(0x80571278u, 4u);
    } else {
        if (r0 == 4u) {
            r3 = tc_call(0x80038ab4u, &a);
            if (r3 != 0u) {
                r3 = 0u;
                return r3;
            }
            wr32(param_3, rd32(0x804bc2f0u));
            if (rd32(0x804bc2f0u) == 0u) {
                r3 = rd32(0x804bc2e4u);
                r0 = rd32(0x804bc29cu);
                wr32(0x804bc2b8u, r3);
                wr32(0x804bc2b4u, r0);
                a.r[0] = r3;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x80082660u, &a);
                r30 = r3;
                r3 = tc_call(0x80082678u, &a);
                r3 = r30 + ((u32)param_1 * r3);
                a.r[0] = r3;
                (void)tc_call(0x800825dcu, &a);
                r5 = rd32(0x805707f0u);
                wr32(0x804bc2bcu, 0u);
                wr32(0x804bc2c0u, r5);
                wr32(0x804bc2c4u, 0u);
                wr32(0x804bc2c8u, 0x804bc300u);
                wr32(0x804bc2ccu, 0x804bc340u);
                a.r[0] = 0x804bc2b0u;
                (void)tc_call(0x800389c4u, &a);
                wr32(0x80571278u, 3u);
                r3 = 0u;
                return r3;
            }
            a.r[0] = 1u;
            (void)tc_call(0x80043e8cu, &a);
            r3 = 1u;
            wr32(0x80571270u, 0u);
            return r3;
        }
        if (r0 == 3u) {
            r3 = tc_call(0x80038a3cu, &a);
            if (r3 == 0u) {
                a.r[0] = rd32(0x804bc2b8u);
                (void)tc_call(0x800825bcu, &a);
                r29 = rd32(0x804bc2b8u);
                r3 = tc_call(0x800545e4u, &a);
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
                wr32(0x804bc2b8u, 0u);
                wr32(param_2, rd32(0x804bc2dcu));
                wr32(param_3, rd32(0x804bc2d8u));
                wr32(0x80571278u, 0u);
                a.r[0] = 1u;
                (void)tc_call(0x80043e8cu, &a);
                wr32(0x80571270u, 0u);
                r3 = 1u;
                return r3;
            }
        }
    }
    r3 = 0u;
    return r3;
}
