#include "tc_rt.h"

s32 fn_8025e7a4(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    r4 = (u32)param_1 - 2u;
    r3 = 0xffffffffu;
    do {
        r4 = r4 + 2u;
        r3 = r3 + 1u;
    } while ((u32)rd16(r4) != 0u);
    return (s32)r3;
}
