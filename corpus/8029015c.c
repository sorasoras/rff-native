#include "tc_rt.h"

u32 fn_8029015c(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x8028b6ccu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = param_1;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x8029503cu, &a);
    r31 = r3;
    (void)tc_call(0x8028b6d0u, &a);
    return (ppc_cntlzw(r31 & 0xffu) >> 5u) & 0xffu;
}
