#include "tc_rt.h"

void fn_801f78a8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0xc0u);
    (void)tc_call(0x801fa208u, &a);
    return;
}
