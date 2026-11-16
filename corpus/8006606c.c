#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_8006606c(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    f1 = tc_callf(0x80234440u, &a);
    f31 = f1;
    if (f1 < (f64)rdf32(0x805725d0u)) {
        f1 = (f64)rdf32(0x80572550u);
        wrf32d(param_2, f1);
        wrf32d(param_3, f1);
    } else {
        a.f[0] = (f64)rdf32(param_1);
        a.f[1] = (f64)rdf32(param_1 + 8u);
        f1 = tc_callf(0x80262c68u, &a);
        wrf32d(param_2, (f64)(f32)f1);
        a.f[0] = (f64)(f32)px_fdiv((f64)rdf32(param_1 + 4u), f31);
        f1 = tc_callf(0x80262c64u, &a);
        f0 = (f64)(f32)f1;
        f1 = f31;
        f0 = -f0;
        wrf32d(param_3, f0);
    }
    return f1;
}
