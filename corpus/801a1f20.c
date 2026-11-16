#include "tc_rt.h"

void fn_801a1f20(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 1u;
    (void)tc_call(0x801a1e2cu, &a);
    return;
}
