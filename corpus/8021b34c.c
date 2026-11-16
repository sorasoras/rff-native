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

s32 fn_8021b34c(s32 param_1, s32 param_2)
{
    u32 r5 = 0;
    f64 f0 = 0.0;
    r5 = rd32(0x80571418u);
    f0 = (f64)(f32)((f64)rdf32(r5 + (((u32)param_2 << 2u) & 0xfffffffcu)) - (f64)rdf32(r5 + (((u32)param_1 << 2u) & 0xfffffffcu)));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    return (s32)px_f2b(f0);
}
