#include "tc_rt.h"

void fn_800c4f20(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x290u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800c4f2cu, &a);
    return;
}
