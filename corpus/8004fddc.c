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

s32 fn_8004fddc(f64 param_1, f64 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(param_3 + 0x1cu);
    r7 = rd32(param_3 + 0x24u);
    f0 = (f64)(f32)(f2 * (f64)(f32)(param_2 - (f64)rdf32(param_3 + 8u)));
    f1 = (f64)(f32)(f2 * (f64)(f32)(param_1 - (f64)rdf32(param_3)));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    f1 = px_ctiw(f1, ppc_fctiwz(f1));
    r9 = (u32)px_f2b(f0);
    r5 = ppc_divwu(r9, r7);
    r8 = (u32)px_f2b(f1);
    r10 = ppc_divwu(r8, r7);
    r4 = rd32(param_3 + 0x2cu) + (((r10 + (r5 * (u32)rd16(param_3 + 0x28u))) << 3u) & 0xfffffff8u);
    r6 = rd32(r4);
    if (r6 != 0u) {
        r0 = r5 * r7;
        r5 = rd32(param_3 + 0x34u);
        r0 = r9 - r0;
        r0 = ((u32)rd8((r0 * r7) + (r6 + (r8 - (r10 * r7)))) << 2u) & 0xfffffffcu;
        r3 = (u32)rd16(r5 + r0);
        r0 = (u32)rd16(r5 + r0 + 2u);
        wr16(0x817fdff8u, (u16)r3);
        wr16(0x817fdffau, (u16)r0);
    } else {
        r0 = (u32)rd16(r4 + 6u);
        wr16(0x817fdff8u, rd16(r4 + 4u));
        wr16(0x817fdffau, (u16)r0);
    }
    return (s32)rd32(0x817fdff8u);
}
