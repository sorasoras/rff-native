#include "tc_rt.h"

void fn_80235730(void)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (rd32(0x805715c0u) >= 5u) {
        wr32(0x805715c0u, 0u);
    }
    r0 = rd32(0x805715c0u);
    r3 = rd32(0x805715c0u) * 0x14u;
    wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, 0x10u);
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
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0x80235facu;
    (void)tc_call(0x8023bcf8u, &a);
    return;
}
