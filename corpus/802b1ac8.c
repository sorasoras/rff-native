#include "tc_rt.h"

void fn_802b1ac8(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = (u32)param_1 + 0x18u;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x8028a77cu, &a);
    }
    while ((u32)rd8((u32)param_1 + 0x73u) == 0u) {
        a.r[0] = (u32)param_1 + 0x18u;
        r3 = tc_call(0x8028a9f8u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (r3 == 0u) break;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)rd16((u32)param_1 + 0x68u);
        a.r[1] = r4;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802a5e34u, &a);
    }
    return;
}
