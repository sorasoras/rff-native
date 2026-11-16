#include "tc_rt.h"

u32 fn_80197508(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r6 = 0, r7 = 0;
    r0 = rd32((u32)param_1 + 0xcu);
    r7 = 0u;
    r6 = 0u;
    ctr = r0;
    if ((s32)r0 > 0) {
        while (rd32(rd32((u32)param_1 + 0x2cu) + r6) != (u32)param_2) {
            r6 = r6 + 4u;
            ctr = ctr - 1u;
            if (ctr == 0u) {
                return r7;
            }
        }
        r7 = 1u;
    }
    return r7;
}
