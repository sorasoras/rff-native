#include "tc_rt.h"

void fn_800c8c78(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r5 = 0;
    r5 = (u32)rd8((u32)param_1 + ((u32)param_2 * 0x60u) + 0x52u) - (u32)param_3;
    if ((s32)r5 > 0) {
        wr8((u32)param_1 + ((u32)param_2 * 0x60u) + 0x52u, (u8)r5);
        return;
    }
    r5 = 0u;
    wr8((u32)param_1 + ((u32)param_2 * 0x60u) + 0x52u, (u8)r5);
    return;
}
