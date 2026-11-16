#include "tc_rt.h"

void fn_8026b2a0(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    (void)tc_call(0x8022f02cu, &a);
    a.r[0] = param_2;
    a.r[1] = 0x500u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x8026ae18u, &a);
    return;
}
