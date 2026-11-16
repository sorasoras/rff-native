#include "tc_rt.h"

u32 fn_801647c0(u32 param_r3)
{
    TcArgs a = {0};
    a.r[0] = param_r3;
    (void)tc_call(0x801647f8u, &a);
    return 0u;
}
