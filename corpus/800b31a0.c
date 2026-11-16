#include "tc_rt.h"

void fn_800b31a0(s32 param_1, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x800b1ad8u, &a);
    r3 = rd32((u32)param_1 + 0xe88u);
    wr32((u32)param_1 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    return;
}
