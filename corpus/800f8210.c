#include "tc_rt.h"

void fn_800f8210(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x14u), &a);
    wr32(rd32(param_1 + 0x14u) + 0x18u, rd32(param_1 + 0x18u));
    wr32(rd32(param_1 + 0x18u) + 0x14u, rd32(param_1 + 0x14u));
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    if (param_1 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 8u), &a);
    }
    return;
}
