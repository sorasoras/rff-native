#include "tc_rt.h"

void fn_8028dfc4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x8053d578u, rd32((u32)param_1 + 0x14u));
    r5 = rd32((u32)param_1 + 0x10u);
    wr32(0x8053d580u, r5);
    wr32(0x8053d584u, r5);
    wr8(0x8053d5e8u, 0u);
    wr32(0x8053d588u, 0u);
    wr8(0x8053d598u, 0u);
    a.r[0] = 0x8028ede4u;
    (void)tc_call(0x8029a674u, &a);
    a.r[0] = 0x8053d592u;
    a.r[1] = (u32)param_1 + 8u;
    f1 = tc_callf(0x8028d2a4u, &a);
    if (rd32(0x8053d580u) != 0u) {
        a.r[0] = 0x8053d592u;
        (void)tc_call(0x8028ea40u, &a);
    } else {
        r4 = (u32)rd16(0x8053dfa4u);
        if (r4 < 0x7530u) {
            a.r[0] = 0x8053d5d0u;
            a.r[1] = 0x205u;
            a.r[2] = r4 + 0x64u;
            f1 = tc_callf(0x8028d76cu, &a);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x8053d592u;
        a.r[1] = 0x8028eeb0u;
        r3 = tc_call(0x8029790cu, &a);
        if ((r3 & 0xffu) != 1u) {
            a.r[0] = 0x8053d5d0u;
            (void)tc_call(0x8028d78cu, &a);
            a.r[0] = 0x110u;
            r3 = tc_call(0x8028a0d4u, &a);
            r30 = r3;
            if (r3 != 0u) {
                r3 = r3 + 8u;
                a.r[0] = r3;
                a.r[1] = 0x8053d592u;
                (void)tc_call(0x8028d2a4u, &a);
                wr8(r30 + 0xeu, 0u);
                wr16(r30, 0x204u);
                a.r[0] = r30;
                (void)tc_call(0x8028d750u, &a);
            }
        }
    }
    return;
}
