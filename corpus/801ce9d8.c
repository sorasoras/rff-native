#include "tc_rt.h"

void fn_801ce9d8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801cf8e8u, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    (void)tc_call(0x801cf7b0u, &a);
    return;
}
