#include "tc_rt.h"

void fn_800da354(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x74u);
    wr32((u32)param_1 + 0x98u, 0u);
    r4 = r4 | 0x40000000u;
    wr32((u32)param_1 + 0x74u, r4);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800da79cu, &a);
    return;
}
