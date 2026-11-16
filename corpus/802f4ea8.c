#include "tc_rt.h"

void fn_802f4ea8(u32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x8026d088u, &a);
        wr32(param_1, 0u);
    }
    return;
}
