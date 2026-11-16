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

u32 fn_80106560(u32 param_r3)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    f64 f2 = 0.0;
    TcArgs a = {0};
    r6 = 1u;
    r0 = (u32)rd8(0x804990b2u);
    r5 = (u32)rd16(0x804990c4u);
    if (r0 < 0x63u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r6 = (u32)rd16(r0 - 0x7fb5395au);
    } else {
        r5 = 0u;
    }
    f2 = rdf64(0x805740a0u);
    a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - f2));
    a.r[0] = param_r3;
    (void)tc_call(0x80101108u, &a);
    return 0u;
}
