#include "tc_rt.h"

void fn_8013357c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x20u;
    (void)tc_call(0x800f8388u, &a);
    return;
}
