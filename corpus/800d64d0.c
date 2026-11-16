#include "tc_rt.h"

void fn_800d64d0(s32 param_1, u32 param_2, u32 param_3, f64 param_f1)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.r[0] = (u32)param_1 + 0x24u;
    a.r[1] = param_3;
    (void)tc_call(0x800d29d4u, &a);
    wr32((u32)param_1 + 0x20u, param_2);
    wr8((u32)param_1 + 0x1cu, 0x82u);
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = 2u;
    a.r[3] = 0u;
    (void)tc_call(0x800ce5b4u, &a);
    return;
}
