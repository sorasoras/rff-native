#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801719e8(s32 param_1)
{
    u32 r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = rdf64(0x80574de8u);
    f24 = (f64)rdf32(0x80574df8u);
    f25 = (f64)rdf32(0x80574df0u);
    r29 = 0u;
    f26 = (f64)rdf32(0x80574e18u);
    f27 = (f64)rdf32(0x80574ce4u);
    r30 = (u32)param_1;
    f28 = (f64)rdf32(0x80574d08u);
    f29 = (f64)rdf32(0x80574d04u);
    f30 = (f64)rdf32(0x80574dfcu);
    do {
        a.f[0] = (f64)(f32)(f24 * (f64)(f32)(px_b2f((u64)(r29 ^ 0x80000000u) | 0x4330000000000000ull) - f31));
        f1 = tc_callf(0x80262b10u, &a);
        f1 = (f64)(f32)(f25 * (f64)(f32)f1);
        wrf32d(r30 + 0x78u, f1);
        a.f[0] = (f64)(f32)(f24 * (f64)(f32)(px_b2f((u64)(r29 ^ 0x80000000u) | 0x4330000000000000ull) - f31));
        f1 = tc_callf(0x80262704u, &a);
        r29 = r29 + 1u;
        f0 = (f64)(f32)(f26 * (f64)(f32)f1);
        wrf32d(r30 + 0x7cu, f0);
        f0 = (f64)(f32)(f0 + f30);
        f1 = (f64)(f32)((f64)rdf32(r30 + 0x78u) + ppc_fnmsubs((f64)(f32)(f27 * (f64)rdf32((u32)param_1 + 0x1810u)), f28, f29));
        wrf32d(r30 + 0x78u, f1);
        wrf32d(r30 + 0x7cu, f0);
        wrf32d(r30 + 4u, f1);
        wrf32d(r30 + 8u, f0);
        r30 = r30 + 0x174u;
    } while ((s32)r29 < 8);
    return;
}
