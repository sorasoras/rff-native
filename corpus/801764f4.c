#include "tc_rt.h"

void fn_801764f4(s32 param_1, u32 param_2, f64 param_f1, f64 param_f2)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.r[0] = (u32)param_1 + 0x230u;
    a.r[1] = 0u;
    a.r[2] = param_2;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0x1001005u;
    (void)tc_call(0x8006e674u, &a);
    return;
}
