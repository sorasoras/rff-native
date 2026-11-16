#include "tc_rt.h"

s32 fn_802d7bcc(u32 param_1, s32 param_2)
{
    u32 r5 = 0, r6 = 0;
    r6 = 0u;
    r5 = 0u;
    for (;;) {
        if (r5 != 0u) {
            r5 = r5 + (u32)rd16(param_1 + 0xau);
            r5 = rd32(r5 + 4u);
        } else {
            r5 = rd32(param_1);
        }
        if (r5 == 0u) break;
        if ((u32)param_2 == r6) {
            return (s32)r5;
        }
        r6 = r6 + 1u;
    }
    return 0;
}
