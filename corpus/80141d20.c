#include "tc_rt.h"

void fn_80141d20(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 8u);
    a.r[0] = r3;
    r3 = tc_call(0x800ae1d0u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x80141d6cu, &a);
    }
    return;
}
