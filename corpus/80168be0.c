#include "tc_rt.h"

void fn_80168be0(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x1f8u), &a);
    a.f[0] = (f64)rdf32(0x80574c28u);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    r5 = rd32(param_2 + 0xf78u);
    wr32(param_2 + 0xf78u, r5 | (r5 ^ 0x10000u));
    a.r[0] = param_2;
    a.r[1] = rd32(0x804863d8u);
    (void)tc_call(0x800b32d0u, &a);
    return;
}
