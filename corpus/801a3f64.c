#include "tc_rt.h"

void fn_801a3f64(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if ((f64)rdf32(param_1 + 0xde0u) > (f64)rdf32(0x80575868u)) {
        wrf32d(param_2 + 4u, (f64)(f32)((f64)rdf32(param_2 + 4u) - (f64)rdf32(param_1 + 0xde4u)));
        wrf32d(param_1 + 0xde0u, (f64)(f32)((f64)rdf32(param_1 + 0xde0u) - (f64)rdf32(param_1 + 0xde4u)));
        a.f[0] = (f64)rdf32(param_2);
        a.f[1] = (f64)rdf32(param_2 + 8u);
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        f1 = tc_callf(0x80089fc8u, &a);
        f0 = (f64)rdf32(0x80575930u);
        if ((f1 > f0) || (f1 == f0)) {
            f1 = (f64)rdf32(0x80575868u);
        }
        if ((f64)rdf32(param_2 + 4u) < f1) {
            wrf32d(param_2 + 4u, f1);
            wrf32d(param_1 + 0xde0u, (f64)rdf32(0x80575868u));
        }
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    }
    return;
}
