#include "tc_rt.h"

s32 fn_8012630c(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r6 = 0;
    r0 = rd32((u32)param_1 + 0xcu);
    r6 = 0u;
    r5 = 0u;
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            if ((u32)rd16(rd32(rd32((u32)param_1 + 0x2cu) + r5) + 0xbcu) != 0x2e8u) {
                r6 = r6 + 1u;
            }
            r5 = r5 + 4u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return (s32)r6;
}
