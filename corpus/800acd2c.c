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

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_800acd2c(s32 param_1)
{
    u32 r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f2 = (f64)rdf32(0x80572be0u);
    r4 = rd32(0x805711ccu);
    f1 = (f64)(f32)((f64)px_w2f(rd32(r4 + 0x58u)) * f2);
    f0 = (f64)(f32)((f64)px_w2f(rd32(r4 + 0x5cu)) * f2);
    if ((u32)param_1 == 0x89u) {
        a.r[0] = (u32)px_f2b(px_ctiw(f1, ppc_fctiwz(f1)));
        a.r[1] = 0u;
        (void)tc_call(0x800a796cu, &a);
    } else {
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        a.r[0] = (u32)px_f2b(f0);
        a.r[1] = 0u;
        (void)tc_call(0x800a796cu, &a);
    }
    return;
}
