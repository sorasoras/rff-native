#include "tc_rt.h"

void fn_8030c2c4(s32 param_1)
{
    u32 r0 = 0;
    r0 = (u32)rd8((u32)param_1 + 0xa2u);
    wr8((u32)param_1 + 0x9du, 1u);
    r0 = r0 | 1u;
    wr8((u32)param_1 + 0x9fu, 0u);
    wr8((u32)param_1 + 0xa2u, (u8)r0);
    return;
}
