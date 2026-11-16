#include "tc_rt.h"

void fn_8019eea0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    r3 = tc_call(0x800a4500u, &a);
    if (r3 != 0u) {
        r3 = r3 + 0x40u;
        a.r[0] = r3;
        a.r[1] = param_3;
        a.r[2] = param_3;
        (void)tc_call(0x8023411cu, &a);
    }
    return;
}
