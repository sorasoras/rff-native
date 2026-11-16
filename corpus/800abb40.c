#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800abb40(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x80097c5cu, &a);
    if (r3 != 0u) {
        r3 = tc_call(0x800aba68u, &a);
        if (r3 == 0u && rd32((u32)param_1 + 0x58u) != 0u && rd32((u32)param_1 + 0xcu) == 2u) {
            wr32((u32)param_1 + 0x58u, 0u);
        }
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800ac4acu, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800ac144u, &a);
        }
        if (rd32((u32)param_1 + 0x70u) != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            a.r[2] = 0u;
            (void)tc_call(0x800abf44u, &a);
        }
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800ac2c4u, &a);
    if (r3 != 0u) {
        wrf32d((u32)param_1 + 0x54u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x54u) + (f64)(f32)px_fdiv((f64)rdf32(0x80572bc8u), (f64)rdf32(0x80571118u))));
    }
    r3 = tc_call(0x800a7854u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        wrf32d((u32)param_1 + 0x74u, (f64)rdf32(r3));
        wrf32d((u32)param_1 + 0x78u, (f64)rdf32(r3 + 4u));
        wrf32d((u32)param_1 + 0x7cu, (f64)rdf32(r3 + 8u));
    }
    return;
}
