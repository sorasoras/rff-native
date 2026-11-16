#include "tc_rt.h"

void fn_8021854c(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x6cu, (u32)param_2);
    a.r[0] = ((u32)param_2 * 0xcu) - 0x7fc87848u;
    r3 = tc_call(0x80255850u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802558bcu, &a);
    }
    return;
}
