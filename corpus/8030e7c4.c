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

f64 fn_8030e7c4(f64 param_1, u32 param_2)
{
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0;
    f0 = (f64)rdf32(0x805777f4u);
    if (!(param_1 > f0)) {
        f0 = (f64)rdf32(0x80577810u);
        if (!(param_1 < f0)) {
            f0 = param_1;
        }
    }
    f2 = (f64)rdf32(0x805777f8u);
    f3 = (f64)rdf32(0x805777f4u);
    f0 = (f64)(f32)(f2 + (f64)(f32)((f64)rdf32(0x8057780cu) * (f64)(f32)(f0 * f2)));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    f0 = (f64)rdf32(rd32(((rd32(param_2) << 2u) & 0xfffffffcu) - 0x7fc62900u) + (((u32)px_f2b(f0) << 2u) & 0xfffffffcu));
    if (!(f0 > f3)) {
        f3 = (f64)rdf32(0x80577810u);
        if (!(f0 < f3)) {
            f3 = f0;
        }
    }
    return f3;
}
