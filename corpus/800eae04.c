#include "tc_rt.h"

u32 fn_800eae04(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x1690u;
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
            a.r[2] = 0x1690u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x1690u;
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
        f1 = tc_callf(0x8015348cu, &a);
        wr32(r31, 0x80357768u);
    }
    a.r[0] = r31;
    a.r[1] = param_1;
    a.r[2] = 0xb4u;
    a.r[3] = param_2;
    a.r[4] = param_3;
    a.r[5] = param_4;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r31) + 0xc4u), &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        if (r31 != 0u) {
            a.r[0] = r31;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r31) + 8u), &a);
        }
        r3 = 0u;
    } else {
        r3 = r31;
    }
    return r3;
}
