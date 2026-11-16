#include "tc_rt.h"

u32 fn_800fe704(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = rd32(param_1 + 0xfcu);
    if ((u32)(s8)rd8(param_1 + 0xd8u) != 0u) {
        a.r[0] = r30;
        a.r[1] = 0u;
        a.r[2] = param_1 + 0xd8u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r30) + 0xcu), &a);
        f1 = tc_lastf();
        r31 = r3;
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x803391c9u;
            a.r[1] = 0x10cu;
            a.r[2] = 0x803391d9u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802e41c0u, &a);
        }
        a.r[0] = param_1;
        a.r[1] = r31;
        a.r[2] = r30;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
        r31 = 1u;
        a.r[0] = param_1;
        (void)tc_call(0x800fe588u, &a);
    }
    return r31;
}
