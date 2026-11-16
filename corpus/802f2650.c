#include "tc_rt.h"

void fn_802f2650(u32 param_1, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(param_1);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_r4;
        (void)tc_call(0x802436b4u, &a);
        return;
    }
    return;
}
