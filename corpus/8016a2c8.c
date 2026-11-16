#include "tc_rt.h"

void fn_8016a2c8(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    if (rd32((u32)param_2 + 0x1670u) == 0u) {
        a.f[0] = (f64)rdf32(0x80574c70u);
        a.r[0] = 0xf2u;
        a.r[1] = (u32)param_2 + 0xcf4u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        wr32((u32)param_2 + 0x1670u, r3);
    }
    r3 = rd32((u32)param_2 + 0x9cu);
    wr32((u32)param_2 + 0xe94u, 0u);
    wr32((u32)param_2 + 0x9cu, r3 | 0x24000000u);
    return;
}
