#include "tc_rt.h"

void fn_800fa1ec(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xc44u;
    a.r[1] = param_2;
    (void)tc_call(0x801f1004u, &a);
    a.r[0] = (u32)param_1 + 0xc44u;
    a.r[1] = param_3;
    (void)tc_call(0x801f1094u, &a);
    a.r[0] = (u32)param_1 + 0xc44u;
    (void)tc_call(0x801f1138u, &a);
    return;
}
