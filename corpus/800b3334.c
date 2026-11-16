#include "tc_rt.h"

void fn_800b3334(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x36cu;
    a.r[1] = param_r4;
    (void)tc_call(0x80154214u, &a);
    return;
}
