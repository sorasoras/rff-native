#include "tc_rt.h"

void fn_801dc394(u32 param_1, u32 param_2)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x805761f0u);
    r0 = 0u;
    if ((f1 == (f64)rdf32(param_2) && f1 == (f64)rdf32(param_2 + 4u)) && f1 == (f64)rdf32(param_2 + 8u)) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        wrf32d(param_1, (f64)rdf32(0x804890d4u));
        wrf32d(param_1 + 4u, (f64)rdf32(0x804890d8u));
        wrf32d(param_1 + 8u, (f64)rdf32(0x804890dcu));
    }
    a.f[0] = (f64)rdf32(param_2 + 4u);
    a.f[1] = (f64)rdf32(param_2 + 8u);
    f1 = tc_callf(0x80262c68u, &a);
    f0 = (f64)(f32)f1;
    f2 = (f64)rdf32(param_2 + 8u);
    f1 = (f64)rdf32(param_2);
    wrf32d(param_1, f0);
    a.f[0] = f1;
    a.f[1] = f2;
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    wrf32d(param_1 + 8u, (f64)rdf32(0x805761f0u));
    wrf32d(param_1 + 4u, f1);
    return;
}
