#include "tc_rt.h"

void fn_8006e674(s32 param_1, f64 param_f1, f64 param_f2, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    (void)tc_call(0x8006f570u, &a);
    wr32((u32)param_1 + 0x38u, 0u);
    return;
}
