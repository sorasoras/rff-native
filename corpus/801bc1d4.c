#include "tc_rt.h"

s32 fn_801bc1d4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    (void)tc_call(0x801f0da4u, &a);
    return param_1;
}
