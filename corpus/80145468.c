#include "tc_rt.h"

void fn_80145468(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x124u;
    (void)tc_call(0x8005250cu, &a);
    wr32((u32)param_1 + 0x14cu, 1u);
    a.r[0] = (u32)param_1 + 0x1b4u;
    (void)tc_call(0x8005250cu, &a);
    wr32((u32)param_1 + 0x1dcu, 1u);
    a.r[0] = (u32)param_1 + 0x94u;
    (void)tc_call(0x8005250cu, &a);
    wr32((u32)param_1 + 0xbcu, 1u);
    a.r[0] = (u32)param_1 + 0x244u;
    (void)tc_call(0x8005250cu, &a);
    wr32((u32)param_1 + 0x26cu, 1u);
    a.r[0] = (u32)param_1 + 0x2d4u;
    (void)tc_call(0x8005250cu, &a);
    wr32((u32)param_1 + 0x2fcu, 1u);
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x8005250cu, &a);
    wr32((u32)param_1 + 0x2cu, 1u);
    return;
}
