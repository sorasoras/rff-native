#include "tc_rt.h"

void fn_800b3310(s32 param_1, f64 param_f1)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.r[0] = (u32)param_1 + 0x36cu;
    (void)tc_call(0x80154758u, &a);
    return;
}
