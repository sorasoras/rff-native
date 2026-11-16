#include "tc_rt.h"

void fn_801f0ff4(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x4cu, 0u);
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x800f8388u, &a);
    return;
}
