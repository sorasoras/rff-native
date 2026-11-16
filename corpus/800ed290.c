#include "tc_rt.h"

void fn_800ed290(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80097e5cu, &a);
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
    a.r[1] = 0x398u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    wr32((u32)param_1 + 0xcu, r3);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800510bcu, &a);
    }
    r3 = tc_call(0x80097e5cu, &a);
    a.r[0] = (u32)param_1 + 0x1cu;
    a.r[1] = r3;
    (void)tc_call(0x800f7084u, &a);
    return;
}
