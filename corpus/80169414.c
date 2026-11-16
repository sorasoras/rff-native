#include "tc_rt.h"

void fn_80169414(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    (void)param_1;
    if ((rd32((u32)param_2 + 0xe88u) & 0x40u) != 0u) {
        r3 = rd32((u32)param_2 + 0xe88u);
        wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
        return;
    }
    return;
}
