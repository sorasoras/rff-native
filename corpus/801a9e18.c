#include "tc_rt.h"

void fn_801a9e18(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x9f0u, 3u);
    wr32((u32)param_1 + 0x9f8u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801a9e70u, &a);
    return;
}
