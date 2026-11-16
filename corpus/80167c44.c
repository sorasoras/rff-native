#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_80167c44(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32((u32)param_1 + 0x16f0u);
    if (f1 < (f64)rdf32(0x80574bfcu)) {
        f7 = (f64)rdf32(0x803d27a0u);
        f6 = (f64)rdf32(0x803d27a4u);
        f5 = (f64)rdf32(0x803d27a8u);
        f4 = (f64)rdf32(0x803d27acu);
        f3 = (f64)px_w2f(ppc_single_bits(f1));
        f2 = (f64)px_w2f(ppc_single_bits(f1));
        f1 = (f64)px_w2f(ppc_single_bits(f1));
        f0 = (f64)px_w2f(rd32(0x8033a804u));
        wrf32d(0x803d27a0u, f3);
        wrf32d(0x803d27a4u, f2);
        wrf32d(0x803d27a8u, f1);
        wrf32d(0x803d27acu, f0);
        a.r[0] = 0x803d27a0u;
        (void)tc_call(0x8004a4fcu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        (void)tc_call(0x800b62f8u, &a);
        wrf32d(0x803d27a0u, (f64)px_w2f(ppc_single_bits(f7)));
        wrf32d(0x803d27a4u, (f64)px_w2f(ppc_single_bits(f6)));
        wrf32d(0x803d27a8u, (f64)px_w2f(ppc_single_bits(f5)));
        wrf32d(0x803d27acu, (f64)px_w2f(ppc_single_bits(f4)));
        a.r[0] = 0x803d27a0u;
        (void)tc_call(0x8004a4fcu, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        (void)tc_call(0x800b62f8u, &a);
    }
    a.r[0] = (u32)param_1 + 0x16d0u;
    a.r[1] = param_2;
    (void)tc_call(0x801674ccu, &a);
    return;
}
