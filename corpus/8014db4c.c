#include "tc_rt.h"

void fn_8014db4c(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x8014db2cu, &a);
    a.r[0] = r3;
    (void)tc_call(0x8014d9a4u, &a);
    return;
}
