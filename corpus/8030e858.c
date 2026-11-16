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

s32 fn_8030e858(f64 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f2 = (f64)rdf32(0x805777f0u);
    if (!(param_1 > f2)) {
        f2 = (f64)rdf32(0x80577810u);
        if (!(param_1 < f2)) {
            f2 = param_1;
        }
    }
    f2 = f2 - rdf64(0x80577830u);
    f2 = rdf64(0x80577828u) * f2;
    a.f[0] = rdf64(0x80577820u);
    a.f[1] = f2;
    f1 = tc_callf(0x80262c74u, &a);
    f0 = rdf64(0x80577818u) * f1;
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    return (s32)px_f2b(f0);
}
