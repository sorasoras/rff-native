#include "tc_rt.h"

void fn_80207274(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x8007f70cu, &a);
    wr32((u32)param_1 + 0x1b0u, 1u);
    wr32((u32)param_1 + 0xe9cu, 1u);
    wr32((u32)param_1 + 0xed4u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 2u;
    (void)tc_call(0x800b1ad8u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x1eu;
    (void)tc_call(0x800b1ad8u, &a);
    return;
}
