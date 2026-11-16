#include "tc_rt.h"

void fn_801bd7b8(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1 + 0x30u);
    a.r[1] = rd32(param_1 + 0x2cu);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    r31 = param_1;
    r30 = 0u;
    do {
        a.r[0] = rd32(r31 + 0x2d0u);
        a.r[1] = rd32(r31 + 0x2d4u);
        a.r[2] = 1u;
        (void)tc_call(0x800f8f10u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x68u;
    } while ((s32)r30 < 10);
    a.r[0] = param_1 + 0x4cu;
    (void)tc_call(0x80190938u, &a);
    r30 = 0u;
    r31 = 0u;
    while ((s32)r30 < (s32)rd32(param_1)) {
        a.r[0] = rd32(param_1 + 0x164u) + r31;
        (void)tc_call(0x80161e18u, &a);
        r31 = r31 + 0xd0u;
        r30 = r30 + 1u;
    }
    return;
}
