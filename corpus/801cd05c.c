#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

u32 fn_801cd05c(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r31 = 1u;
    if ((u32)param_2 == 0u) {
        a.f[0] = (f64)rdf32(0x80575ed4u);
        a.r[0] = (u32)param_1;
        a.r[1] = 8u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        (void)tc_call(0x801ccb44u, &a);
        wr32((u32)param_1 + 0xd18u, 1u);
    } else {
        if ((u32)param_2 == 1u) {
            r0 = rd32((u32)param_1 + 0xd18u) + 1u;
            f2 = rdf64(0x80575ec8u);
            f0 = (f64)rdf32(0x80575ed8u);
            wr32((u32)param_1 + 0xd18u, r0);
            f1 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2);
            if ((f1 > f0) || (f1 == f0)) {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x801d0178u, &a);
                wr32((u32)param_1 + 0xd04u, r3);
                r31 = 0u;
            }
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801cea60u, &a);
    return r31;
}
