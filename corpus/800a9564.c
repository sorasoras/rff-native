#include "tc_rt.h"

void fn_800a9564(f64 param_1, f64 param_2, s32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_3 + 0x1a4u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = param_4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = param_1;
        a.f[1] = param_2;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r0) + 0x28u), &a);
        a.f[0] = param_2;
        a.f[1] = (f64)rdf32((u32)param_3 + 0x2d8u);
        a.f[2] = (f64)rdf32(0x80572ba4u);
        a.f[3] = param_1;
        a.r[0] = (u32)param_3;
        a.r[1] = param_4;
        a.r[2] = r3;
        a.r[3] = 3u;
        (void)tc_call(0x800a9298u, &a);
    }
    return;
}
