#include "tc_rt.h"

u32 fn_800f86b8(u32 param_1, u32 param_2)
{
    u32 r4 = 0, r6 = 0, r7 = 0;
    r4 = param_2;
    if (param_1 == 0u || param_2 == 0u) {
        return 0u;
    }
    do {
        r6 = param_1;
        r7 = r4;
        while ((u32)(s8)rd8(r6) == (u32)(s8)rd8(r7)) {
            r6 = r6 + 1u;
            r7 = r7 + 1u;
            if ((u32)(s8)rd8(r6) == 0u) {
                return 1u;
            }
            if ((u32)(s8)rd8(r7) == 0u) {
                return 0u;
            }
        }
        r4 = r4 + 1u;
    } while ((u32)(s8)rd8(r4) != 0u);
    return 0u;
}
