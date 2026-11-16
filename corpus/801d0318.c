#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_801d0318(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32((u32)param_1 + 0x32cu);
    a.r[0] = rd32((u32)param_1 + 0x70u);
    (void)tc_call(0x80040728u, &a);
    if (rd32((u32)param_1 + 0x338u) != 0u) {
        f1 = (f64)rdf32((u32)param_1 + 0x33cu);
        f3 = (f64)rdf32(0x803d27a4u);
        f2 = (f64)rdf32(0x803d27a8u);
        f0 = (f64)rdf32(0x803d27acu);
        wrf32d(0x817fdfd8u, (f64)rdf32(0x803d27a0u));
        wrf32d(0x817fdfdcu, f3);
        wrf32d(0x817fdfe0u, f2);
        wrf32d(0x817fdfe4u, f0);
        a.f[0] = f1;
        f1 = tc_callf(0x80262b10u, &a);
        f2 = (f64)rdf32(0x80575e98u);
        f0 = (f64)px_w2f(ppc_single_bits(f0));
        f3 = (f64)(f32)(f2 + (f64)(f32)f1);
        f1 = (f64)(f32)((f64)rdf32(0x80570988u) - f2);
        wrf32d(0x817fdfd4u, f0);
        f1 = (f64)(f32)(f3 * f1);
        f1 = ppc_fmadds(f1, (f64)rdf32(0x80575e9cu), f2);
        wrf32d(0x803d27acu, (f64)px_w2f(rd32(0x817fdfd4u)));
        r0 = ppc_single_bits(f1);
        f2 = (f64)px_w2f(ppc_single_bits(f1));
        f1 = (f64)px_w2f(ppc_single_bits(f1));
        wrf32d(0x803d27a0u, f2);
        wrf32d(0x803d27a4u, f1);
        wrf32d(0x803d27a8u, (f64)px_w2f(r0));
        a.r[0] = 0x803d27a0u;
        (void)tc_call(0x8004a4fcu, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x8007e6d4u, &a);
    if (rd32((u32)param_1 + 0x338u) != 0u) {
        f2 = (f64)px_w2f(rd32(0x817fdfdcu));
        f1 = (f64)px_w2f(rd32(0x817fdfe0u));
        f0 = (f64)px_w2f(rd32(0x817fdfe4u));
        wrf32d(0x803d27a0u, (f64)px_w2f(rd32(0x817fdfd8u)));
        wrf32d(0x803d27a4u, f2);
        wrf32d(0x803d27a8u, f1);
        wrf32d(0x803d27acu, f0);
        a.r[0] = 0x803d27a0u;
        (void)tc_call(0x8004a4fcu, &a);
    }
    return;
}
