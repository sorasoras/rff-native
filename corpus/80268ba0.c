#include "tc_rt.h"

void fn_80268ba0(s32 param_1, s32 param_2, s32 param_3, u32 param_r6, u32 param_r7)
{
    u32 r10 = 0;
    (void)param_r6;
    (void)param_r7;
    r10 = 0u;
    while (r10 != (u32)param_3) {
        wr8(r10 + (u32)param_1, rd8(r10 + (u32)param_2));
        r10 = r10 + 1u;
    }
    return;
}
