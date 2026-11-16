#include "tc_rt.h"

void fn_8013ee3c(u32 param_1, u32 param_2)
{
    (void)param_1;
    wr8(param_2, (u8)((((u32)rd8(param_2) & 0xffffff7fu) | 0x40u) & 0xffffffdfu));
    return;
}
