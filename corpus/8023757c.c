#include "tc_rt.h"

void fn_8023757c(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0u;
    a.r[7] = param_r10;
    (void)tc_call(0x8023cdc0u, &a);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (rd32(0x805715c0u) >= 5u) {
        wr32(0x805715c0u, 0u);
    }
    r0 = rd32(0x805715c0u);
    r3 = rd32(0x805715c0u) * 0x14u;
    wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, 0x25u);
    r3 = r3 - 0x7fb1a180u;
    r0 = r0 * 0x14u;
    wr32(r3 + 0x20u, 0u);
    wr32(r0 - 0x7fb1a15cu, 0u);
    r3 = tc_call(0x802302b4u, &a);
    r5 = rd32(0x805715c0u) * 0x14u;
    wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
    wr32(r5 - 0x7fb1a154u, r3);
    a.r[0] = r31;
    f1 = tc_callf(0x8022c2d8u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x20000u;
    a.r[1] = 0x80237644u;
    (void)tc_call(0x8023c60cu, &a);
    return;
}
