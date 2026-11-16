#include "tc_rt.h"

void fn_800cd028(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    wr8((u32)param_1 + 0x2cu, (u8)param_2);
    wr8((u32)param_1 + 0x2du, (u8)param_3);
    wr8((u32)param_1 + 0x2eu, (u8)param_4);
    wr8((u32)param_1 + 0x2fu, (u8)param_5);
    return;
}
