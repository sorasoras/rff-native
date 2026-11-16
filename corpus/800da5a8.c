#include "tc_rt.h"

u32 fn_800da5a8(u32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    if ((u32)param_2 == 0x2e8u) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x8006bb94u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xe0u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r31 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0xe0u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0xe0u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r31 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            f1 = tc_callf(0x801a66e4u, &a);
        }
        a.r[0] = r31;
        a.r[1] = (u32)param_2;
        a.r[2] = param_3;
        a.r[3] = 0x804890c8u;
        a.r[4] = param_4;
        a.r[5] = param_5;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r31) + 0x48u), &a);
        wr32(r31 + 0x7cu, 1u);
        a.r[0] = r31;
        a.r[1] = param_3;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r31) + 0x50u), &a);
        a.r[0] = r31;
        (void)tc_call(0x801a6adcu, &a);
        r3 = r31;
    }
    return r3;
}
