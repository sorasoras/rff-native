#include "tc_rt.h"

void fn_8013d38c(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x50u);
    a.r[0] = r3;
    a.r[1] = 0x80363e34u;
    a.r[2] = param_1;
    (void)tc_call(0x800cdf10u, &a);
    a.r[0] = 0xbu;
    a.r[1] = 0x16u;
    a.r[2] = 0u;
    r3 = tc_call(0x801412f8u, &a);
    a.r[0] = r3;
    a.r[1] = 2u;
    a.r[2] = param_2;
    a.r[3] = 0u;
    a.r[4] = 0x80u;
    a.r[5] = 2u;
    a.r[6] = 4u;
    (void)tc_call(0x80052ea0u, &a);
    return;
}
