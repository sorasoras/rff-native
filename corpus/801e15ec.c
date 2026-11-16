#include "tc_rt.h"

void fn_801e15ec(u32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1 + 0x24u) + 0x28u), &a);
    f2 = (f64)rdf32(0x80576200u);
    f0 = (f64)(f32)((f64)rdf32(param_1 + 0x28u) + f1);
    wrf32d(param_1 + 0x28u, f0);
    if (!(f2 < f0)) {
        f2 = f0;
    }
    wrf32d(param_1 + 0x28u, f2);
    r3 = rd32(param_1);
    wrf32d(r3 + 0xd0u, (f64)(f32)f2);
    wr32(r3 + 0xccu, 1u);
    return;
}
