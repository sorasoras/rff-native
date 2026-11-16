#include "tc_rt.h"

void fn_801e5f70(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = rd32(param_1);
    a.r[1] = rd32(param_1 + 4u);
    a.r[2] = 0u;
    a.r[3] = 0x801e5c5cu;
    a.r[4] = 0xffffffffu;
    a.r[7] = param_r10;
    (void)tc_call(0x80050da4u, &a);
    return;
}
