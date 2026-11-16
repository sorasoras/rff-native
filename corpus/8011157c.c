#include "tc_rt.h"

s32 fn_8011157c(u32 param_1, s32 param_2, s32 param_3)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0;
    (void)param_1;
    r6 = rd32(0x805707e8u);
    r7 = 0u;
    r3 = (u32)param_3 - r6;
    r4 = (u32)param_2 + ((r6 << 2u) & 0xfffffffcu);
    ctr = r3;
    if ((s32)r3 > 0) {
        while ((rd32(r4) - 0x7fff0000u) == 0xffffu) {
            r7 = r7 + 1u;
            r4 = r4 + 4u;
            ctr = ctr - 1u;
            if (ctr == 0u) break;
        }
    }
    return (s32)(r7 + r6);
}
