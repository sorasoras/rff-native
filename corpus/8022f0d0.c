#include "tc_rt.h"

s32 fn_8022f0d0(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    r4 = rd32((u32)param_1 + 0x2d4u);
    r3 = rd32((u32)param_1 + 0x2f4u);
    while (r3 != 0u) {
        r5 = rd32(r3);
        if (r5 != 0u) {
            r0 = rd32(r5 + 0x2d0u);
            if ((s32)r0 < (s32)r4) {
                r4 = r0;
            }
        }
        r3 = rd32(r3 + 0x10u);
    }
    return (s32)r4;
}
