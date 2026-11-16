#include "tc_rt.h"

void fn_80004304(u32 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0;
    r5 = param_1 & 0xfffffff1u;
    r4 = (u32)param_2 + (param_1 - r5);
    do {
        r5 = r5 + 8u;
        r4 = r4 - 8u;
    } while ((s32)r4 >= 0);
    return;
}
