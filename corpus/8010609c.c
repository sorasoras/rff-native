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

u32 fn_8010609c(u32 param_r3)
{
    u32 r5 = 0;
    f64 f2 = 0.0;
    TcArgs a = {0};
    r5 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
    if ((s32)r5 <= 0) {
        r5 = 0u;
    }
    if ((s32)r5 >= 65535) {
        r5 = 0xffffu;
    }
    if ((s32)r5 <= 0) {
        r5 = 0x64u;
    }
    r5 = r5 & 0xffffu;
    f2 = rdf64(0x805740a0u);
    a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)rd16(0x8049908au) | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f2));
    a.r[0] = param_r3;
    (void)tc_call(0x80101108u, &a);
    return 0u;
}
