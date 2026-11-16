#include "tc_rt.h"

void fn_800cd704(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x8049f1b0u;
    a.r[1] = param_1;
    (void)tc_call(0x8015f2f0u, &a);
    return;
}
