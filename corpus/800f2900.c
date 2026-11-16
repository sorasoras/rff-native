#include "tc_rt.h"

void fn_800f2900(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    wr8(0x80571230u, (u8)param_1);
    wr8(0x80571231u, (u8)param_2);
    wr8(0x80571232u, (u8)param_3);
    wr8(0x80571233u, (u8)param_4);
    return;
}
