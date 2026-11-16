#include "tc_rt.h"

void fn_8025be38(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    r4 = (u32)param_2 - 1u;
    r5 = (u32)param_1 - 1u;
    do {
        r5 = r5 + 1u;
    } while ((u32)rd8(r5) != 0u);
    r5 = r5 - 1u;
    do {
        r4 = r4 + 1u;
        r0 = (u32)rd8(r4);
        wr8(r5 + 1u, (u8)r0);
        r5 = r5 + 1u;
    } while (r0 != 0u);
    return;
}
