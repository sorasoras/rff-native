#include "tc_rt.h"

s32 fn_801eba8c(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = (u32)param_2;
    a.r[2] = 0x18u;
    (void)tc_call(0x80004338u, &a);
    wr32((u32)param_1 + 0x30u, 0u);
    wr32((u32)param_1 + 0x2cu, 0u);
    wr32((u32)param_1 + 0x28u, 0u);
    return (s32)((u32)param_2 + 0x20u);
}
