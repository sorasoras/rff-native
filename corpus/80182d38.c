#include "tc_rt.h"

void fn_80182d38(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    f1 = (f64)rdf32(r3);
    wrf32d(param_2, f1);
    wrf32d(param_2 + 4u, (f64)rdf32(r3 + 4u));
    f2 = (f64)rdf32(r3 + 8u);
    wrf32d(param_2 + 8u, f2);
    a.f[0] = f1;
    a.f[1] = f2;
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    f1 = tc_callf(0x80089fc8u, &a);
    f1 = (f64)(f32)f1;
    wrf32d(param_2 + 4u, (f64)(f32)(f1 - (f64)rdf32(0x80570898u)));
    return;
}
