#include "tc_rt.h"

void fn_8019437c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = 2u;
    (void)tc_call(0x800f8544u, &a);
    return;
}
