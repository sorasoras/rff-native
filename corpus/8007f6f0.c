#include "tc_rt.h"

void fn_8007f6f0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = param_1;
    a.r[2] = 0u;
    a.r[3] = param_3;
    a.r[4] = param_4;
    (void)tc_call(0x8006edf0u, &a);
    return;
}
