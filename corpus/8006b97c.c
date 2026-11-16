#include "tc_rt.h"

void fn_8006b97c(s32 param_1)
{
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32((u32)param_1 + 0x948u);
    if (f1 > (f64)rdf32(0x805725d8u)) {
        wr32((u32)param_1 + 0x970u, rd32((u32)param_1 + 0x970u) | 0x80000000u);
        wrf32d((u32)param_1 + 0x94cu, (f64)rdf32(0x803d2790u));
        wrf32d((u32)param_1 + 0x950u, (f64)rdf32(0x803d2794u));
        wrf32d((u32)param_1 + 0x954u, (f64)rdf32(0x803d2798u));
        wrf32d((u32)param_1 + 0x958u, (f64)rdf32(0x803d279cu));
        a.f[0] = f1;
        f1 = tc_callf(0x80262b10u, &a);
        f1 = (f64)(f32)f1;
        f4 = (f64)rdf32((u32)param_1 + 0x958u);
        f3 = (f64)rdf32((u32)param_1 + 0x954u);
        f2 = (f64)rdf32((u32)param_1 + 0x950u);
        wrf32d(0x803d2790u, f1);
        wrf32d(0x803d2794u, f2);
        wrf32d(0x803d2798u, f3);
        wrf32d(0x803d279cu, f4);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        (void)tc_call(0x8003d818u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80064fbcu, &a);
    return;
}
