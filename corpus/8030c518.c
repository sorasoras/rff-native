#include "tc_rt.h"

void fn_8030c518(s32 param_1, s32 param_2)
{
    u32 r0 = 0;
    if ((u32)param_2 != rd32((u32)param_1 + 0x110u)) {
        r0 = (u32)rd8((u32)param_1 + 0xa2u);
        wr32((u32)param_1 + 0x110u, (u32)param_2);
        r0 = r0 | 0x10u;
        wr8((u32)param_1 + 0xa2u, (u8)r0);
        return;
    }
    return;
}
