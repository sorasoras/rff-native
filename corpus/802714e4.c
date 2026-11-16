#include "tc_rt.h"

void fn_802714e4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802721a4u, &a);
    if (r3 == 0u) {
        return;
    }
    wr32((u32)param_5 + 4u, param_4);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = (u32)param_5;
    a.r[4] = 1u;
    a.r[5] = 1u;
    r3 = tc_call(0x802713b8u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x802721bcu, &a);
    return;
}
