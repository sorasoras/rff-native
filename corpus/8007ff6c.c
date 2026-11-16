#include "tc_rt.h"

void fn_8007ff6c(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x29cu) == 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = (u32)param_3;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        wrf32d(param_2, (f64)rdf32(r3));
        wrf32d(param_2 + 4u, (f64)rdf32(r3 + 4u));
        wrf32d(param_2 + 8u, (f64)rdf32(r3 + 8u));
    } else {
        r5 = rd32(param_1 + 0x298u) + ((u32)param_3 * 0x14u);
        r6 = r5 + 4u;
        r5 = rd32(r5);
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = r5;
        a.r[3] = r6;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x38u), &a);
    }
    return;
}
