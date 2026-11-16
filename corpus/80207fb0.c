#include "tc_rt.h"

void fn_80207fb0(s32 param_1, u32 param_r5)
{
    TcArgs a = {0};
    a.r[0] = 0x8049c500u;
    a.r[1] = rd32((u32)param_1 + 4u);
    a.r[2] = param_r5;
    (void)tc_call(0x800c8904u, &a);
    a.r[0] = 0x8049c500u;
    a.r[1] = rd32((u32)param_1 + 4u);
    (void)tc_call(0x800c8888u, &a);
    return;
}
