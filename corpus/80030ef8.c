#include "tc_rt.h"

s32 fn_80030ef8(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    r0 = rd32((u32)param_1 + 8u);
    r5 = 0u;
    r6 = 0u;
    ctr = r0;
    if (r0 > 0u) {
        do {
            if ((s32)r6 < 0) {
                r4 = 0u;
            } else {
                r4 = rd32((u32)param_1 + 0xcu) + (rd32((u32)param_1 + 0x28u) * r6);
            }
            if ((u32)(s16)rd16(r4 + 0x66u) != 0xffffffffu) {
                r5 = r5 + 1u;
            }
            r6 = r6 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return (s32)r5;
}
