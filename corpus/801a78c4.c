#include "tc_rt.h"

void fn_801a78c4(u32 param_r3, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    (void)tc_call(0x801a8488u, &a);
    return;
}
