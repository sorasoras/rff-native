#include "tc_rt.h"

u32 fn_80058468(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_3 * 0xcu;
    r31 = (u32)param_1 + r30;
    if ((rd32(r31 + 0x1cu) + 0x10000u) != 0xffffu) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_3;
        a.r[2] = 1u;
        (void)tc_call(0x80057c80u, &a);
    }
    a.r[0] = param_2;
    a.r[1] = 0u;
    r3 = tc_call(0x8004bf2cu, &a);
    wr32(r31 + 0x1cu, r3);
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = param_2;
            (void)tc_call(0x80094ec0u, &a);
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        }
    }
    wr32((u32)param_1 + r30 + 0x24u, 1u);
    return rd32(r31 + 0x1cu);
}
