#include "tc_rt.h"

void fn_80167018(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x80574bd4u);
    a.r[0] = (u32)param_2;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    f1 = (f64)rdf32(0x80574bd8u);
    wr32((u32)param_1 + 0xcu, 0u);
    wr32((u32)param_2 + 0x9cu, rd32((u32)param_2 + 0x9cu) | 0x4000000u);
    a.f[0] = f1;
    a.r[0] = (u32)param_2 + 0xf5cu;
    (void)tc_call(0x800f16e0u, &a);
    r3 = rd32((u32)param_2 + 0xf78u);
    wrf32d((u32)param_2 + 0xd50u, (f64)rdf32(0x80574bd4u));
    wr32((u32)param_2 + 0xf78u, r3 | (r3 ^ 1u));
    return;
}
