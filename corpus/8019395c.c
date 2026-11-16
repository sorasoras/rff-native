#include "tc_rt.h"

void fn_8019395c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r7 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r7 = rd32(rd32((u32)param_1 + 0x14u) + 0x1a4u);
    r31 = (((1u - r7) | (r7 - 1u)) >> 0x1cu) & 8u;
    a.r[0] = rd32((u32)param_1 + r31 + 0x6cu);
    a.r[1] = rd32((u32)param_1 + 0x7cu);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = rd32((u32)param_1 + r31 + 0x70u);
    a.r[1] = rd32((u32)param_1 + 0x80u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = (u32)param_1 + 0x84u;
    (void)tc_call(0x801e63a4u, &a);
    a.r[0] = (u32)param_1 + 0xf8u;
    f1 = tc_callf(0x801e63a4u, &a);
    r3 = rd32((u32)param_1 + 0x14u);
    r4 = rd32(r3 + 0x1a0u);
    if (rd32(r4 + 0x58u) != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x20u), &a);
    }
    return;
}
