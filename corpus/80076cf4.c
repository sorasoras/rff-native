#include "tc_rt.h"

void fn_80076cf4(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 0x30u, 1u);
    wr32(0x8057118cu, rd32(0x8057118cu) & 0xffffffdfu);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = 0x36u;
    r3 = tc_call(0x800a3168u, &a);
    wr32(param_1 + 0x34u, r3);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = 0x36u;
    a.r[2] = 0u;
    f1 = tc_callf(0x800a31c0u, &a);
    r4 = rd32(0x80571100u);
    wr32(param_1 + 0x2cu, (ppc_cntlzw(r4 - 1u) >> 5u) & 0x7ffffffu);
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    return;
}
