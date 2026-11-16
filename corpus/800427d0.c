#include "tc_rt.h"

void fn_800427d0(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    if (param_1 != 0u) {
        r5 = param_1 + 4u;
        r6 = 0u;
        while (r6 < rd32(param_1)) {
            r0 = rd32(r5 + 4u);
            if (r0 == 0u) {
                r0 = 0u;
            } else {
                r0 = (u32)param_2 + r0;
            }
            wr32(r5 + 4u, r0);
            r5 = r5 + 8u;
            r6 = r6 + 1u;
        }
        return;
    }
    return;
}
