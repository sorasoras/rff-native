#include "tc_rt.h"

s32 fn_8015dcdc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x7cu;
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
            a.r[2] = 0x7cu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x7cu;
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
        f1 = tc_callf(0x800d1938u, &a);
        r4 = tc_lastr4();
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    a.f[0] = f1;
    a.f[1] = (f64)rdf32(0x80574a10u);
    a.r[0] = r31;
    a.r[1] = param_1;
    a.r[2] = r3;
    a.r[3] = rd32(param_1 + 0xf4u);
    r3 = tc_call(0x800d1b94u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r0 = rd32(param_1 + 0x124u);
        if (r0 == 1u) {
            wr32(r31 + 0x78u, 0u);
        } else {
            if (r0 == 2u) {
                wr32(r31 + 0x54u, 0u);
                wr32(r31 + 0x78u, 1u);
            }
        }
        r3 = r31;
        wr32(r31 + 0x30u, 1u);
        wr32(param_1 + 0x148u, r31);
    }
    return (s32)r3;
}
