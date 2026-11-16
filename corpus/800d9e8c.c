#include "tc_rt.h"

void fn_800d9e8c(u32 param_1)
{
    u32 r0 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x6cu), &a);
    if (rd32(param_1 + 0xa4u) != 0u) {
        a.r[0] = param_1 + 0x80u;
        (void)tc_call(0x800cb5a8u, &a);
    }
    r0 = rd32(param_1 + 0x74u);
    wr32(param_1 + 0xfcu, 0u);
    r0 = r0 & 0xdfffffffu;
    wr32(param_1 + 0x74u, r0);
    a.r[0] = param_1;
    f1 = tc_callf(0x800da79cu, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x88u), &a);
    return;
}
