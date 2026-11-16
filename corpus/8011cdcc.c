#include "tc_rt.h"

u32 fn_8011cdcc(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r7 = 0;
    TcArgs a = {0};
    r7 = rd32(param_1 + 0x83cu);
    if ((u32)param_2 == 0u) {
        r3 = 0u;
    } else {
        if (rd32(r7 + 0x10u) != 0u) {
            a.r[0] = rd32(r7);
            a.r[1] = (u32)param_2;
            a.r[2] = rd32(r7 + 0xcu);
            a.r[3] = r7 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
        } else {
            if (rd32(r7 + 0x20u) != 0u) {
                a.r[0] = r7 + 0x24u;
                a.r[1] = 0x20u;
                a.r[2] = (u32)param_2;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                a.r[0] = rd32(r7);
                a.r[1] = (u32)param_2;
                a.r[2] = rd32(r7 + 0xcu);
                a.r[3] = r7 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            }
        }
    }
    wr32(param_1 + 0x14u, r3);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        r3 = tc_call(0x8026cd2cu, &a);
        wr32(param_1, r3);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = param_1 + 4u;
            a.r[1] = r3;
            a.r[2] = 4u;
            (void)tc_call(0x8026d4b0u, &a);
            r3 = 1u;
        }
    }
    return r3;
}
