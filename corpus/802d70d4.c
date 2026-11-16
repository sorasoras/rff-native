#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

f64 fn_802d70d4(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x48u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x10u), &a);
    r3 = r3 ^ 0x80000000u;
    return (f64)(f32)((f64)rdf32((u32)param_1 + 0x28u) * (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80348ae0u)));
}
