#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8004c730(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    f1 = tc_callf(0x80234440u, &a);
    if (f1 > (f64)rdf32(0x805721b8u)) {
        f4 = (f64)(f32)px_fdiv((f64)rdf32(0x805721bcu), f1);
        f2 = (f64)(f32)((f64)rdf32(param_2 + 4u) * f4);
        f0 = (f64)(f32)((f64)rdf32(param_2 + 8u) * f4);
        wrf32d(param_1, (f64)(f32)((f64)rdf32(param_2) * f4));
        wrf32d(param_1 + 4u, f2);
        wrf32d(param_1 + 8u, f0);
    } else {
        f1 = (f64)rdf32(0x805721c0u);
        wrf32d(param_1, f1);
        wrf32d(param_1 + 4u, f1);
        wrf32d(param_1 + 8u, f1);
    }
    return;
}
