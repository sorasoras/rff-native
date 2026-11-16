#include "tc_rt.h"

void fn_801c2390(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8)
{
    TcArgs a = {0};
    a.r[0] = param_3;
    a.r[1] = param_4;
    a.r[2] = param_5;
    a.r[3] = param_6;
    a.r[4] = param_7;
    a.r[5] = param_8;
    a.f[0] = param_1;
    a.f[1] = param_2;
    (void)tc_call(rd32(rd32(param_3) + 0xcu), &a);
    a.f[0] = param_1;
    a.f[1] = param_2;
    a.r[0] = param_3;
    a.r[1] = param_4;
    a.r[2] = param_5;
    a.r[3] = param_6;
    a.r[4] = param_7;
    a.r[5] = param_8;
    (void)tc_call(0x8006f570u, &a);
    return;
}
