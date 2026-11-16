#include "tc_rt.h"

void fn_80234fd0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (rd32(0x805715c0u) >= 5u) {
        wr32(0x805715c0u, 0u);
    }
    r0 = rd32(0x805715c0u);
    r3 = rd32(0x805715c0u) * 0x14u;
    wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, param_1);
    r3 = r3 - 0x7fb1a180u;
    r0 = r0 * 0x14u;
    wr32(r3 + 0x20u, param_2);
    wr32(r0 - 0x7fb1a15cu, param_3);
    r3 = tc_call(0x802302b4u, &a);
    r5 = rd32(0x805715c0u) * 0x14u;
    wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
    wr32(r5 - 0x7fb1a154u, r3);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
