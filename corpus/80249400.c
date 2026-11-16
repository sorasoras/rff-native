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

u32 fn_80249400(s32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    f4 = (f64)rdf32(0x80576c68u);
    f1 = (f64)rdf32((u32)param_1 + 0x80u);
    if (f1 < f4 || f1 > (f64)rdf32(0x80576c6cu)) {
        r3 = 0u;
    } else {
        f0 = (f64)rdf32((u32)param_1 + 0x84u);
        f3 = (f64)rdf32(0x80576c5cu);
        if (!(f0 < f3)) {
            f2 = (f64)rdf32(0x80576c70u);
            if (!(f0 > f2)) {
                f1 = (f64)rdf32((u32)param_1 + 0x88u);
                if (f1 < f4 || f1 > (f64)rdf32(0x80576c74u)) {
                    r3 = 0u;
                    return r3;
                }
                f0 = (f64)rdf32((u32)param_1 + 0x8cu);
                if (f0 < f3 || (f0 > f2) || (f0 == f2)) {
                    r3 = 0u;
                    return r3;
                }
                f0 = (f64)rdf32((u32)param_1 + 0x98u);
                if (f0 < f3 || f0 > f2) {
                    r3 = 0u;
                    return r3;
                }
                f0 = (f64)rdf32((u32)param_1 + 0x9cu);
                if (f0 < f3 || f0 > f2) {
                    r3 = 0u;
                    return r3;
                }
                r3 = tc_call(0x802496fcu, &a);
                f0 = (f64)rdf32((u32)param_1 + 0x84u);
                f1 = (f64)(f32)((f64)rdf32(0x80576c58u) * (f64)rdf32((u32)param_1 + 0x80u));
                wr32((u32)param_1 + 0x20u, r3);
                f6 = (f64)(f32)(f1 * f0);
                if ((f6 > f1) || (f6 == f1)) {
                    f0 = (f64)rdf32(0x80576c5cu);
                    f6 = (f64)(f32)(f6 - (f64)rdf32(0x80576c70u));
                    if (f6 < f0) {
                        f6 = f0;
                    }
                }
                f3 = (f64)rdf32((u32)param_1 + 0x88u);
                f2 = (f64)rdf32(0x80576c80u);
                f4 = (f64)rdf32(0x80576c7cu);
                r3 = 1u;
                f0 = (f64)rdf32(0x80576c84u);
                f5 = (f64)rdf32(0x80576c78u);
                wr32((u32)param_1 + 0x38u, 0xffffffffu);
                wr32((u32)param_1 + 0x30u, 0u);
                wr32((u32)param_1 + 0x34u, 0u);
                f7 = (f64)(f32)((f64)(f32)px_fdiv(f2, f3) * f0);
                f0 = (f64)rdf32(0x80576c5cu);
                f1 = (f64)(f32)(f4 * f3);
                wr32((u32)param_1 + 0x3cu, 0u);
                f4 = (f64)(f32)(f5 * f6);
                f6 = (f64)(f32)px_fdiv(f6, f7);
                wr32((u32)param_1 + 0x40u, 0u);
                f1 = (f64)(f32)px_fdiv(f1, f2);
                f3 = (f64)(f32)(f5 * f1);
                f2 = (f64)(f32)(f5 * f7);
                f1 = (f64)(f32)(f5 * f6);
                f4 = px_ctiw(f4, ppc_fctiwz(f4));
                f3 = px_ctiw(f3, ppc_fctiwz(f3));
                f2 = px_ctiw(f2, ppc_fctiwz(f2));
                f1 = px_ctiw(f1, ppc_fctiwz(f1));
                wr32((u32)param_1 + 0x2cu, (u32)px_f2b(f4));
                wr32((u32)param_1 + 0x24u, (u32)px_f2b(f3));
                wr32((u32)param_1 + 0x28u, (u32)px_f2b(f2));
                wr32((u32)param_1 + 0x44u, (u32)px_f2b(f1));
                wrf32d((u32)param_1 + 0x48u, f0);
                wrf32d((u32)param_1 + 0x4cu, f0);
                wrf32d((u32)param_1 + 0x50u, f0);
                wrf32d((u32)param_1 + 0x54u, f0);
                wrf32d((u32)param_1 + 0x58u, f0);
                wrf32d((u32)param_1 + 0x5cu, f0);
                wrf32d((u32)param_1 + 0x60u, f0);
                wrf32d((u32)param_1 + 0x64u, f0);
                wrf32d((u32)param_1 + 0x68u, f0);
                wrf32d((u32)param_1 + 0x6cu, f0);
                wrf32d((u32)param_1 + 0x70u, f0);
                wrf32d((u32)param_1 + 0x74u, f0);
                wr32((u32)param_1 + 0x78u, 0u);
                return r3;
            }
        }
        r3 = 0u;
    }
    return r3;
}
