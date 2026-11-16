#include "tc_rt.h"

void fn_801f891c(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0xbu;
    a.r[1] = 1u;
    a.r[2] = 0u;
    r3 = tc_call(0x801412f8u, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    (void)tc_call(0x801f880cu, &a);
    a.r[0] = 0xbu;
    a.r[1] = 2u;
    a.r[2] = 0u;
    r3 = tc_call(0x801412f8u, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    (void)tc_call(0x801f880cu, &a);
    return;
}
