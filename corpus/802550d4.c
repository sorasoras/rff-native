#include "tc_rt.h"

s32 fn_802550d4(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    r4 = (u32)param_1 - 1u;
    r3 = 0xffffffffu;
    do {
        r4 = r4 + 1u;
        r3 = r3 + 1u;
    } while ((u32)rd8(r4) != 0u);
    return (s32)r3;
}
