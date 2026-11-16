#include "tc_rt.h"

s32 fn_800916ac(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_3 == 0u) {
        a.r[0] = rd32((u32)param_1 + (((u32)param_2 << 4u) & 0xfffffff0u) + 8u);
        a.r[1] = 0xffffffffu;
        r3 = tc_call(0x8003140cu, &a);
        r30 = r3;
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
        r30 = r3;
    } else {
        r30 = (u32)param_3;
    }
    r31 = ((u32)param_2 << 4u) & 0xfffffff0u;
    r4 = (u32)param_1 + r31;
    r3 = rd32(r4 + 8u);
    r4 = rd32(r4 + 0xcu);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0xffffffffu;
    a.r[3] = r30;
    (void)tc_call(0x80031268u, &a);
    r5 = (u32)param_1 + r31;
    r4 = rd32(r5 + 4u);
    r5 = rd32(r5 + 0x10u);
    a.r[0] = r30;
    a.r[1] = r4;
    a.r[2] = r5;
    (void)tc_call(0x80040040u, &a);
    return (s32)r30;
}
