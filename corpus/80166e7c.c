#include "tc_rt.h"

void fn_80166e7c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(0x80574bd0u);
    a.f[0] = (f64)rdf32(0x80574bd4u);
    a.r[0] = (u32)param_2;
    a.r[1] = 0xbu;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    a.f[0] = (f64)rdf32(0x80574bd8u);
    a.r[0] = (u32)param_2 + 0xf5cu;
    (void)tc_call(0x800f16e0u, &a);
    r5 = rd32((u32)param_2 + 0xf78u);
    r3 = rd32((u32)param_2 + 0x9cu);
    wrf32d((u32)param_2 + 0xf7cu, f31);
    r3 = r3 | 0x4000000u;
    wr32((u32)param_2 + 0xf78u, r5 | (r5 ^ 0x4000u));
    wrf32d((u32)param_2 + 0xd50u, f31);
    wr32((u32)param_2 + 0x9cu, r3);
    wr32((u32)param_1 + 8u, 0u);
    return;
}
