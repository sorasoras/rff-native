#include "tc_rt.h"

void fn_801e7820(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x194u), &a);
    a.r[0] = param_1 + 0xa54u;
    a.r[1] = r3;
    f1 = tc_callf(0x8020bf1cu, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x198u), &a);
    a.r[0] = param_1 + 0xb98u;
    a.r[1] = r3;
    (void)tc_call(0x8020bf1cu, &a);
    return;
}
