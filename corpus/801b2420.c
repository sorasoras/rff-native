#include "tc_rt.h"

void fn_801b2420(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.f[0] = (f64)rdf32(0x80575bdcu);
        a.r[0] = 1u;
        a.r[1] = 6u;
        (void)tc_call(0x800523b0u, &a);
        wr32(0x805710d8u, 0u);
    } else {
        a.f[0] = (f64)rdf32(0x80575bdcu);
        a.r[0] = 0u;
        a.r[1] = 6u;
        (void)tc_call(0x800523b0u, &a);
        wr32(0x805710d8u, 0u);
    }
    r4 = rd32(param_3);
    r5 = rd32(0x803724c4u);
    r3 = rd32(param_3 + 4u);
    wr32((u32)param_1 + 0x38u, rd32(0x803724c0u));
    r0 = rd32(param_3 + 8u);
    wr32((u32)param_1 + 0x3cu, r5);
    wr32((u32)param_1 + 0x40u, rd32(0x803724c8u));
    wr32((u32)param_1 + 0x44u, r4);
    wr32((u32)param_1 + 0x48u, r3);
    wr32((u32)param_1 + 0x4cu, r0);
    return;
}
