#include "tc_rt.h"

void fn_8014b810(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x170u, 1u);
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x8014b774u, &a);
    return;
}
