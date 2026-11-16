#include "tc_rt.h"

void fn_802e24a8(u32 param_r3, u32 param_r4, u32 param_r5)
{
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = 1u;
    (void)tc_call(0x802e2c58u, &a);
    return;
}
