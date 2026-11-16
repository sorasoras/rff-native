#include "tc_rt.h"

void fn_8013d290(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8013d1d0u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x8013d1d0u, &a);
    }
    return;
}
