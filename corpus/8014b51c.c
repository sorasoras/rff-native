#include "tc_rt.h"

void fn_8014b51c(s32 param_1, s32 param_2, s32 param_3)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + (((u32)param_2 << 3u) & 0xfffffff8u) + (((u32)param_3 << 2u) & 0xfffffffcu) + 0xf8u);
    (void)tc_call(0x800ff744u, &a);
    return;
}
