#include "tc_rt.h"

void fn_80041210(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    wr8(0x8034f818u, (u8)param_1);
    wr8(0x8034f819u, (u8)param_2);
    wr8(0x8034f81au, (u8)param_3);
    wr8(0x8034f81bu, (u8)param_4);
    return;
}
