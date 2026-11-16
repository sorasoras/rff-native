#include "tc_rt.h"

void fn_80152310(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_2 + 0x15f4u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r0) + 0xcu), &a);
    } else {
        r3 = 0u;
    }
    a.r[0] = (u32)param_2;
    a.r[1] = r3;
    (void)tc_call(0x800b32d0u, &a);
    a.r[0] = (u32)param_2;
    (void)tc_call(0x800b516cu, &a);
    a.f[0] = (f64)rdf32(0x8057484cu);
    a.r[0] = (u32)param_2;
    a.r[1] = 1u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    a.f[0] = (f64)rdf32(0x8057484cu);
    a.r[0] = (u32)param_2;
    a.r[1] = 2u;
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    wr32((u32)param_1 + 0xcu, 0u);
    return;
}
