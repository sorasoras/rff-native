#include "tc_rt.h"

void fn_801a171c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)((s32)((rd32((u32)param_1 + 0x148u) << 1u) & 0xc0000000u) >> 31) == 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800a8f70u, &a);
        if (r3 != 0u) {
            if (rd32((u32)param_1 + 0x2b0u) != 0u) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x801a1d34u, &a);
            }
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a1dd8u, &a);
        }
    }
    return;
}
