#include "tc_rt.h"

void fn_801dd8bc(u32 param_1)
{
    TcArgs a = {0};
    if (rd32(param_1) != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_1 + 0x24u) + 0x18u), &a);
        return;
    }
    return;
}
