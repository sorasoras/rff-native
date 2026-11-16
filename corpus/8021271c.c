#include "tc_rt.h"

s32 fn_8021271c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r30 = 0u;
        do {
            a.r[0] = (u32)param_1 + 0x104u;
            a.r[1] = r30;
            (void)tc_call(0x802157a0u, &a);
            r30 = r30 + 1u;
        } while ((s32)r30 < 82);
        r30 = (u32)param_1;
        r29 = 0u;
        while ((s32)r29 < (s32)rd32(rd32((u32)param_1 + 0x4ecu))) {
            r31 = rd32(r30 + 0x60u);
            r3 = tc_call(0x80097e5cu, &a);
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
            r30 = r30 + 4u;
            r29 = r29 + 1u;
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80212c4cu, &a);
        a.r[0] = (u32)param_1 + 0x104u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x8021535cu, &a);
        a.r[0] = (u32)param_1 + 0xecu;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x8021b1a8u, &a);
        if (param_2 > 0) {
            r3 = tc_call(0x80097e5cu, &a);
            r6 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = (u32)param_1;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = (u32)param_1;
                    (void)tc_call(0x80094ec0u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = (u32)param_1;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                }
            }
        }
    }
    return param_1;
}
