#include "tc_rt.h"

void fn_8019a1bc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x4cu;
    (void)tc_call(0x8005250cu, &a);
    wr32((u32)param_1 + 0x74u, 1u);
    return;
}
