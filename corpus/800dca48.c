#include "tc_rt.h"

void fn_800dca48(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 8u);
    if (r5 != 0u) {
        while (r5 != 0u) {
            r0 = rd32(r5);
            if (r0 == 0u) {
                wr32(r5, (u32)param_2);
                return;
            }
            r5 = r0;
        }
        return;
    }
    wr32((u32)param_1 + 8u, (u32)param_2);
    return;
}
