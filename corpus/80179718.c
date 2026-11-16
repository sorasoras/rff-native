#include "tc_rt.h"

void fn_80179718(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)tc_call(0x801796c8u, &a);
    a.r[1] = param_2;
    r3 = tc_call(0x8010b43cu, &a);
    wr32((u32)param_1 + 0x158u, r3);
    return;
}
