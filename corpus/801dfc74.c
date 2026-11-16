#include "tc_rt.h"

void fn_801dfc74(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0xd0cu);
    (void)tc_call(0x801dd97cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x801e7230u, &a);
    return;
}
