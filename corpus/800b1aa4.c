#include "tc_rt.h"

u32 fn_800b1aa4(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0;
    r3 = (u32)param_1;
    r0 = rd32((u32)param_1 + 0xed4u);
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            if ((u32)param_2 == rd32(r3 + 0xed8u)) {
                return 1u;
            }
            r3 = r3 + 4u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return 0u;
}
