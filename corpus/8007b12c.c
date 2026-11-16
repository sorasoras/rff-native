#include "tc_rt.h"

void fn_8007b12c(u32 param_1, u32 param_2, u32 param_3)
{
    wr8(0x805706f8u, (u8)param_2);
    wr8(0x805706f9u, (u8)param_1);
    wr8(0x805706fau, (u8)param_3);
    return;
}
