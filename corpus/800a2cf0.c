#include "tc_rt.h"

void fn_800a2cf0(u32 param_r3, u32 param_r4, u32 param_r5)
{
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = 0u;
    (void)tc_call(0x800a2be4u, &a);
    return;
}
