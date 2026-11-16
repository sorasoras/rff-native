#include "tc_rt.h"

u32 fn_8026b07c(u32 param_r6)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r6;
    a.r[1] = 0x8026b2a0u;
    a.r[3] = param_r6;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(0x8038f4b8u), &a);
    a.r[0] = 0x8038f4b8u;
    a.r[1] = tc_lastr4();
    a.r[3] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(0x8038f4d0u), &a);
    return 0u;
}
