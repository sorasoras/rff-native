#include "tc_rt.h"

void fn_800a2d20(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = param_2;
    (void)tc_call(0x800a2ce8u, &a);
    return;
}
