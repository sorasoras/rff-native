#include "tc_rt.h"

void fn_80140380(u32 param_1, u32 param_2)
{
    (void)param_1;
    wr8(param_2, (u8)(((u32)rd8(param_2) | 0x80u) & 0xffffff9fu));
    return;
}
