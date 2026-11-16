#include "tc_rt.h"

void fn_801c86a8(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr8(param_1 + 0xcfdu, 1u);
    a.r[0] = param_1;
    f1 = tc_callf(0x8007f7e4u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x1a0u), &a);
    f1 = tc_lastf();
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = r3;
    a.r[4] = 1u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x18cu), &a);
    return;
}
