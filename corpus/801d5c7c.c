#include "tc_rt.h"

void fn_801d5c7c(s32 param_1, s32 param_2, f64 param_f1, u32 param_r5)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.r[0] = rd32((u32)param_1 + 8u);
    a.r[1] = (u32)(s8)param_2;
    a.r[2] = param_r5;
    (void)tc_call(0x801d5004u, &a);
    return;
}
