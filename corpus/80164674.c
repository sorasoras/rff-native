#include "tc_rt.h"

void fn_80164674(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 8u, param_2);
    a.r[0] = param_2;
    r3 = tc_call(0x8010322cu, &a);
    wr32((u32)param_1 + 0xcu, r3);
    return;
}
