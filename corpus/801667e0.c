#include "tc_rt.h"

void fn_801667e0(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = rd32((u32)param_2 + 0x15f4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
    } else {
        r3 = 0u;
    }
    a.r[0] = (u32)param_2;
    a.r[1] = r3;
    (void)tc_call(0x800b32d0u, &a);
    a.f[0] = (f64)rdf32(0x80574bb8u);
    a.r[0] = (u32)param_2;
    a.r[1] = 7u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    return;
}
