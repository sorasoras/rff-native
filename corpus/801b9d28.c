#include "tc_rt.h"

void fn_801b9d28(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    r3 = tc_call(0x801894d8u, &a);
    a.r[0] = (u32)param_1 + 0x3cu;
    a.r[1] = 0x5ffu;
    a.r[2] = r3;
    (void)tc_call(0x801e61b4u, &a);
    wr32((u32)param_1 + 0x2cu, 0u);
    return;
}
