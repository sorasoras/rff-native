#include "tc_rt.h"

void fn_801f10d8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    a.r[1] = 2u;
    (void)tc_call(0x800f8544u, &a);
    return;
}
