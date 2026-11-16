#include "tc_rt.h"

u32 fn_800bede4(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = ((u32)param_2 << 4u) & 0xfffffff0u;
    r31 = (u32)param_1 + r29;
    a.r[0] = rd32(r31 + 0x50u);
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x8003140cu, &a);
    r30 = r3;
    r3 = tc_call(0x8006bb94u, &a);
    r6 = r3;
    if (r30 == 0u) {
        r30 = 0u;
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
        r30 = r3;
    }
    a.r[0] = rd32(r31 + 0x50u);
    a.r[1] = rd32((u32)param_1 + r29 + 0x54u);
    a.r[2] = 0xffffffffu;
    a.r[3] = r30;
    (void)tc_call(0x80031268u, &a);
    r5 = (u32)param_1 + r29;
    r4 = rd32(r5 + 0x58u);
    r5 = rd32(r5 + 0x5cu);
    a.r[0] = r30;
    a.r[1] = r4;
    a.r[2] = r5;
    (void)tc_call(0x80040040u, &a);
    return r30;
}
