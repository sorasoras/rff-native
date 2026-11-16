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

f64 fn_8003b55c(f64 param_1, f64 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(param_3 + 0x1cu);
    r4 = rd32(param_3 + 0x24u);
    f0 = (f64)(f32)(f2 * (f64)(f32)(param_2 - (f64)rdf32(param_3 + 8u)));
    f1 = (f64)(f32)(f2 * (f64)(f32)(param_1 - (f64)rdf32(param_3)));
    r3 = rd32(param_3 + 0x2cu);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    f1 = px_ctiw(f1, ppc_fctiwz(f1));
    r7 = (u32)px_f2b(f0);
    r5 = ppc_divwu(r7, r4);
    r6 = (u32)px_f2b(f1);
    r8 = ppc_divwu(r6, r4);
    r0 = (r8 + (r5 * (u32)rd16(param_3 + 0x28u))) * 0xcu;
    r9 = r3 + r0;
    r0 = rd32(r3 + r0);
    if (r0 != 0u) {
        r3 = r5 * r4;
        r0 = r4 + 2u;
        r4 = r8 * r4;
        r3 = r7 - r3;
        r3 = r3 * r0;
        r4 = r6 - r4;
        r3 = (u32)rd8(r3 + (rd32(r9) + r4));
        if (r3 == 0u) {
            f1 = (f64)rdf32(0x80571f38u);
            return f1;
        }
        f1 = ppc_fmadds((f64)rdf32(r9 + 8u), (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80571f40u)), (f64)rdf32(r9 + 4u));
    } else {
        f1 = (f64)rdf32(r9 + 4u);
    }
    return f1;
}
