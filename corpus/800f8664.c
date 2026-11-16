#include "tc_rt.h"

u32 fn_800f8664(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r6 = 0;
    r3 = param_1;
    r4 = param_2;
    if (param_1 == 0u || param_2 == 0u) {
        return 0u;
    }
    for (;;) {
        r6 = (u32)rd8(r3);
        if ((u32)(s8)r6 != (u32)(s8)rd8(r4)) {
            return 0u;
        }
        if ((u32)(s8)r6 == 0u) break;
        r3 = r3 + 1u;
        r4 = r4 + 1u;
    }
    return 1u;
}
