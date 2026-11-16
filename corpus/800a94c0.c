#include "tc_rt.h"

void fn_800a94c0(f64 param_1, s32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r6 = 0;
    f64 f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_2 + 0x1a4u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = param_3;
        a.r[2] = (u32)param_4;
        a.r[3] = 0u;
        a.f[0] = param_1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r0) + 0x28u), &a);
        f3 = (f64)rdf32(0x80572ba0u);
        f2 = (f64)rdf32((u32)param_2 + 0x2d8u);
        r6 = 0x10u;
        if ((u32)param_4 != 0u) {
            r6 = 8u;
        }
        a.f[0] = param_1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f3;
        a.r[0] = (u32)param_2;
        a.r[1] = param_3;
        a.r[2] = r3;
        a.r[3] = r6;
        (void)tc_call(0x800a9298u, &a);
    }
    return;
}
