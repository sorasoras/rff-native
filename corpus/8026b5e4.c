#include "tc_rt.h"

void fn_8026b5e4(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r3 = 0, r5 = 0;
    (void)param_1;
    r5 = 0u;
    if (param_2 > 0) {
        r3 = (u32)param_2 - 8u;
        if (param_2 > 8) {
            ctr = ((r3 + 7u) >> 3u) & 0x1fffffffu;
            if ((s32)r3 > 0) {
                do {
                    r5 = r5 + 8u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        ctr = (u32)param_2 - r5;
        if ((s32)r5 >= param_2) {
            return;
        }
        do {
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}
