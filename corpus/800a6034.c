#include "tc_rt.h"

void fn_800a6034(u32 param_r3, u32 param_r4, u32 param_r5)
{
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = 1u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    (void)tc_call(0x800a605cu, &a);
    return;
}
