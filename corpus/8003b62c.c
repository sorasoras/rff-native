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

f64 fn_8003b62c(f64 param_1, f64 param_2, u32 param_3)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0;
    f2 = (f64)(f32)(param_2 - (f64)rdf32(param_3 + 8u));
    f3 = (f64)rdf32(param_3 + 0x1cu);
    f0 = (f64)(f32)(param_1 - (f64)rdf32(param_3));
    r6 = rd32(param_3 + 0x24u);
    wr32(0x817fdfd8u, 0x43300000u);
    f1 = (f64)(f32)(f2 * f3);
    f3 = (f64)(f32)(f0 * f3);
    f1 = px_ctiw(f1, ppc_fctiwz(f1));
    r4 = rd32(param_3 + 0x2cu);
    f3 = px_ctiw(f3, ppc_fctiwz(f3));
    r8 = (u32)px_f2b(f1);
    r5 = ppc_divwu(r8, r6);
    r7 = (u32)px_f2b(f3);
    r9 = ppc_divwu(r7, r6);
    r0 = (r9 + (r5 * (u32)rd16(param_3 + 0x28u))) * 0xcu;
    r10 = r4 + r0;
    r0 = rd32(r4 + r0);
    if (r0 != 0u) {
        r5 = r5 * r6;
        r0 = r8 ^ 0x80000000u;
        r11 = r6 + 2u;
        f5 = rdf64(0x80571f50u);
        wr32(0x817fdfdcu, r7 ^ 0x80000000u);
        r4 = r9 * r6;
        r8 = r8 - r5;
        r6 = rd32(r10);
        f3 = (f64)rdf32(param_3 + 0x18u);
        r5 = r8 * r11;
        r7 = r7 - r4;
        f9 = (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f5) * f3);
        f8 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfd8u) - f5) * f3);
        r0 = (u32)rd8(r6 + (r7 + r5));
        if (r0 == 0u) {
            f5 = (f64)rdf32(0x80571f38u);
        } else {
            wr32(0x817fdfdcu, r0);
            f5 = ppc_fmadds((f64)rdf32(r10 + 8u), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80571f40u)), (f64)rdf32(r10 + 4u));
        }
        r0 = (u32)rd8(r7 + r5 + r6 + 1u);
        if (r0 == 0u) {
            f6 = (f64)rdf32(0x80571f38u);
        } else {
            f6 = ppc_fmadds((f64)rdf32(r10 + 8u), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80571f40u)), (f64)rdf32(r10 + 4u));
        }
        r4 = (r8 + 1u) * r11;
        r0 = (u32)rd8(r4 + (r6 + r7));
        if (r0 == 0u) {
            f7 = (f64)rdf32(0x80571f38u);
        } else {
            wr32(0x817fdfdcu, r0);
            f7 = ppc_fmadds((f64)rdf32(r10 + 8u), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80571f40u)), (f64)rdf32(r10 + 4u));
        }
        r4 = r7 + r4 + r6;
        r0 = (u32)rd8(r4 + 1u);
        if (r0 == 0u) {
            f4 = (f64)rdf32(0x80571f38u);
        } else {
            f4 = ppc_fmadds((f64)rdf32(r10 + 8u), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80571f40u)), (f64)rdf32(r10 + 4u));
        }
        f3 = (f64)(f32)(f0 - f8);
        f1 = (f64)rdf32(param_3 + 0x1cu);
        f0 = (f64)(f32)(f2 - f9);
        f2 = (f64)rdf32(0x80571f48u);
        f3 = (f64)(f32)(f1 * f3);
        f8 = (f64)(f32)(f1 * f0);
        if ((f64)(f32)(f3 + f8) < f2) {
            f0 = (f64)rdf32(0x80571f38u);
            if ((f5 > f0 && f6 > f0) && f7 > f0) {
                f1 = (f64)(f32)(f5 + ppc_fmadds(f3, (f64)(f32)(f6 - f5), (f64)(f32)(f8 * (f64)(f32)(f7 - f5))));
                return f1;
            }
            f1 = (f64)rdf32(0x80571f38u);
            return f1;
        }
        f0 = (f64)rdf32(0x80571f38u);
        if ((f6 > f0 && f7 > f0) && f4 > f0) {
            f1 = (f64)(f32)(f4 + ppc_fmadds((f64)(f32)(f8 - f2), (f64)(f32)(f4 - f6), (f64)(f32)((f64)(f32)(f3 - f2) * (f64)(f32)(f4 - f7))));
            return f1;
        }
        f1 = (f64)rdf32(0x80571f38u);
    } else {
        f1 = (f64)rdf32(r10 + 4u);
    }
    return f1;
}
