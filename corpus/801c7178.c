#include "tc_rt.h"

void fn_801c7178(s32 param_1, u32 param_r4, u32 param_r5)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x124u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    (void)tc_call(0x800da124u, &a);
    return;
}
