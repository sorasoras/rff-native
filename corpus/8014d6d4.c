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

void fn_8014d6d4(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x80040a00u, &a);
    f0 = (f64)(f32)((f64)rdf32(0x80574758u) * f1);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr32((u32)param_1 + 0x20u, (u32)px_f2b(f0) + 0x78u);
    return;
}
