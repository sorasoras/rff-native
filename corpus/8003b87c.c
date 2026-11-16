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

f64 fn_8003b87c(f64 param_1, f64 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f0 = (f64)(f32)(param_2 - (f64)rdf32(param_4 + 8u));
    f2 = (f64)rdf32(param_4 + 0x1cu);
    f5 = (f64)(f32)(param_1 - (f64)rdf32(param_4));
    r7 = rd32(param_4 + 0x24u);
    wr32(0x817fdf88u, 0x43300000u);
    f1 = (f64)(f32)(f0 * f2);
    f2 = (f64)(f32)(f5 * f2);
    f1 = px_ctiw(f1, ppc_fctiwz(f1));
    r5 = rd32(param_4 + 0x2cu);
    f2 = px_ctiw(f2, ppc_fctiwz(f2));
    r9 = (u32)px_f2b(f1);
    r6 = ppc_divwu(r9, r7);
    r8 = (u32)px_f2b(f2);
    r10 = ppc_divwu(r8, r7);
    r0 = (r10 + (r6 * (u32)rd16(param_4 + 0x28u))) * 0xcu;
    r11 = r5 + r0;
    r0 = rd32(r5 + r0);
    if (r0 != 0u) {
        r6 = r6 * r7;
        r0 = r9 ^ 0x80000000u;
        r12 = r7 + 2u;
        f4 = rdf64(0x80571f50u);
        wr32(0x817fdf8cu, r8 ^ 0x80000000u);
        r5 = r10 * r7;
        r9 = r9 - r6;
        r7 = rd32(r11);
        f2 = (f64)rdf32(param_4 + 0x18u);
        r6 = r9 * r12;
        r8 = r8 - r5;
        f6 = (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f4) * f2);
        f4 = (f64)(f32)((f64)(f32)(rdf64(0x817fdf88u) - f4) * f2);
        r0 = (u32)rd8(r7 + (r8 + r6));
        if (r0 == 0u) {
            f31 = (f64)rdf32(0x80571f38u);
        } else {
            wr32(0x817fdf8cu, r0);
            f31 = ppc_fmadds((f64)rdf32(r11 + 8u), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80571f40u)), (f64)rdf32(r11 + 4u));
        }
        r0 = (u32)rd8(r8 + r6 + r7 + 1u);
        if (r0 == 0u) {
            f30 = (f64)rdf32(0x80571f38u);
        } else {
            f30 = ppc_fmadds((f64)rdf32(r11 + 8u), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80571f40u)), (f64)rdf32(r11 + 4u));
        }
        r5 = (r9 + 1u) * r12;
        r0 = (u32)rd8(r5 + (r7 + r8));
        if (r0 == 0u) {
            f29 = (f64)rdf32(0x80571f38u);
        } else {
            wr32(0x817fdf8cu, r0);
            f29 = ppc_fmadds((f64)rdf32(r11 + 8u), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80571f40u)), (f64)rdf32(r11 + 4u));
        }
        f2 = (f64)rdf32(param_4 + 0x1cu);
        f27 = (f64)(f32)(f2 * (f64)(f32)(f0 - f6));
        f28 = (f64)(f32)(f2 * (f64)(f32)(f5 - f4));
        if ((f64)(f32)(f28 + f27) < (f64)rdf32(0x80571f48u)) {
            f0 = (f64)rdf32(0x80571f38u);
            if ((f31 > f0 && f30 > f0) && f29 > f0) {
                wrf32d(param_3, (f64)(f32)(f31 - f30));
                wrf32d(param_3 + 4u, (f64)rdf32(param_4 + 0x18u));
                wrf32d(param_3 + 8u, (f64)(f32)(f31 - f29));
                a.r[0] = param_3;
                a.r[1] = param_3;
                (void)tc_call(0x802343e4u, &a);
                f1 = (f64)(f32)(f31 + ppc_fmadds(f28, (f64)(f32)(f30 - f31), (f64)(f32)(f27 * (f64)(f32)(f29 - f31))));
                return f1;
            }
            f1 = (f64)rdf32(0x80571f38u);
            return f1;
        }
        r5 = r8 + r5 + r7;
        r0 = (u32)rd8(r5 + 1u);
        if (r0 == 0u) {
            f31 = (f64)rdf32(0x80571f38u);
        } else {
            f31 = ppc_fmadds((f64)rdf32(r11 + 8u), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80571f40u)), (f64)rdf32(r11 + 4u));
        }
        f0 = (f64)rdf32(0x80571f38u);
        if ((f30 > f0 && f29 > f0) && f31 > f0) {
            wrf32d(param_3, (f64)(f32)(f29 - f31));
            wrf32d(param_3 + 4u, (f64)rdf32(param_4 + 0x18u));
            wrf32d(param_3 + 8u, (f64)(f32)(f30 - f31));
            a.r[0] = param_3;
            a.r[1] = param_3;
            (void)tc_call(0x802343e4u, &a);
            f3 = (f64)rdf32(0x80571f48u);
            f1 = (f64)(f32)(f28 - f3);
            f3 = (f64)(f32)(f27 - f3);
            f1 = (f64)(f32)(f31 + ppc_fmadds(f3, (f64)(f32)(f31 - f30), (f64)(f32)(f1 * (f64)(f32)(f31 - f29))));
            return f1;
        }
        f1 = (f64)rdf32(0x80571f38u);
    } else {
        f1 = (f64)rdf32(0x80571f58u);
        f0 = (f64)rdf32(0x80571f48u);
        wrf32d(param_3, f1);
        wrf32d(param_3 + 4u, f0);
        wrf32d(param_3 + 8u, f1);
        f1 = (f64)rdf32(r11 + 4u);
    }
    return f1;
}
