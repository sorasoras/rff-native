#include "tc_rt.h"

u32 fn_80051054(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
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
    a.r[0] = param_4;
    a.r[1] = param_3;
    a.r[2] = param_2;
    a.r[3] = param_1;
    a.r[4] = param_5;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x80050ca4u, &a);
    a.r[0] = param_5;
    (void)tc_call(0x80050c04u, &a);
    return param_1;
}
