#include "tc_rt.h"

void fn_800b2470(f64 param_1, s32 param_2)
{
    TcArgs a = {0};
    wrf32d((u32)param_2 + 0x1cu, param_1);
    wrf32d((u32)param_2 + 0x20u, param_1);
    wrf32d((u32)param_2 + 0x24u, param_1);
    a.f[0] = param_1;
    a.r[0] = (u32)param_2 + 0x428u;
    (void)tc_call(0x8014c070u, &a);
    return;
}
