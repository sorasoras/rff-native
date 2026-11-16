#include "tc_rt.h"

void fn_80096ba8(s32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.r[0] = param_2;
    a.r[1] = (u32)param_1 + 0xe4u;
    a.r[2] = (u32)param_1 + 0xf0u;
    a.r[3] = param_3;
    (void)tc_call(0x800968c0u, &a);
    return;
}
