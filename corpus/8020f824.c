#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

u32 fn_8020f824(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)(f32)((f64)rdf32(0x80576850u) * (f64)rdf32(0x804b9e60u));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = (u32)px_f2b(f0);
    (void)tc_call(0x80100bb4u, &a);
    return 1u;
}
