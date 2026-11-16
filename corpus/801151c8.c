#include "tc_rt.h"

void fn_801151c8(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x78u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = param_2;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r0) + 0x28u), &a);
        f0 = (f64)rdf32(0x80574120u);
        wrf32d(param_2, (f64)rdf32(r3));
        f2 = (f64)rdf32(r3 + 4u);
        wrf32d(param_2 + 4u, f2);
        wrf32d(param_2 + 8u, (f64)rdf32(r3 + 8u));
        f0 = (f64)(f32)(f0 + (f64)rdf32(rd32((u32)param_1 + 0x78u) + 0xa4u));
        f0 = (f64)(f32)(f2 + f0);
        wrf32d(param_2 + 4u, f0);
    }
    return;
}
