#include "tc_rt.h"

void fn_800f736c(u32 param_1, f64 param_f1, f64 param_f2, u32 param_r4)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.r[0] = rd32(param_1);
    a.r[1] = param_r4;
    (void)tc_call(0x800f6f6cu, &a);
    return;
}
