#include "tc_rt.h"

void fn_801454e4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x3f4u;
    (void)tc_call(0x8005250cu, &a);
    wr32((u32)param_1 + 0x41cu, 1u);
    return;
}
