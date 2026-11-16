#include "tc_rt.h"

void fn_8016a810(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    (void)param_1;
    r3 = rd32((u32)param_2 + 0xe88u);
    wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    return;
}
