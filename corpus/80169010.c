#include "tc_rt.h"

void fn_80169010(u32 param_1, s32 param_2)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_2 + 0xf78u);
    r5 = r5 ^ (r5 & 0x10u);
    wr32((u32)param_2 + 0xf78u, r5 ^ (r5 & 0x10000u));
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x80168fb0u, &a);
    return;
}
