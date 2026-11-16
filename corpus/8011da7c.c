#include "tc_rt.h"

void fn_8011da7c(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    r3 = (u32)param_1;
    while (r3 != 0u) {
        r4 = rd32(r3 + 0xcu);
        wr8(r3 + 0xbbu, (u8)(((u32)rd8(r3 + 0xbbu) & 0xfeu) | 1u));
        if (r4 == 0u) {
            return;
        }
        r3 = r4;
    }
    return;
}
