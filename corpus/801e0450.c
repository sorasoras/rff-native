#include "tc_rt.h"

void fn_801e0450(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x801ddb88u, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    (void)tc_call(0x801e048cu, &a);
    return;
}
