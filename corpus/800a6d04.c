#include "tc_rt.h"

void fn_800a6d04(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x54u);
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = param_2;
    a.r[3] = param_3;
    (void)tc_call(0x8010c69cu, &a);
    return;
}
