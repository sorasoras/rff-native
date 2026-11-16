#include "tc_rt.h"

void fn_801405a4(u32 param_1, u32 param_2)
{
    (void)param_1;
    wr8(param_2, (u8)(((u32)rd8(param_2) & 0xffffff3fu) | 0x20u));
    return;
}
