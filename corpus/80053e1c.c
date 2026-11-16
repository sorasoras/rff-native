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

void fn_80053e1c(f64 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    f6 = rdf64(0x805722c8u);
    r6 = ((u32)param_3 * 0x70u) - 0x7fc2d850u;
    r7 = ((u32)param_2 * 0x70u) - 0x7fc2d850u;
    r8 = (u32)rd8(r7 + 0x3au);
    r9 = (u32)rd8(r7 + 0x39u);
    r5 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    f4 = ppc_fmadds(param_1, (f64)(f32)((f64)(f32)(px_b2f((u64)rd8(r6 + 0x3au) | 0x4330000000000000ull) - f6) - (f64)(f32)(px_b2f((u64)r8 | 0x4330000000000000ull) - f6)), (f64)(f32)(px_b2f((u64)r8 | 0x4330000000000000ull) - f6));
    f5 = px_ctiw(f4, ppc_fctiwz(f4));
    r3 = (u32)rd8(r7 + 0x38u);
    f4 = ppc_fmadds(param_1, (f64)(f32)((f64)(f32)(px_b2f((u64)rd8(r6 + 0x39u) | 0x4330000000000000ull) - f6) - (f64)(f32)(px_b2f((u64)r9 | 0x4330000000000000ull) - f6)), (f64)(f32)(px_b2f((u64)r9 | 0x4330000000000000ull) - f6));
    f8 = (f64)rdf32(r7 + 0x30u);
    f4 = px_ctiw(f4, ppc_fctiwz(f4));
    f7 = (f64)rdf32(r7 + 0x34u);
    f0 = ppc_fmadds(param_1, (f64)(f32)((f64)(f32)(px_b2f((u64)rd8(r6 + 0x38u) | 0x4330000000000000ull) - f6) - (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f6)), (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f6));
    f3 = (f64)(f32)((f64)rdf32(r6 + 0x34u) - f7);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf32d(r5 + 0x154u, ppc_fmadds(param_1, (f64)(f32)((f64)rdf32(r6 + 0x30u) - f8), f8));
    wrf32d(r5 + 0x150u, ppc_fmadds(param_1, f3, f7));
    wr8(r5 + 0x158u, (u8)px_f2b(f0));
    wr8(r5 + 0x159u, (u8)px_f2b(f4));
    wr8(r5 + 0x15au, (u8)px_f2b(f5));
    return;
}
