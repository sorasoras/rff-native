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

u32 fn_800448e0(f64 param_1, f64 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(param_3 + 0x1cu);
    f0 = (f64)(f32)((f64)(f32)(param_2 - (f64)rdf32(param_3 + 8u)) * f2);
    f1 = (f64)(f32)((f64)(f32)(param_1 - (f64)rdf32(param_3)) * f2);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    f1 = px_ctiw(f1, ppc_fctiwz(f1));
    return rd32(rd32(param_3 + 0x28u) + (((u32)rd8(((u32)px_f2b(f0) * (u32)rd16(param_3 + 0x20u)) + (rd32(param_3 + 0x24u) + (u32)px_f2b(f1))) << 2u) & 0xfffffffcu));
}
