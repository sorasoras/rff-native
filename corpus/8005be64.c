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

void fn_8005be64(f64 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    (void)param_2;
    r8 = (u32)rd8(param_4);
    f0 = rdf64(0x805723c8u);
    r0 = (u32)rd8(param_5 + 1u);
    f2 = px_b2f((u64)rd8(param_5) | 0x4330000000000000ull);
    wr32(0x817fdfd0u, 0x43300000u);
    r9 = (u32)rd8(param_4 + 1u);
    wr32(0x817fdfd4u, r8);
    r7 = (u32)rd8(param_4 + 2u);
    r3 = (u32)rd8(param_5 + 2u);
    wr32(0x817fdfd4u, r0);
    r0 = (u32)rd8(param_5 + 3u);
    f4 = (f64)(f32)(rdf64(0x817fdfd0u) - f0);
    f5 = ppc_fmadds(param_1, (f64)(f32)((f64)(f32)(f2 - f0) - (f64)(f32)(px_b2f((u64)r8 | 0x4330000000000000ull) - f0)), (f64)(f32)(px_b2f((u64)r8 | 0x4330000000000000ull) - f0));
    wr32(0x817fdfd4u, r9);
    r5 = (u32)rd8(param_4 + 3u);
    f7 = px_ctiw(f5, ppc_fctiwz(f5));
    wr32(0x817fdfd4u, r7);
    f5 = ppc_fmadds(param_1, (f64)(f32)(f4 - (f64)(f32)(px_b2f((u64)r9 | 0x4330000000000000ull) - f0)), (f64)(f32)(px_b2f((u64)r9 | 0x4330000000000000ull) - f0));
    f6 = px_ctiw(f5, ppc_fctiwz(f5));
    wr32(0x817fdfd4u, r0);
    f5 = ppc_fmadds(param_1, (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f0) - (f64)(f32)(px_b2f((u64)r7 | 0x4330000000000000ull) - f0)), (f64)(f32)(px_b2f((u64)r7 | 0x4330000000000000ull) - f0));
    wr32(0x817fdfd4u, r5);
    f5 = px_ctiw(f5, ppc_fctiwz(f5));
    f3 = (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f0) - (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f0));
    f0 = (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f0);
    f0 = ppc_fmadds(param_1, f3, f0);
    wr8(param_3 + 1u, (u8)px_f2b(f6));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr8(param_3, (u8)px_f2b(f7));
    wr8(param_3 + 2u, (u8)px_f2b(f5));
    wr8(param_3 + 3u, (u8)px_f2b(f0));
    return;
}
