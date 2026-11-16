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

void fn_802b82c0(f64 param_1, f64 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    r4 = ((u32)param_3 * 0x538u) - 0x7faba3a8u;
    if (param_2 != (f64)rdf32(0x80577390u)) {
        f0 = (f64)rdf32(0x80577398u);
        f3 = (f64)rdf32(0x80577394u);
        f1 = (f64)(f32)(f0 * param_1);
        f0 = (f64)(f32)(f0 * param_2);
        f1 = (f64)(f32)(f3 + f1);
        f0 = (f64)(f32)(f3 + f0);
        f1 = px_ctiw(f1, ppc_fctiwz(f1));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wr16(r4 + 0x4d0u, (u16)px_f2b(f1));
        wr16(r4 + 0x4d2u, (u16)px_f2b(f0));
    } else {
        wr16(r4 + 0x4d0u, 0x9c40u);
        wr16(r4 + 0x4d2u, 0u);
    }
    wr16(r4 + 0x4ccu, 0u);
    r0 = (u32)rd16(r4 + 0x4d0u);
    wr16(r4 + 0x4ceu, (u16)r0);
    wr16(r4 + 0x4d4u, 0u);
    wr16(r4 + 0x4d6u, (u16)r0);
    return;
}
