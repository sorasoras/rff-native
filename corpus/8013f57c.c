#include "tc_rt.h"

void fn_8013f57c(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8013f438u, &a);
    a.r[0] = r3;
    (void)tc_call(0x8013ed68u, &a);
    return;
}
