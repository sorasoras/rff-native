#include "tc_rt.h"

void fn_801b6818(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x38u, 0u);
    a.r[0] = 0x5f3u;
    a.r[1] = 0x801b6860u;
    a.r[2] = (u32)param_1;
    r3 = tc_call(0x800f939cu, &a);
    wr32((u32)param_1 + 0x34u, r3);
    return;
}
