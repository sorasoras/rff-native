#include "tc_rt.h"

void fn_800a97cc(f64 param_1, f64 param_2, f64 param_3, s32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_4 + 0x1a4u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = param_5;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = param_1;
        a.f[1] = param_2;
        a.f[2] = param_3;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r0) + 0x28u), &a);
        a.f[0] = param_3;
        a.f[1] = (f64)rdf32((u32)param_4 + 0x2d8u);
        a.f[2] = param_1;
        a.f[3] = param_2;
        a.r[0] = (u32)param_4;
        a.r[1] = param_5;
        a.r[2] = r3;
        a.r[3] = 0xbu;
        (void)tc_call(0x800a9298u, &a);
    }
    return;
}
