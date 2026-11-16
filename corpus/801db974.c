#include "tc_rt.h"

s32 fn_801db974(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    a.r[1] = 0x801db9c0u;
    a.r[2] = 0x80051318u;
    a.r[3] = 0x104u;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    return param_1;
}
