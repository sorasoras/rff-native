#include "tc_rt.h"

void fn_80161c7c(u32 param_1)
{
    TcArgs a = {0};
    if (rd32(param_1) != 0u) {
        a.r[0] = param_1 + 4u;
        a.r[1] = 1u;
        (void)tc_call(0x801f0fa0u, &a);
        return;
    }
    return;
}
