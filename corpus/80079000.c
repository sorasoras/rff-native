#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80079000(f64 param_1, f64 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f0 = (f64)(f32)(param_2 - param_1);
    f3 = (f64)rdf32(0x80572798u);
    wrf32d(param_3 + 4u, f3);
    wrf32d(param_3, f3);
    if ((f0 < f3) || (f0 == f3)) {
        wrf32d(param_3 + 8u, param_1);
    } else {
        r3 = tc_call(0x80040b64u, &a);
        wrf32d(param_3 + 8u, ppc_fmadds((f64)(f32)(param_2 - param_1), (f64)(f32)((f64)rdf32(0x805727b8u) * (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x805727c8u))), param_1));
    }
    if ((f64)rdf32(0x80572798u) < (f64)rdf32(param_3 + 8u)) {
        r3 = tc_call(0x80040b64u, &a);
        f31 = ppc_fmsubs((f64)rdf32(0x805727bcu), (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x805727c8u)), (f64)rdf32(0x805727c0u));
        a.f[0] = f31;
        f1 = tc_callf(0x80262b10u, &a);
        wrf32d(param_3, (f64)(f32)((f64)rdf32(param_3 + 8u) * (f64)(f32)f1));
        a.f[0] = f31;
        f1 = tc_callf(0x80262704u, &a);
        f1 = (f64)(f32)f1;
        wrf32d(param_3 + 8u, (f64)(f32)((f64)rdf32(param_3 + 8u) * f1));
    }
    return;
}
