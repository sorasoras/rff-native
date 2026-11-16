#include "tc_rt.h"

void fn_8007f8d8(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f2 = (f64)rdf32(param_2);
    f1 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2 + 8u);
    wrf32d(param_1 + 0x234u, f2);
    wrf32d(param_1 + 0x238u, f1);
    wrf32d(param_1 + 0x23cu, f0);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = param_1 + 0x234u;
    f1 = tc_callf(0x8007eeacu, &a);
    wrf32d(param_1 + 0x240u, f1);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    f1 = (f64)(f32)((f64)rdf32(param_1 + 0x240u) - f1);
    a.f[0] = f1;
    f1 = tc_callf(0x8007edd4u, &a);
    wrf32d(param_1 + 0x244u, f1);
    return;
}
