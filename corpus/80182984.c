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

void fn_80182984(s32 param_1, s32 param_2)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    f1 = (f64)rdf32(0x80575100u);
    f2 = (f64)rdf32((u32)param_1 + 0x150u);
    f0 = (f64)(f32)((f64)rdf32(0x80575104u) * f2);
    f4 = (f64)(f32)(f2 + (f64)(f32)px_fdiv(f1, (f64)(f32)((f64)rdf32(0x805750d0u) * (f64)rdf32((u32)param_1 + 0x148u))));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r0 = (u32)px_f2b(f0);
    if (f4 > f1) {
        f4 = (f64)(f32)(f4 - f1);
    }
    wrf32d((u32)param_1 + 0x150u, f4);
    f1 = (f64)rdf32(0x805750c0u);
    f5 = (f64)rdf32(0x8057510cu);
    f4 = (f64)rdf32(0x80575110u);
    f3 = (f64)rdf32(0x805750bcu);
    f2 = ppc_fmadds((f64)rdf32(0x80575108u), (f64)(f32)(px_b2f((u64)((u32)(s16)r0 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80575118u)), f1);
    if ((f2 < f1) || (f2 == f1)) {
        f1 = (f64)rdf32(0x805750e4u);
        if ((f2 < f1) || (f2 == f1)) {
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = (f64)(f32)(f5 * f2);
            wrf32d((u32)param_2 + 4u, (f64)(f32)((f64)rdf32((u32)param_2 + 4u) + (f64)(f32)((f64)(f32)(-f5 + (f64)rdf32(0x805750bcu)) * (f64)rdf32((u32)param_1 + 0x14cu))));
            return;
        }
        f2 = (f64)(f32)(f1 - (f64)(f32)(f2 - f1));
        f0 = (f64)(f32)(f2 * f2);
        f5 = ppc_fmsubs(f5, f0, f4);
        f5 = ppc_fmadds(f5, f0, f3);
        f5 = (f64)(f32)(f5 * f2);
    } else {
        f0 = (f64)rdf32(0x80575114u);
        if (f2 < f0) {
            f2 = (f64)(f32)(f2 - f1);
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = (f64)(f32)(f5 * f2);
            f5 = -f5;
        } else {
            f2 = (f64)(f32)((f64)rdf32(0x805750e4u) - (f64)(f32)(f2 - f0));
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = (f64)(f32)(f5 * f2);
            f5 = -f5;
        }
    }
    wrf32d((u32)param_2 + 4u, (f64)(f32)((f64)rdf32((u32)param_2 + 4u) + (f64)(f32)((f64)(f32)(-f5 + (f64)rdf32(0x805750bcu)) * (f64)rdf32((u32)param_1 + 0x14cu))));
    return;
}
