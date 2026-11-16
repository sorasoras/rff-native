#include "tc_rt.h"

s32 fn_80218624(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0;
    r0 = (u32)param_1 + 0x18u;
    r4 = (u32)param_2 * 0x1eu;
    if (param_1 >= 6) {
        r0 = (u32)param_1;
    }
    return (s32)((r0 * 0x708u) + ((u32)param_3 + r4));
}
