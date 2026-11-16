#include "tc_rt.h"

void fn_8007f164(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
    r4 = rd32(r3);
    f1 = (f64)rdf32(0x80572868u);
    wr32(param_1 + 4u, rd32(r3 + 4u));
    wr32(param_1, r4);
    f0 = (f64)rdf32(param_1 + 4u);
    wr32(param_1 + 8u, rd32(r3 + 8u));
    f2 = (f64)rdf32(param_2 + 0xb4u);
    f1 = (f64)(f32)(f1 + f2);
    f0 = (f64)(f32)(f0 + f1);
    wrf32d(param_1 + 4u, f0);
    a.r[0] = param_2;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    r3 = tc_call(rd32(rd32(param_2) + 0xbcu), &a);
    if (r3 == 0u) {
        f1 = (f64)rdf32(param_3 + 4u);
        f0 = (f64)rdf32(param_3 + 8u);
        wrf32d(param_1, (f64)rdf32(param_3));
        wrf32d(param_1 + 4u, f1);
        wrf32d(param_1 + 8u, f0);
    }
    return;
}
