#include "tc_rt.h"

void fn_800ad914(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    a.r[1] = param_3;
    r3 = tc_call(0x800a51f8u, &a);
    r31 = r3;
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = r31;
    a.r[2] = 0u;
    (void)tc_call(0x800a3220u, &a);
    return;
}
