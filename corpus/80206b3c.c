#include "tc_rt.h"

u32 fn_80206b3c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0;
    (void)param_1;
    r0 = 0u;
    r5 = 0u;
    if (param_2 >= 504 && param_2 <= 646) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        r0 = 0u;
        if (param_2 >= 0 && param_2 <= 36) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            r0 = 0u;
            if (param_2 >= 353 && param_2 <= 360) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                if (r5 != 0u || (u32)param_2 == 0x2e8u) {
                    return 1u;
                }
                return 0u;
            }
        }
    }
    r5 = 1u;
    if (r5 != 0u || (u32)param_2 == 0x2e8u) {
        return 1u;
    }
    return 0u;
}
