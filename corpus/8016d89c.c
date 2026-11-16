#include "tc_rt.h"

void fn_8016d89c(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x800b32f4u, &a);
    if (r3 == 0u) {
        r3 = rd32((u32)param_2 + 0xe88u);
        wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    } else {
        a.f[0] = (f64)rdf32(0x80574cc4u);
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x800b3304u, &a);
        if (r3 == 0u) {
            r3 = rd32((u32)param_2 + 0xe88u);
            wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
        }
    }
    return;
}
