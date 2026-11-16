#include "tc_rt.h"

void fn_802f90b4(s32 param_1, s32 param_2)
{
    u32 ca = 0, r0 = 0;
    r0 = (u32)param_2 + 1u;
    r0 = r0 * r0;
    ca = ((s32)r0 < 0) && ((r0 & 3u) != 0u);
    r0 = (u32)((s32)r0 >> 2);
    wr16((u32)param_1 + 0x16u, (u16)((u64)r0 + (u64)ca));
    return;
}
