#include "tc_rt.h"

void fn_8022697c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_2;
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1 + 0x18u, 0u);
    r3 = tc_call(0x802302bcu, &a);
    r4 = tc_lastr4();
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = (u32)((u64)param_3 + (u64)r3 + (u64)((param_4 + r4) < param_4));
    a.r[3] = param_4 + r4;
    a.r[4] = param_5;
    (void)tc_call(0x8022672cu, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
