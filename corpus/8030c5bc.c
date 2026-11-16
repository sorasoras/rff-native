#include "tc_rt.h"

void fn_8030c5bc(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r4 = 0;
    if ((s32)param_2 > 127) {
        r4 = 0x7fu;
    } else {
        r4 = param_2 & ~(u32)((s32)param_2 >> 31);
    }
    if (r4 != (u32)rd8((u32)param_1 + 0xa3u)) {
        r0 = (u32)rd8((u32)param_1 + 0xa2u);
        wr8((u32)param_1 + 0xa3u, (u8)r4);
        r0 = r0 | 0x80u;
        wr8((u32)param_1 + 0xa2u, (u8)r0);
        return;
    }
    return;
}
