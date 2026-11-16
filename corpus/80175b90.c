#include "tc_rt.h"

void fn_80175b90(u32 param_1)
{
    TcArgs a = {0};
    if (rd32(param_1 + 0x124u) != 2u) {
        wr32(param_1 + 0x124u, 2u);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0xa8u), &a);
        return;
    }
    return;
}
