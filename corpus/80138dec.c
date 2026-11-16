#include "tc_rt.h"

void fn_80138dec(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x79cu);
    if (r31 != 0u) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        (void)tc_call(0x801b3a38u, &a);
        wr32((u32)param_1 + 0x79cu, 0u);
    }
    a.r[0] = 0xdu;
    f1 = tc_callf(0x80141274u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x80191368u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 0x44cu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x801399fcu, &a);
    a.r[0] = 0x80571250u;
    (void)tc_call(0x80103074u, &a);
    a.r[0] = 0x804b9d30u;
    (void)tc_call(0x80100404u, &a);
    return;
}
