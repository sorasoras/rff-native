#include "tc_rt.h"

void fn_801e63a4(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x801e635cu, &a);
    if (r3 != 0u) {
        a.r[0] = rd32(param_1 + 4u);
        a.r[1] = rd32(param_1);
        a.r[2] = 1u;
        (void)tc_call(0x800f8f10u, &a);
    }
    return;
}
