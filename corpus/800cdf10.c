#include "tc_rt.h"

void fn_800cdf10(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_3;
    r3 = tc_call(0x800a41b0u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = r3;
    (void)tc_call(0x800cdf5cu, &a);
    return;
}
