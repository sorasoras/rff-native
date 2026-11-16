#include "tc_rt.h"

void fn_80139e74(u32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32(param_1);
    if (r4 != 0u) {
        a.r[0] = rd32(param_1 + 0x10u);
        a.r[1] = r4;
        a.r[2] = 1u;
        (void)tc_call(0x800f8f10u, &a);
        return;
    }
    return;
}
