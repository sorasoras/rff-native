#include "tc_rt.h"

u32 fn_8014f1e8(u32 param_1, u32 param_r4, u32 param_r5)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    r3 = tc_call(0x800da124u, &a);
    r0 = rd32(param_1 + 0x74u);
    r31 = r3;
    wr32(param_1 + 0x120u, 0u);
    r0 = r0 & 0xfbffffffu;
    wr32(param_1 + 0x74u, r0);
    a.r[0] = param_1 + 0x158u;
    f1 = tc_callf(0x80147160u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0xe0u), &a);
    return r31;
}
