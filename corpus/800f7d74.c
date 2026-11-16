#include "tc_rt.h"

u32 fn_800f7d74(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x804b9e80u;
    f1 = tc_callf(0x8012151cu, &a);
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
    f1 = tc_callf(0x80161c70u, &a);
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
    (void)tc_call(0x801ebec0u, &a);
    a.r[0] = 0x804d9048u;
    (void)tc_call(0x801945bcu, &a);
    r3 = rd32(0x80571398u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x801bfde0u, &a);
        wr32(0x805706e0u, r3);
        a.r[0] = rd32(0x80571398u);
        r3 = tc_call(0x801bfde8u, &a);
        wr32(0x80571180u, r3);
        a.r[0] = rd32(0x80571398u);
        (void)tc_call(0x801bfc68u, &a);
        (void)tc_call(0x801c0f64u, &a);
    }
    if (rd32((u32)param_1 + 0xcu) != 0u) {
        wr32(0x8057118cu, rd32(0x8057118cu) | 2u);
        wr32((u32)param_1 + 0xcu, 0u);
    }
    (void)tc_call(0x801e5994u, &a);
    return 1u;
}
