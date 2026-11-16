#include "tc_rt.h"

s32 fn_8019774c(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r6 = 0, r7 = 0, r8 = 0;
    r0 = rd32((u32)param_1 + 0xcu);
    r7 = 0xffffffffu;
    r8 = 0u;
    r6 = 0u;
    ctr = r0;
    if ((s32)r0 > 0) {
        while (rd32(rd32((u32)param_1 + 0x2cu) + r6) != (u32)param_2) {
            r6 = r6 + 4u;
            r8 = r8 + 1u;
            ctr = ctr - 1u;
            if (ctr == 0u) {
                return (s32)r7;
            }
        }
        r7 = r8;
    }
    return (s32)r7;
}
