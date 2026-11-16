#include "tc_rt.h"

void fn_8030c3b4(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    if ((u32)rd8((u32)param_1 + 0x9fu) != param_2) {
        r0 = (u32)rd8((u32)param_1 + 0xa2u);
        wr8((u32)param_1 + 0x9fu, (u8)param_2);
        r0 = r0 | 2u;
        wr8((u32)param_1 + 0xa2u, (u8)r0);
        return;
    }
    return;
}
