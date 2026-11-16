#include "tc_rt.h"

void fn_80298eec(s32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = ((u32)param_1 * 0x22u) - 0x7fac21dcu;
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = 0x22u;
    (void)tc_call(0x8000443cu, &a);
    wr8(r31 + 0x20u, 0u);
    return;
}
