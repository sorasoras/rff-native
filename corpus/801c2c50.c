#include "tc_rt.h"

u32 fn_801c2c50(u32 param_1, u32 param_r4, u32 param_r5)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    f1 = tc_callf(0x8007f238u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0xccu), &a);
    r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    return r3;
}
