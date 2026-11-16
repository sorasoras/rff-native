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

void fn_8004581c(f64 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0;
    r0 = (u32)param_5 - 4u;
    f2 = rdf64(0x80572138u);
    f1 = (f64)(f32)(param_1 * (f64)(f32)(px_b2f((u64)(((u32)param_5 - 2u) ^ 0x80000000u) | 0x4330000000000000ull) - f2));
    r8 = (u32)px_f2b(px_ctiw(f1, ppc_fctiwz(f1)));
    if ((s32)r8 > (s32)r0) {
        f6 = (f64)rdf32(0x8057211cu);
        r8 = r0;
    } else {
        f6 = (f64)(f32)(f1 - (f64)(f32)(px_b2f((u64)(r8 ^ 0x80000000u) | 0x4330000000000000ull) - f2));
    }
    f4 = (f64)(f32)(f6 * f6);
    f5 = (f64)rdf32(0x8057211cu);
    f10 = (f64)(f32)(f6 * f4);
    f3 = (f64)rdf32(0x80572120u);
    f9 = (f64)rdf32(0x80572128u);
    r9 = (u32)param_3 + ((u32)param_4 * (r8 + 1u));
    f7 = (f64)(f32)(f5 - f6);
    f8 = (f64)(f32)(f9 * (f64)(f32)((f64)rdf32(0x8057212cu) + ppc_fmsubs(f3, f10, (f64)(f32)((f64)rdf32(0x80572130u) * f4))));
    f6 = ppc_fmadds(f3, (f64)(f32)(f6 + (f64)(f32)(f4 - f10)), f5);
    f11 = (f64)(f32)(f7 * (f64)(f32)((f64)(f32)(f9 * f7) * f7));
    f3 = (f64)(f32)(f8 * (f64)rdf32(r9 + 4u));
    f12 = (f64)(f32)(f9 * f6);
    r7 = ((u32)param_4 * r8) + (u32)param_3;
    f1 = (f64)(f32)(f8 * (f64)rdf32(r9 + 8u));
    r6 = ((u32)param_4 * (r8 + 2u)) + (u32)param_3;
    f8 = ppc_fmadds(f11, (f64)rdf32(r7), (f64)(f32)(f8 * (f64)rdf32(r9)));
    f9 = (f64)(f32)(f9 * f10);
    r4 = (u32)param_3 + ((u32)param_4 * (r8 + 3u));
    f1 = ppc_fmadds(f12, (f64)rdf32(r6 + 8u), ppc_fmadds(f11, (f64)rdf32(r7 + 8u), f1));
    f2 = ppc_fmadds(f9, (f64)rdf32(r4 + 4u), ppc_fmadds(f12, (f64)rdf32(r6 + 4u), ppc_fmadds(f11, (f64)rdf32(r7 + 4u), f3)));
    f0 = ppc_fmadds(f9, (f64)rdf32(r4 + 8u), f1);
    wrf32d(param_2, ppc_fmadds(f9, (f64)rdf32(r4), ppc_fmadds(f12, (f64)rdf32(r6), f8)));
    wrf32d(param_2 + 4u, f2);
    wrf32d(param_2 + 8u, f0);
    return;
}
