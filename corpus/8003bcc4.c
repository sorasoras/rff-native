#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_8003bcc4(f64 param_1, f64 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80571f60u);
    a.f[0] = (f64)(f32)px_fdiv(param_1, f0);
    a.f[1] = (f64)rdf32(0x80571f64u);
    f1 = tc_callf(0x8003bc9cu, &a);
    f30 = f1;
    a.f[0] = (f64)(f32)px_fdiv(param_2, f0);
    a.f[1] = (f64)rdf32(0x80571f64u);
    f1 = tc_callf(0x8003bc9cu, &a);
    f0 = (f64)rdf32(0x80571f68u);
    f31 = f1;
    if (f0 == f30 && f0 == f1) {
        r3 = 0u;
    } else {
        a.f[0] = (f64)(f32)((f64)rdf32(param_3) + f30);
        a.f[1] = (f64)rdf32(0x80571f64u);
        f1 = tc_callf(0x8003bc9cu, &a);
        f0 = (f64)rdf32(param_3 + 4u);
        wrf32d(param_3, f1);
        a.f[0] = (f64)(f32)(f0 - f31);
        a.f[1] = (f64)rdf32(0x80571f64u);
        f1 = tc_callf(0x8003bc9cu, &a);
        wrf32d(param_3 + 4u, f1);
        r3 = 1u;
    }
    return r3;
}
