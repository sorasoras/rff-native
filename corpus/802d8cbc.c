#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

f64 fn_802d8cbc(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x802d609cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x34u), &a);
        r31 = r3;
    } else {
        r31 = 0u;
    }
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x802d6f98u, &a);
    f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)(r31 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80348b08u)) * f1);
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x50u) + f1);
    return f1;
}
