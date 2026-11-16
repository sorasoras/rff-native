#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_801ce880(s32 param_1)
{
    u32 r3 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801ce1a0u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801ce20cu, &a);
    wr32(0x8057118cu, rd32(0x8057118cu) & 0xffffdfffu);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801cf87cu, &a);
    f0 = (f64)rdf32((u32)param_1 + 0xd68u);
    f3 = (f64)px_w2f(ppc_single_bits(f0));
    f2 = (f64)px_w2f(ppc_single_bits(f0));
    f1 = (f64)px_w2f(ppc_single_bits(f0));
    f0 = (f64)px_w2f(ppc_single_bits((f64)rdf32(0x803d27acu)));
    wrf32d(0x803d27a0u, f3);
    wrf32d(0x803d27a4u, f2);
    wrf32d(0x803d27a8u, f1);
    wrf32d(0x803d27acu, f0);
    a.r[0] = 0x803d27a0u;
    (void)tc_call(0x8004a4fcu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x801cf7b0u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    (void)tc_call(0x801ce348u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    (void)tc_call(0x801ce348u, &a);
    r30 = 2u;
    do {
        r3 = tc_call(0x80040b64u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = 1u;
        a.r[3] = ((r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 2u) & 0x3fffffffu) * 6u)) << 0x13u) & 0xfff80000u;
        (void)tc_call(0x801ce368u, &a);
        r30 = r30 + 1u;
    } while (r30 < 0xau);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x801ce278u, &a);
    return;
}
