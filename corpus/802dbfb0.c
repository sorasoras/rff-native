#include "tc_rt.h"

s32 fn_802dbfb0(s32 param_1)
{
    u32 ctr = 0, r4 = 0, r6 = 0;
    r4 = 0x80547558u;
    r6 = 0u;
    ctr = 0x10u;
    do {
        if ((s32)(s8)rd8(r4) < 0) {
            wr8(r6 - 0x7fab8aa8u, (u8)param_1);
            wr8((u32)param_1 - 0x7fab8a98u, (u8)r6);
            return (s32)r6;
        }
        r4 = r4 + 1u;
        r6 = r6 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return -1;
}
