#include "tc_rt.h"

void fn_800cd014(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    wr8((u32)param_1 + 0x24u, (u8)param_2);
    wr8((u32)param_1 + 0x25u, (u8)param_3);
    wr8((u32)param_1 + 0x26u, (u8)param_4);
    wr8((u32)param_1 + 0x27u, (u8)param_5);
    return;
}
