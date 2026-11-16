#include "tc_rt.h"

void fn_80140558(u32 param_1, u32 param_2, u32 param_3)
{
    (void)param_1;
    wr8(param_2, (u8)(((u32)rd8(param_2) & 0xfffffff3u) | ((param_3 << 2u) & 0xcu)));
    return;
}
