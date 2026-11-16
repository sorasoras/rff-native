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

void fn_802524d8(f64 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = param_1;
    f0 = (f64)rdf32(0x80576ce0u);
    if (param_1 < f0) {
        f1 = f0;
    } else {
        f0 = (f64)rdf32(0x80576ce8u);
        if ((param_1 > f0) || (param_1 == f0)) {
            f1 = (f64)rdf32(0x80576ce4u);
        }
    }
    f0 = (f64)(f32)((f64)rdf32(0x80576cecu) * f1);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr32(param_2, (rd32(param_2) & 0xfffe01ffu) | (((u32)px_f2b(f0) << 9u) & 0x1fe00u));
    return;
}
