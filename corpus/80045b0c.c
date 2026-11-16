#include "tc_rt.h"

void fn_80045b0c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0;
    if (((u32)rd16(param_1 + 6u) & 1u) == 0u) {
        r0 = rd32(param_1);
        if (r0 == 0u) {
            r4 = 0u;
        } else {
            r4 = (u32)param_2 + r0;
        }
        r0 = (u32)rd16(param_1 + 6u);
        wr32(param_1, r4);
        r0 = r0 | 1u;
        wr16(param_1 + 6u, (u16)r0);
        return;
    }
    return;
}
