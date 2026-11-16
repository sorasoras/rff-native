#include "tc_rt.h"

void fn_80039e20(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = param_3;
    (void)tc_call(0x80227768u, &a);
    a.r[0] = 9u;
    a.r[1] = (rd32((u32)param_1 + 8u) >> 0x1cu) & 0xfu;
    (void)tc_call(0x8024f27cu, &a);
    a.r[0] = 0u;
    a.r[1] = 9u;
    a.r[2] = 1u;
    a.r[3] = 4u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    a.r[0] = 9u;
    a.r[1] = param_2;
    a.r[2] = 0xcu;
    (void)tc_call(0x8024fef4u, &a);
    return;
}
