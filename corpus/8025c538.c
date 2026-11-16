#include "tc_rt.h"

u32 fn_8025c538(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r3 = 0;
    r3 = param_1;
    ctr = (u32)param_3;
    if ((u32)param_3 != 0u) {
        do {
            if ((u32)rd16(r3) == param_2) {
                return r3;
            }
            r3 = r3 + 2u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return 0u;
}
