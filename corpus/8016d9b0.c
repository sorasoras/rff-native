#include "tc_rt.h"

void fn_8016d9b0(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    r3 = tc_call(0x800b2ea8u, &a);
    if (r3 != 0u) {
        a.r[0] = param_2;
        a.r[1] = 0x15u;
        (void)tc_call(0x800b31a0u, &a);
    }
    return;
}
