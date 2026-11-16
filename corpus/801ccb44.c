#include "tc_rt.h"

void fn_801ccb44(s32 param_1, f64 param_f1, u32 param_r4, u32 param_r5, u32 param_r6)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    (void)tc_call(0x80064c6cu, &a);
    wr32((u32)param_1 + 0xd24u, 0u);
    return;
}
