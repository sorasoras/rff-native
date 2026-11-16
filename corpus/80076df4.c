#include "tc_rt.h"

void fn_80076df4(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x20u), &a);
    r0 = rd32(0x8057118cu);
    r3 = r0 & 0xffffffdfu;
    if (rd32(param_1 + 0x30u) != 0u) {
        r3 = r0 | 0x20u;
    }
    wr32(0x8057118cu, r3);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = 0x36u;
    a.r[2] = rd32(param_1 + 0x34u);
    (void)tc_call(0x800a31c0u, &a);
    return;
}
