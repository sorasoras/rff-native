#include "tc_rt.h"

void fn_80188a68(s32 param_1)
{
    u32 r6 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x80161e18u, &a);
    a.r[0] = (u32)param_1 + 0x2d4u;
    (void)tc_call(0x801e63a4u, &a);
    a.r[0] = (u32)param_1 + 0x348u;
    (void)tc_call(0x801e63a4u, &a);
    r6 = rd32((u32)param_1 + 0x3d8u);
    r31 = (((1u - r6) | (r6 - 1u)) >> 0x1cu) & 8u;
    a.r[0] = rd32((u32)param_1 + r31 + 0x3bcu);
    a.r[1] = rd32((u32)param_1 + 0x3ccu);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = rd32((u32)param_1 + r31 + 0x3c0u);
    a.r[1] = rd32((u32)param_1 + 0x3d0u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    return;
}
