#include "tc_rt.h"

u32 fn_8007032c(s32 param_1, u32 param_r4, u32 param_r7, u32 param_r8)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = 0x804890c8u;
    a.r[3] = 0x804890c8u;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    (void)tc_call(0x8007095cu, &a);
    wr32((u32)param_1 + 0x84u, 1u);
    wr32((u32)param_1 + 0x98u, 0u);
    wr32((u32)param_1 + 0xa0u, 0u);
    wr32((u32)param_1 + 0x9cu, 0u);
    return 1u;
}
