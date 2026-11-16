#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80218d38(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x68u);
    r3 = tc_call(0x800a4500u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x68u);
        r3 = tc_call(0x80074e90u, &a);
        if (r3 != 0u) {
            r31 = rd32((u32)param_1 + 0x34u);
            r3 = tc_call(0x80218620u, &a);
            if (r3 == r31) {
                r4 = rd32((u32)param_1 + 0x48u);
                f2 = rdf64(0x80576a00u);
                a.r[0] = r30;
                a.r[1] = r4;
                a.f[0] = (f64)(f32)((f64)rdf32(0x805769f8u) * (f64)(f32)(px_b2f((u64)(r4 ^ 0x80000000u) | 0x4330000000000000ull) - f2));
                a.f[1] = f2;
                (void)tc_call(rd32(rd32(r30) + 0x24u), &a);
            } else {
                a.r[0] = rd32((u32)param_1 + 0x68u);
                r3 = tc_call(0x80074e90u, &a);
                if (r3 != 0u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = rd32((u32)param_1 + 0x68u);
                    (void)tc_call(0x80218828u, &a);
                }
            }
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8021a3f0u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8021854cu, &a);
    return;
}
