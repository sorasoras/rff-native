#include "tc_rt.h"

void fn_80050da4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    TcArgs a = {0};
    wr32(0x803c8640u, param_4);
    wr32(0x803c8644u, param_5);
    wr32(0x803c8648u, 0u);
    wr32(0x803c864cu, 0u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = param_1;
    a.r[1] = 0xffffffffu;
    a.r[2] = 0u;
    a.r[3] = param_2;
    a.r[4] = param_3;
    a.r[5] = 0x803c8640u;
    a.r[6] = 0x803d0000u;
    a.r[7] = param_r10;
    (void)tc_call(0x80051054u, &a);
    return;
}
