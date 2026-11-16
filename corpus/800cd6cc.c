#include "tc_rt.h"

void fn_800cd6cc(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = 0x8049f1b0u;
    a.r[1] = param_1;
    a.r[2] = param_2;
    (void)tc_call(0x8015f21cu, &a);
    return;
}
