#include "tc_rt.h"

void fn_801cc220(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x801cc230u;
    a.r[1] = param_1;
    (void)tc_call(0x8004fb68u, &a);
    return;
}
