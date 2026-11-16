#include "tc_rt.h"

void fn_80040f10(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = ((u32)param_1 + 0x1fu) & 0xffffffe0u;
    a.r[0] = r3;
    a.r[1] = (param_2 & 0xffffffe0u) - r3;
    a.r[2] = 1u;
    r3 = tc_call(0x8026cd2cu, &a);
    r31 = r3;
    a.r[0] = r3;
    r3 = tc_call(0x8026cf88u, &a);
    r30 = r3;
    a.r[0] = r31;
    a.r[1] = r3;
    a.r[2] = 4u;
    r3 = tc_call(0x8026ce0cu, &a);
    a.r[0] = r3;
    a.r[1] = r30;
    a.r[2] = param_3;
    (void)tc_call(0x8003acb0u, &a);
    return;
}
