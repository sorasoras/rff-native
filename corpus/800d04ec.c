#include "tc_rt.h"

void fn_800d04ec(f64 param_1, f64 param_2, s32 param_3, u32 param_4, u32 param_5, f64 param_f3, f64 param_f4)
{
    TcArgs a = {0};
    a.f[0] = param_1;
    a.f[1] = param_2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.r[0] = (u32)param_3 + 0x24u;
    a.r[1] = param_5;
    (void)tc_call(0x800cfd98u, &a);
    wr32((u32)param_3 + 0x20u, param_4);
    wr32((u32)param_3 + 0x48u, 0u);
    wr32((u32)param_3 + 0x50u, 0u);
    wr32((u32)param_3 + 0x58u, 4u);
    wrf32d((u32)param_3 + 0x64u, param_2);
    wr32((u32)param_3 + 0x6cu, 0u);
    wr8((u32)param_3 + 0x1cu, 0x81u);
    a.r[0] = (u32)param_3;
    a.r[1] = 1u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    (void)tc_call(0x800ce5b4u, &a);
    return;
}
