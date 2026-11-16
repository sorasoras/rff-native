#include "tc_rt.h"

void fn_800c8b98(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r5 = 0;
    r5 = param_3;
    if (param_3 < 0x63u) {
        wr8((u32)param_1 + ((u32)param_2 * 0x60u) + 0x50u, (u8)r5);
        return;
    }
    r5 = 0x63u;
    wr8((u32)param_1 + ((u32)param_2 * 0x60u) + 0x50u, (u8)r5);
    return;
}
