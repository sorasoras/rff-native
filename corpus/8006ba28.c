#include "tc_rt.h"

u32 fn_8006ba28(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0xa48u) != 0u) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x8006bb94u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xb8u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r31 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0xb8u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0xb8u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
            }
            r31 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            f1 = tc_callf(0x800d5c2cu, &a);
            r4 = tc_lastr4();
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        f1 = tc_lastf();
        a.r[0] = r31;
        a.r[1] = param_2;
        a.r[2] = r3;
        a.r[3] = 0x804890c8u;
        a.r[4] = param_3;
        a.r[5] = param_4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r31) + 0x48u), &a);
        wr32(r31 + 0x7cu, 1u);
        a.r[0] = rd32(r31 + 0xa4u);
        f1 = tc_callf(0x800cf688u, &a);
        a.r[0] = r31;
        a.r[1] = param_1;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r31) + 0x4cu), &a);
        if (rd32(param_1 + 0xa48u) == 0u) {
            wr32(param_1 + 0xa48u, r31);
        }
        if (rd32(param_1 + 0x144u) != 0u) {
            a.r[0] = rd32(param_1 + 0xa48u);
            a.r[1] = param_1;
            a.r[2] = 0u;
            (void)tc_call(0x800d612cu, &a);
        } else {
            a.r[0] = rd32(param_1 + 0xa48u);
            a.r[1] = param_1;
            a.r[2] = 0x15u;
            (void)tc_call(0x800d612cu, &a);
        }
        r3 = 1u;
    }
    return r3;
}
