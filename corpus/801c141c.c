#include "tc_rt.h"

void fn_801c141c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    r4 = ((u32)param_2 << 2u) & 0xfffffffcu;
    wr16((u32)param_1 + r4, 0x2e8u);
    r3 = (u32)param_1 + r4;
    wr8(r3 + 3u, 1u);
    wr8(r3 + 2u, 0u);
    return;
}
