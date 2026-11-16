#include "tc_rt.h"

s32 fn_80129f3c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = 3u;
    a.r[3] = 3u;
    (void)tc_call(0x801892ccu, &a);
    wr32((u32)param_1 + 0x28u, 0x80363490u);
    return param_1;
}
