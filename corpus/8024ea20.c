#include "tc_rt.h"

void fn_8024ea20(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(param_1, (u32)param_2);
    wr32(param_1 + 4u, (u32)param_2 + param_3 - 4u);
    wr32(param_1 + 8u, param_3);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1 + 0xcu, param_3 - 0x4000u);
    wr32(param_1 + 0x10u, (param_3 >> 1u) & 0x7fffffe0u);
    r3 = tc_call(0x8022c2b0u, &a);
    wr32(param_1 + 0x14u, (u32)param_2);
    wr32(param_1 + 0x18u, (u32)param_2);
    wr32(param_1 + 0x1cu, 0u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
