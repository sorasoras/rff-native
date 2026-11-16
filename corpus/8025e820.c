#include "tc_rt.h"

void fn_8025e820(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    r4 = (u32)param_2 - 2u;
    r5 = (u32)param_1 - 2u;
    do {
        r5 = r5 + 2u;
    } while ((u32)rd16(r5) != 0u);
    r5 = r5 - 2u;
    do {
        r4 = r4 + 2u;
        r0 = (u32)rd16(r4);
        wr16(r5 + 2u, (u16)r0);
        r5 = r5 + 2u;
    } while (r0 != 0u);
    return;
}
