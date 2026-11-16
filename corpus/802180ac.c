#include "tc_rt.h"

s32 fn_802180ac(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r6 = 0, r7 = 0;
    r0 = rd32((u32)param_1 + 8u);
    r7 = 0u;
    r6 = 0u;
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            if ((u32)param_2 == rd32(rd32((u32)param_1 + 4u) + r6)) {
                return (s32)r7;
            }
            r6 = r6 + 4u;
            r7 = r7 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return -1;
}
