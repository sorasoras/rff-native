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

f64 fn_8030e68c(f64 param_1)
{
    f64 f0 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(0x805777fcu);
    if (param_1 > f2) {
        f0 = (f64)(f32)((f64)rdf32(0x80577804u) * f2);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        return (f64)rdf32(((((u32)px_f2b(f0) + 0x388u) << 2u) & 0xfffffffcu) - 0x7fcb5cf8u);
    }
    f2 = (f64)rdf32(0x80577800u);
    if (param_1 < f2) {
        f0 = (f64)(f32)((f64)rdf32(0x80577804u) * f2);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        return (f64)rdf32(((((u32)px_f2b(f0) + 0x388u) << 2u) & 0xfffffffcu) - 0x7fcb5cf8u);
    }
    f2 = param_1;
    f0 = (f64)(f32)((f64)rdf32(0x80577804u) * f2);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    return (f64)rdf32(((((u32)px_f2b(f0) + 0x388u) << 2u) & 0xfffffffcu) - 0x7fcb5cf8u);
}
