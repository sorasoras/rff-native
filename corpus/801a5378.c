#include "tc_rt.h"

void fn_801a5378(s32 param_1, s32 param_2)
{
    u32 r0 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        a.f[0] = (f64)rdf32(0x80575934u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0xbu;
        a.r[2] = 0u;
        (void)tc_call(0x800a94c0u, &a);
        wr32((u32)param_1 + 0xeecu, 0u);
    } else {
        if ((u32)param_2 == 1u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            (void)tc_call(0x801a2fdcu, &a);
            if (rd32((u32)param_1 + 0xd00u) == 1u) {
                r0 = rd32((u32)param_1 + 0x9cu);
                wr32((u32)param_1 + 0x2b0u, 1u);
                r0 = r0 | 0x4000000u;
                wr32((u32)param_1 + 0x260u, 0xau);
                wr32((u32)param_1 + 0x9cu, r0);
            }
        }
    }
    return;
}
