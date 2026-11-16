#include "tc_rt.h"

u32 fn_8011ad78(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r30 = 0;
    TcArgs a = {0};
    if (rd32(0x80571278u) == 0u) {
        a.r[0] = 0u;
        (void)tc_call(0x80043e8cu, &a);
        wr32(0x80571270u, 1u);
        r30 = rd32(0x804bc29cu);
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (r30 == 0u) {
            r3 = 0u;
        } else {
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040db8u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = r30;
                    r3 = tc_call(0x80094e80u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    r3 = tc_call(0x80040cd8u, &a);
                }
            }
        }
        r5 = rd32(0x805707f0u);
        r0 = rd32(0x804bc29cu);
        wr32(0x804bc2e4u, r3);
        wr32(0x804bc2e8u, 0u);
        wr32(0x804bc2ecu, r5);
        wr32(0x804bc2e0u, r0);
        a.r[0] = 0x804bc2e0u;
        (void)tc_call(0x80038a7cu, &a);
        wr32(0x80571278u, 6u);
    }
    r3 = tc_call(0x80038ab4u, &a);
    if (r3 == 0u) {
        wr32(param_1, rd32(0x804bc2f0u));
        r0 = rd32(0x804bc2f0u);
        wr32(0x80571278u, 0u);
        if (r0 == 0u) {
            a.r[0] = rd32(0x804bc2e4u);
            (void)tc_call(0x800825bcu, &a);
        }
        r30 = rd32(0x804bc2e4u);
        r3 = tc_call(0x800545e4u, &a);
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
        a.r[0] = 1u;
        (void)tc_call(0x80043e8cu, &a);
        r3 = 1u;
        wr32(0x80571270u, 0u);
    } else {
        r3 = 0u;
    }
    return r3;
}
