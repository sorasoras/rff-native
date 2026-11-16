#include "tc_rt.h"

void fn_803059d0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_3;
    r3 = tc_call(0x802f85a0u, &a);
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = param_2;
    (void)tc_call(0x802f86b8u, &a);
    r3 = tc_call(0x802f85a0u, &a);
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = param_2;
    (void)tc_call(0x802f87f4u, &a);
    return;
}
