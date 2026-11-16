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

u32 fn_8020e8d4(u32 param_1)
{
    u32 r3 = 0, r29 = 0, r31 = 0;
    f64 f2 = 0.0;
    TcArgs a = {0};
    r29 = rd32(rd32(0x80571398u) + 0x1a0u);
    if ((s32)r29 < 70) {
        a.r[0] = 0x8049c500u;
        a.r[1] = r29;
        r3 = tc_call(0x800c8888u, &a);
        r31 = r3;
        a.r[0] = 0x8049c500u;
        a.r[1] = r29;
        r3 = tc_call(0x800c8804u, &a);
        f2 = rdf64(0x80576828u);
        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r31 | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f2));
        a.r[0] = param_1;
        (void)tc_call(0x80101108u, &a);
    }
    return 0u;
}
