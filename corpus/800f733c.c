#include "tc_rt.h"

void fn_800f733c(u32 param_1, u32 param_r4, u32 param_r5, u32 param_r6)
{
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    (void)tc_call(0x800f6cd0u, &a);
    return;
}
