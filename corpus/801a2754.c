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

void fn_801a2754(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0;
    f0 = rdf64(0x805758a0u);
    r0 = (u32)rd16((u32)param_1 + 0x1deu);
    r5 = (u32)rd16((u32)param_1 + 0x1e0u);
    wr32(0x817fdf9cu, r0);
    r4 = (u32)rd16((u32)param_1 + 0x1e2u);
    wr32(0x817fdf98u, 0x43300000u);
    r6 = (u32)rd8((u32)param_1 + 0x1e4u);
    f6 = px_b2f((u64)r0 | 0x4330000000000000ull);
    wr32(0x817fdfa4u, r5);
    r0 = (u32)rd8((u32)param_1 + 0x1e8u);
    wr32(0x817fdf9cu, r4);
    r5 = (u32)rd8((u32)param_1 + 0x1e5u);
    f2 = px_b2f((u64)r4 | 0x4330000000000000ull);
    wr32(0x817fdfa0u, 0x43300000u);
    r4 = (u32)rd8((u32)param_1 + 0x1e9u);
    f9 = (f64)(f32)(f2 - f0);
    f5 = rdf64(0x817fdfa0u);
    wr32(0x817fdf9cu, r0);
    r0 = (u32)rd8((u32)param_1 + 0x1e6u);
    f1 = rdf64(0x817fdf98u);
    wr32(0x817fdfa4u, r6);
    f7 = (f64)(f32)(f1 - f0);
    f12 = (f64)rdf32((u32)param_1 + 0xd50u);
    wr32(0x817fdf9cu, r4);
    r4 = (u32)rd8((u32)param_1 + 0x1eau);
    f2 = rdf64(0x817fdf98u);
    wr32(0x817fdfa4u, r5);
    wr32(0x817fdf9cu, r4);
    wr32(0x817fdfa4u, r0);
    f1 = px_b2f((u64)r0 | 0x4330000000000000ull);
    r0 = (u32)rd8((u32)param_1 + 0x1e7u);
    f4 = (f64)(f32)(f1 - f0);
    f1 = (f64)rdf32(0x80575908u);
    wr32(0x817fdfa4u, r0);
    f1 = (f64)(f32)(f1 * f12);
    f11 = (f64)(f32)((f64)(f32)(f6 - f0) * f1);
    f10 = (f64)(f32)((f64)(f32)(f5 - f0) * f1);
    f9 = (f64)(f32)(f9 * f1);
    f8 = (f64)(f32)((f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - f0) * f1);
    f7 = (f64)(f32)(f7 * f1);
    f6 = (f64)(f32)((f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f0) * f1);
    f5 = (f64)(f32)((f64)(f32)(f2 - f0) * f1);
    f4 = (f64)(f32)(f4 * f1);
    f3 = (f64)(f32)((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f0) * f1);
    f2 = (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f0) * f1);
    f11 = px_ctiw(f11, ppc_fctiwz(f11));
    f10 = px_ctiw(f10, ppc_fctiwz(f10));
    f9 = px_ctiw(f9, ppc_fctiwz(f9));
    f8 = px_ctiw(f8, ppc_fctiwz(f8));
    f7 = px_ctiw(f7, ppc_fctiwz(f7));
    f6 = px_ctiw(f6, ppc_fctiwz(f6));
    f5 = px_ctiw(f5, ppc_fctiwz(f5));
    f4 = px_ctiw(f4, ppc_fctiwz(f4));
    f3 = px_ctiw(f3, ppc_fctiwz(f3));
    f2 = px_ctiw(f2, ppc_fctiwz(f2));
    r12 = (u32)px_f2b(f11);
    wr16((u32)param_1 + 0x1deu, (u16)r12);
    wr16((u32)param_1 + 0x1e0u, (u16)px_f2b(f10));
    wr16((u32)param_1 + 0x1e2u, (u16)px_f2b(f9));
    wr8((u32)param_1 + 0x1e4u, (u8)px_f2b(f8));
    wr8((u32)param_1 + 0x1e8u, (u8)px_f2b(f7));
    wr8((u32)param_1 + 0x1e5u, (u8)px_f2b(f6));
    wr8((u32)param_1 + 0x1e9u, (u8)px_f2b(f5));
    wr8((u32)param_1 + 0x1e6u, (u8)px_f2b(f4));
    wr8((u32)param_1 + 0x1eau, (u8)px_f2b(f3));
    wr8((u32)param_1 + 0x1e7u, (u8)px_f2b(f2));
    r4 = (u32)rd8((u32)param_1 + 0x1ebu);
    r0 = r12 & 0xffffu;
    f2 = (f64)rdf32((u32)param_1 + 0xd1cu);
    wr32(0x817fdf9cu, r4);
    f4 = (f64)(f32)(f1 * f2);
    f5 = (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd20u));
    f3 = (f64)rdf32((u32)param_1 + 0xd28u);
    wr32(0x817fdfa4u, r0);
    f7 = (f64)(f32)(f1 * f3);
    f2 = (f64)(f32)((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f0) * f1);
    f6 = (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd24u));
    f8 = (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd2cu));
    f11 = (f64)rdf32((u32)param_1 + 0xd44u);
    f9 = (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd30u));
    f12 = (f64)rdf32((u32)param_1 + 0xd4cu);
    f10 = (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd34u));
    wrf64(0x817fdff8u, px_ctiw(f2, ppc_fctiwz(f2)));
    f3 = (f64)(f32)(f1 * f11);
    f1 = (f64)(f32)(f1 * f12);
    f0 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f0);
    c0eq = rd32((u32)param_1 + 0xdc0u) == 0u;
    wr8((u32)param_1 + 0x1ebu, (u8)rd32(0x817fdffcu));
    wrf32d((u32)param_1 + 0xd1cu, f4);
    wrf32d((u32)param_1 + 0xd20u, f5);
    wrf32d((u32)param_1 + 0xd24u, f6);
    wrf32d((u32)param_1 + 0xd28u, f7);
    wrf32d((u32)param_1 + 0xd2cu, f8);
    wrf32d((u32)param_1 + 0xd30u, f9);
    wrf32d((u32)param_1 + 0xd34u, f10);
    wrf32d((u32)param_1 + 0xd44u, f3);
    wrf32d((u32)param_1 + 0xd4cu, f1);
    wrf32d((u32)param_1 + 0xd54u, f0);
    if (c0eq) {
        wr32((u32)param_1 + 0x260u, 0xfu);
    } else {
        f0 = (f64)rdf32(0x8057586cu);
        wr32((u32)param_1 + 0xdf8u, 2u);
        wr32((u32)param_1 + 0xce4u, 1u);
        wrf32d((u32)param_1 + 0xce0u, f0);
    }
    return;
}
