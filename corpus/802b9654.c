#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802b9654(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0;
    TcArgs a = {0};
    if ((u32)(s8)param_2 == 0u) {
        wr8((u32)param_1 + 0x5eu, 0u);
    } else {
        f4 = (f64)rdf32((u32)param_1 + 0xb0u);
        f1 = (f64)rdf32((u32)param_1 + 0x494u);
        f2 = (f64)rdf32((u32)param_1 + 0xb4u);
        f3 = (f64)(f32)(f4 * f1);
        f0 = (f64)rdf32((u32)param_1 + 0x498u);
        f1 = (f64)(f32)(f2 * f1);
        f2 = (f64)(f32)(f2 * f0);
        f0 = (f64)(f32)(f4 * f0);
        f3 = (f64)(f32)(f3 + f2);
        f2 = (f64)(f32)(f1 - f0);
        if ((u32)(s8)rd8((u32)param_1 + 0x5eu) == 0u) {
            wr32((u32)param_1 + 0x34u, ppc_single_bits(f3));
            f0 = (f64)rdf32(0x80577390u);
            wr32((u32)param_1 + 0x38u, ppc_single_bits(f2));
            r0 = rd32(0x80571bacu);
            wr32((u32)param_1 + 0x3cu, rd32(0x80571ba8u));
            wr32((u32)param_1 + 0x40u, r0);
            wrf32d((u32)param_1 + 0x44u, f0);
        } else {
            f3 = (f64)(f32)(f3 - (f64)rdf32((u32)param_1 + 0x34u));
            f2 = (f64)(f32)(f2 - (f64)rdf32((u32)param_1 + 0x38u));
            wrf32d(0x817fdfe8u, f3);
            wrf32d(0x817fdfecu, f2);
            a.f[0] = (f64)(f32)((f64)(f32)(f3 * f3) + (f64)(f32)(f2 * f2));
            f1 = tc_callf(0x80262ec0u, &a);
            f2 = (f64)(f32)f1;
            if (rd32((u32)param_1 + 0x52cu) == 0u) {
                f0 = (f64)rdf32((u32)param_1 + 0x8cu);
                if ((f2 > f0) || (f2 == f0)) {
                    f4 = (f64)rdf32(0x805773a4u);
                } else {
                    f4 = (f64)(f32)px_fdiv(f2, f0);
                    f4 = (f64)(f32)(f4 * f4);
                    f4 = (f64)(f32)(f4 * f4);
                }
                f3 = (f64)px_w2f(ppc_single_bits(f3));
                f4 = (f64)(f32)(f4 * (f64)rdf32((u32)param_1 + 0x90u));
                f3 = (f64)(f32)(f4 * f3);
                f3 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x34u) + f3);
                f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x38u) + (f64)(f32)(f4 * (f64)rdf32(0x817fdfecu)));
                wrf32d(0x817fdfe8u, f3);
                wrf32d(0x817fdfecu, f2);
                a.f[0] = (f64)(f32)((f64)(f32)(f3 * f3) + (f64)(f32)(f2 * f2));
                f1 = tc_callf(0x80262ec0u, &a);
                f4 = (f64)(f32)f1;
                f2 = (f64)px_w2f(ppc_single_bits(f2));
                f1 = (f64)rdf32((u32)param_1 + 0x34u);
                f3 = (f64)(f32)px_fdiv((f64)px_w2f(ppc_single_bits(f3)), f4);
                f0 = (f64)rdf32((u32)param_1 + 0x38u);
                f2 = (f64)(f32)px_fdiv(f2, f4);
                wrf32d(0x817fdfe8u, f3);
                f3 = (f64)(f32)(f3 - f1);
                wrf32d(0x817fdfecu, f2);
                f2 = (f64)(f32)(f2 - f0);
                wrf32d((u32)param_1 + 0x3cu, f3);
                wrf32d((u32)param_1 + 0x40u, f2);
                a.f[0] = (f64)(f32)((f64)(f32)(f3 * f3) + (f64)(f32)(f2 * f2));
                f1 = tc_callf(0x80262ec0u, &a);
                r0 = rd32(0x817fdfecu);
                wr32((u32)param_1 + 0x34u, rd32(0x817fdfe8u));
                wrf32d((u32)param_1 + 0x44u, (f64)(f32)f1);
                wr32((u32)param_1 + 0x38u, r0);
            } else {
                f0 = (f64)rdf32((u32)param_1 + 0x8cu);
                if (f2 > f0) {
                    f0 = (f64)(f32)(f2 - f0);
                    f3 = (f64)px_w2f(ppc_single_bits(f3));
                    f4 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x90u) * (f64)(f32)px_fdiv(f0, f2));
                    f3 = (f64)(f32)(f3 * f4);
                    f3 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x34u) + f3);
                    f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x38u) + (f64)(f32)((f64)rdf32(0x817fdfecu) * f4));
                    wrf32d(0x817fdfe8u, f3);
                    wrf32d(0x817fdfecu, f2);
                    a.f[0] = (f64)(f32)((f64)(f32)(f3 * f3) + (f64)(f32)(f2 * f2));
                    f1 = tc_callf(0x80262ec0u, &a);
                    f4 = (f64)(f32)f1;
                    f2 = (f64)px_w2f(ppc_single_bits(f2));
                    f1 = (f64)rdf32((u32)param_1 + 0x34u);
                    f3 = (f64)(f32)px_fdiv((f64)px_w2f(ppc_single_bits(f3)), f4);
                    f0 = (f64)rdf32((u32)param_1 + 0x38u);
                    f2 = (f64)(f32)px_fdiv(f2, f4);
                    wrf32d(0x817fdfe8u, f3);
                    f3 = (f64)(f32)(f3 - f1);
                    wrf32d(0x817fdfecu, f2);
                    f2 = (f64)(f32)(f2 - f0);
                    wrf32d((u32)param_1 + 0x3cu, f3);
                    wrf32d((u32)param_1 + 0x40u, f2);
                    a.f[0] = (f64)(f32)((f64)(f32)(f3 * f3) + (f64)(f32)(f2 * f2));
                    f1 = tc_callf(0x80262ec0u, &a);
                    r0 = rd32(0x817fdfecu);
                    wr32((u32)param_1 + 0x34u, rd32(0x817fdfe8u));
                    wrf32d((u32)param_1 + 0x44u, (f64)(f32)f1);
                    wr32((u32)param_1 + 0x38u, r0);
                } else {
                    r0 = rd32(0x80571bacu);
                    f0 = (f64)rdf32(0x80577390u);
                    wr32((u32)param_1 + 0x3cu, rd32(0x80571ba8u));
                    wr32((u32)param_1 + 0x40u, r0);
                    wrf32d((u32)param_1 + 0x44u, f0);
                }
            }
        }
        f2 = (f64)(f32)px_fdiv((f64)rdf32((u32)param_1 + 0x510u), (f64)rdf32((u32)param_1 + 0x490u));
        if ((u32)(s8)rd8((u32)param_1 + 0x5eu) == 0u) {
            f0 = (f64)rdf32(0x80577390u);
            wrf32d((u32)param_1 + 0x48u, f2);
            wrf32d((u32)param_1 + 0x4cu, f0);
            wrf32d((u32)param_1 + 0x50u, f0);
        } else {
            f4 = (f64)(f32)(f2 - (f64)rdf32((u32)param_1 + 0x48u));
            if (f4 < (f64)rdf32(0x80577390u)) {
                f3 = -f4;
            } else {
                f3 = f4;
            }
            if (rd32((u32)param_1 + 0x530u) == 0u) {
                f0 = (f64)rdf32((u32)param_1 + 0x94u);
                if ((f3 > f0) || (f3 == f0)) {
                    f3 = (f64)rdf32(0x805773a4u);
                } else {
                    f3 = (f64)(f32)px_fdiv(f3, f0);
                    f3 = (f64)(f32)(f3 * f3);
                    f3 = (f64)(f32)(f3 * f3);
                }
                f3 = (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0x98u));
                f1 = (f64)(f32)(f3 * f4);
                c0lt = f1 < (f64)rdf32(0x80577390u);
                wrf32d((u32)param_1 + 0x4cu, f1);
                if (c0lt) {
                    wrf32d((u32)param_1 + 0x50u, -f1);
                } else {
                    wrf32d((u32)param_1 + 0x50u, f1);
                }
                wrf32d((u32)param_1 + 0x48u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x48u) + (f64)rdf32((u32)param_1 + 0x4cu)));
            } else {
                f0 = (f64)rdf32((u32)param_1 + 0x94u);
                if (f3 > f0) {
                    f1 = (f64)(f32)((f64)(f32)((f64)rdf32((u32)param_1 + 0x98u) * (f64)(f32)px_fdiv((f64)(f32)(f3 - f0), f3)) * f4);
                    c0lt = f1 < (f64)rdf32(0x80577390u);
                    wrf32d((u32)param_1 + 0x4cu, f1);
                    if (c0lt) {
                        wrf32d((u32)param_1 + 0x50u, -f1);
                    } else {
                        wrf32d((u32)param_1 + 0x50u, f1);
                    }
                    wrf32d((u32)param_1 + 0x48u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x48u) + (f64)rdf32((u32)param_1 + 0x4cu)));
                } else {
                    f0 = (f64)rdf32(0x80577390u);
                    wrf32d((u32)param_1 + 0x4cu, f0);
                    wrf32d((u32)param_1 + 0x50u, f0);
                }
            }
        }
        f2 = (f64)rdf32((u32)param_1 + 0x498u);
        f0 = (f64)rdf32((u32)param_1 + 0xb4u);
        f5 = (f64)rdf32((u32)param_1 + 0x494u);
        f3 = (f64)(f32)(f2 * f0);
        f4 = (f64)rdf32((u32)param_1 + 0xb0u);
        c0eq = (u32)(s8)rd8((u32)param_1 + 0x5eu) == 0u;
        f0 = (f64)(f32)(f5 * f0);
        f2 = (f64)(f32)(-f2 * f4);
        f5 = (f64)(f32)(f5 * f4);
        f8 = (f64)rdf32(0x80577394u);
        f3 = (f64)(f32)(f5 + f3);
        f4 = (f64)rdf32((u32)param_1 + 0xacu);
        f7 = (f64)(f32)(f8 * (f64)(f32)((f64)rdf32((u32)param_1 + 0xf4u) + (f64)rdf32((u32)param_1 + 0x100u)));
        f2 = (f64)(f32)(f2 + f0);
        f1 = (f64)rdf32((u32)param_1 + 0xa8u);
        f5 = (f64)(f32)(f8 * (f64)(f32)((f64)rdf32((u32)param_1 + 0xf8u) + (f64)rdf32((u32)param_1 + 0x104u)));
        f9 = (f64)(f32)(f3 * f7);
        f7 = (f64)(f32)(f2 * f7);
        f0 = (f64)(f32)(f3 * f5);
        f8 = (f64)(f32)(f2 * f5);
        f5 = (f64)rdf32((u32)param_1 + 0xc0u);
        f7 = (f64)(f32)(f7 + f0);
        f8 = (f64)(f32)(f9 - f8);
        f6 = (f64)(f32)(f5 * (f64)(f32)((f64)rdf32((u32)param_1 + 0xb8u) - f8));
        f5 = (f64)(f32)(f5 * (f64)(f32)((f64)rdf32((u32)param_1 + 0xbcu) - f7));
        wrf32d(0x817fdfe8u, f6);
        f2 = (f64)(f32)(f1 * f5);
        f1 = (f64)(f32)(-f1 * f6);
        wrf32d(0x817fdfecu, f5);
        f3 = (f64)(f32)((f64)(f32)(-f4 * f6) + f2);
        f2 = (f64)(f32)(f1 - (f64)(f32)(f4 * f5));
        if (c0eq) {
            wr32((u32)param_1 + 0x20u, ppc_single_bits(f3));
            f0 = (f64)rdf32(0x80577390u);
            wr32((u32)param_1 + 0x24u, ppc_single_bits(f2));
            r0 = rd32(0x80571bacu);
            wr32((u32)param_1 + 0x28u, rd32(0x80571ba8u));
            wr32((u32)param_1 + 0x2cu, r0);
            wrf32d((u32)param_1 + 0x30u, f0);
        } else {
            f3 = (f64)(f32)(f3 - (f64)rdf32((u32)param_1 + 0x20u));
            f2 = (f64)(f32)(f2 - (f64)rdf32((u32)param_1 + 0x24u));
            wrf32d(0x817fdfe8u, f3);
            wrf32d(0x817fdfecu, f2);
            a.f[0] = (f64)(f32)((f64)(f32)(f3 * f3) + (f64)(f32)(f2 * f2));
            f1 = tc_callf(0x80262ec0u, &a);
            f4 = (f64)(f32)f1;
            if (rd32((u32)param_1 + 0x528u) == 0u) {
                f0 = (f64)rdf32((u32)param_1 + 0x84u);
                if ((f4 > f0) || (f4 == f0)) {
                    f2 = (f64)rdf32(0x805773a4u);
                } else {
                    f2 = (f64)(f32)px_fdiv(f4, f0);
                    f2 = (f64)(f32)(f2 * f2);
                    f2 = (f64)(f32)(f2 * f2);
                }
                f2 = (f64)(f32)(f2 * (f64)rdf32((u32)param_1 + 0x88u));
                f3 = (f64)(f32)(f2 * (f64)px_w2f(ppc_single_bits(f3)));
                f2 = (f64)(f32)(f2 * (f64)rdf32(0x817fdfecu));
                wrf32d((u32)param_1 + 0x28u, f3);
                wrf32d((u32)param_1 + 0x2cu, f2);
                a.f[0] = (f64)(f32)((f64)(f32)(f3 * f3) + (f64)(f32)(f2 * f2));
                f1 = tc_callf(0x80262ec0u, &a);
                f4 = (f64)(f32)f1;
                f1 = (f64)rdf32((u32)param_1 + 0x24u);
                f0 = (f64)rdf32((u32)param_1 + 0x2cu);
                f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x20u) + (f64)rdf32((u32)param_1 + 0x28u));
                wrf32d((u32)param_1 + 0x30u, f4);
                f0 = (f64)(f32)(f1 + f0);
                wrf32d((u32)param_1 + 0x20u, f2);
                wrf32d((u32)param_1 + 0x24u, f0);
            } else {
                f0 = (f64)rdf32((u32)param_1 + 0x84u);
                if (f4 > f0) {
                    f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x88u) * (f64)(f32)px_fdiv((f64)(f32)(f4 - f0), f4));
                    f3 = (f64)(f32)(f2 * (f64)rdf32(0x817fdfe8u));
                    f2 = (f64)(f32)(f2 * (f64)rdf32(0x817fdfecu));
                    wrf32d((u32)param_1 + 0x28u, f3);
                    wrf32d((u32)param_1 + 0x2cu, f2);
                    a.f[0] = (f64)(f32)((f64)(f32)(f3 * f3) + (f64)(f32)(f2 * f2));
                    f1 = tc_callf(0x80262ec0u, &a);
                    f4 = (f64)(f32)f1;
                    f1 = (f64)rdf32((u32)param_1 + 0x24u);
                    f0 = (f64)rdf32((u32)param_1 + 0x2cu);
                    f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x20u) + (f64)rdf32((u32)param_1 + 0x28u));
                    wrf32d((u32)param_1 + 0x30u, f4);
                    f0 = (f64)(f32)(f1 + f0);
                    wrf32d((u32)param_1 + 0x20u, f2);
                    wrf32d((u32)param_1 + 0x24u, f0);
                } else {
                    r0 = rd32(0x80571bacu);
                    f0 = (f64)rdf32(0x80577390u);
                    wr32((u32)param_1 + 0x28u, rd32(0x80571ba8u));
                    wr32((u32)param_1 + 0x2cu, r0);
                    wrf32d((u32)param_1 + 0x30u, f0);
                }
            }
        }
        wr8((u32)param_1 + 0x5eu, (u8)param_2);
    }
    return;
}
