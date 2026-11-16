#include "tc_rt.h"

void fn_8015bbb4(f64 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    TcArgs a = {0};
    a.r[0] = param_2;
    (void)tc_call(0x8015ba5cu, &a);
    a.f[0] = param_1;
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = param_4;
    a.r[3] = param_5;
    a.r[4] = param_6;
    (void)tc_call(0x8015bc2cu, &a);
    return;
}
