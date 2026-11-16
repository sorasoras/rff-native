#include "tc_rt.h"

void fn_8022ca4c(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8022efd4u, &a);
    a.r[0] = (u32)param_1 + 8u;
    (void)tc_call(0x8022efd4u, &a);
    wr32((u32)param_1 + 0x10u, param_2);
    wr32((u32)param_1 + 0x14u, param_3);
    wr32((u32)param_1 + 0x18u, 0u);
    wr32((u32)param_1 + 0x1cu, 0u);
    return;
}
