#include "tc_rt.h"

void fn_801fb548(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1 + 0x74u);
    a.r[1] = rd32(param_1 + 0x70u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    r31 = param_1;
    r30 = 0u;
    do {
        a.r[0] = rd32(r31);
        a.r[1] = rd32(r31 + 0x14u);
        a.r[2] = 1u;
        (void)tc_call(0x800f8f10u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 5);
    a.r[0] = param_1 + 0x120u;
    (void)tc_call(0x801e63a4u, &a);
    a.r[0] = param_1 + 0x194u;
    (void)tc_call(0x801e63a4u, &a);
    a.r[0] = param_1 + 0x208u;
    (void)tc_call(0x801e63a4u, &a);
    return;
}
