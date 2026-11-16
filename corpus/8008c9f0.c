#include "tc_rt.h"

void fn_8008c9f0(s32 param_1, f64 param_f1, f64 param_f2)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.r[0] = (u32)param_1 + 0x4190u;
    (void)tc_call(0x8018a66cu, &a);
    return;
}
