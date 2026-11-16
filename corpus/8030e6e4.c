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

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

f64 fn_8030e6e4(f64 param_1, u32 param_2)
{
    u32 r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(0x805777f0u);
    if (!(param_1 > f2)) {
        f2 = (f64)rdf32(0x80577808u);
        if (!(param_1 < f2)) {
            f2 = param_1;
        }
    }
    f1 = (f64)(f32)((f64)rdf32(0x805777f0u) + f2);
    f2 = (f64)rdf32(0x805777f8u);
    f1 = (f64)(f32)(f1 * f2);
    r4 = rd32(((rd32(param_2) << 2u) & 0xfffffffcu) - 0x7fc62900u);
    f0 = (f64)(f32)(f2 + (f64)(f32)((f64)rdf32(0x8057780cu) * f1));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    f2 = (f64)rdf32(r4 + (((u32)px_f2b(f0) << 2u) & 0xfffffffcu));
    if ((u32)rd8(param_2 + 4u) != 0u) {
        f2 = (f64)(f32)px_fdiv(f2, (f64)rdf32(r4 + 0x200u));
    }
    if ((u32)rd8(param_2 + 5u) == 0u) {
        f1 = (f64)rdf32(0x805777f4u);
        if (!(f2 > f1)) {
            f1 = (f64)rdf32(0x80577810u);
            if (!(f2 < f1)) {
                f1 = f2;
            }
        }
    } else {
        f1 = (f64)rdf32(0x805777f0u);
        if (!(f2 > f1)) {
            f1 = (f64)rdf32(0x80577810u);
            if (!(f2 < f1)) {
                f1 = f2;
            }
        }
    }
    return f1;
}
