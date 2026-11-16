#include "tc_rt.h"

void fn_8030a178(u32 param_1)
{
    u32 r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1 + 0x10u);
    a.r[1] = rd32(param_1 + 0x14u);
    a.r[2] = rd32(param_1 + 0x1cu);
    a.r[3] = rd32(param_1 + 0x18u);
    a.r[4] = rd32(param_1 + 0x20u);
    a.r[5] = rd32(param_1 + 0x24u);
    a.r[6] = (u32)rd8(param_1 + 0x28u);
    r3 = tc_call(0x803089b4u, &a);
    if (r3 == 0u) {
        wr8(rd32(param_1 + 0x10u) + 0x120u, 1u);
    }
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    a.r[0] = rd32(param_1 + 0x10u) + 0x190u;
    a.r[1] = param_1 + 0x2cu;
    f1 = tc_callf(0x802debd0u, &a);
    r30 = rd32(param_1 + 0x10u) + 0x19cu;
    if (param_1 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0xffffffffu;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 8u), &a);
        a.r[0] = r30;
        a.r[1] = param_1;
        (void)tc_call(0x802fad08u, &a);
    }
    r5 = rd32(param_1 + 0x10u);
    wr32(r5 + 0x164u, rd32(r5 + 0x164u) - 1u);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
