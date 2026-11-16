#include "tc_rt.h"

void fn_80310598(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8030fc50u, &a);
    f1 = tc_lastf();
    return;
}
