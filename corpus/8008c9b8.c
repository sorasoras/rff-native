#include "tc_rt.h"

void fn_8008c9b8(s32 param_1, u32 param_r4, u32 param_r5, u32 param_r6)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0x4150u) * 0x4150u);
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    (void)tc_call(0x8008bd08u, &a);
    return;
}
