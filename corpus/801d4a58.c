#include "tc_rt.h"

void fn_801d4a58(f64 param_1, f64 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    a.f[0] = param_1;
    a.r[0] = param_3;
    a.r[1] = param_4;
    (void)tc_call(0x801d4b10u, &a);
    a.f[0] = param_2;
    a.r[0] = param_3;
    a.r[1] = param_4;
    (void)tc_call(0x801d4aacu, &a);
    return;
}
