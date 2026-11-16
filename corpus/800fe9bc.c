#include "tc_rt.h"

void fn_800fe9bc(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0xd4u) != 0u) {
        a.r[0] = param_1;
        f1 = tc_callf(0x800fe8d4u, &a);
        a.r[0] = param_1;
        a.r[1] = param_1 + 0x20u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x34u), &a);
    }
    return;
}
