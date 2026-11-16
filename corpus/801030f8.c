#include "tc_rt.h"

void fn_801030f8(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 4u);
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_2 + 0x10u);
    a.r[2] = 0u;
    r3 = tc_call(0x80103148u, &a);
    r31 = r31 + r3;
    wr32((u32)param_1 + 4u, rd32((u32)param_1 + 4u) + r31);
    return;
}
