#include "tc_rt.h"

void fn_801dda74(u32 param_1, f64 param_f1, f64 param_f2, u32 param_r4, u32 param_r5, u32 param_r6)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.r[0] = rd32(param_1);
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    (void)tc_call(0x801dffccu, &a);
    return;
}
