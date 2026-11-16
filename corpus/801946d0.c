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

void fn_801946d0(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0;
    f0 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(param_2 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805753f8u)), (f64)rdf32((u32)param_1 + 0x98u));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr32((u32)param_1 + 0xb0u, (u32)px_f2b(f0));
    return;
}
