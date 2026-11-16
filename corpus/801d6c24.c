#include "tc_rt.h"

void fn_801d6c24(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801d5a0cu, &a);
    a.r[0] = param_1;
    a.r[1] = 1u;
    (void)tc_call(0x801d561cu, &a);
    return;
}
