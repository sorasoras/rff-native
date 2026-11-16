#include "tc_rt.h"

void fn_80213c3c(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r0 = (u32)rd8((u32)param_1 + 0x28u);
    wr32((u32)param_1 + 4u, 0xffffffffu);
    r0 = r0 | 0x80u;
    wr32((u32)param_1 + 0x30u, 0xffffffffu);
    wr32((u32)param_1 + 0x2cu, 0xffffffffu);
    wr32((u32)param_1 + 8u, 0xffffffffu);
    wr8((u32)param_1 + 0x28u, (u8)r0);
    a.r[0] = 6u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    r3 = tc_call(0x8021258cu, &a);
    f0 = (f64)rdf32(0x80576960u);
    wr32((u32)param_1 + 0x4cu, r3);
    wr32((u32)param_1 + 0x50u, 0u);
    wrf32d((u32)param_1 + 0x9c0u, f0);
    wr8((u32)param_1 + 0x9c4u, 0u);
    return;
}
