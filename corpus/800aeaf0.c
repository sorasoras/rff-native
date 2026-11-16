#include "tc_rt.h"

void fn_800aeaf0(f64 param_f1, u32 param_r3, u32 param_r4, u32 param_r5, u32 param_r6)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = 0u;
    a.r[4] = param_r6;
    (void)tc_call(0x800aec40u, &a);
    return;
}
