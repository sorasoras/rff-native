#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_80106148(u32 param_r3)
{
    f64 f2 = 0.0;
    TcArgs a = {0};
    f2 = rdf64(0x805740a0u);
    a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)rd16(0x8049908cu) | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f(0x4330000000002710ull) - f2));
    a.r[0] = param_r3;
    (void)tc_call(0x80101108u, &a);
    return 0u;
}
