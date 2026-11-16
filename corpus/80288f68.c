#include "tc_rt.h"

void fn_80288f68(s32 param_1)
{
    u32 r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x80289ba4u, &a);
    r4 = tc_lastr4();
    if ((u32)param_1 == 2u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x8039222cu;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80228554u, &a);
    }
    return;
}
