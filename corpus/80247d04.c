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

u32 fn_80247d04(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    if (!((f64)rdf32(param_1 + 0x3cu) > (f64)rdf32(param_1 + 0x38u))) {
        f0 = (f64)rdf32(param_1 + 0x40u);
        f2 = (f64)rdf32(0x80576c04u);
        if (!(f0 < f2)) {
            f1 = (f64)rdf32(0x80576c08u);
            if (!((f0 > f1) || (f0 == f1))) {
                f0 = (f64)rdf32(param_1 + 0x44u);
                if (f0 < f2 || f0 > f1) {
                    r3 = 0u;
                    return r3;
                }
                f0 = (f64)rdf32(param_1 + 0x50u);
                if (f0 < f2 || f0 > f1) {
                    r3 = 0u;
                    return r3;
                }
                f0 = (f64)rdf32(param_1 + 0x54u);
                if (f0 < f2 || f0 > f1) {
                    r3 = 0u;
                    return r3;
                }
                r4 = rd32(param_1);
                if (r4 != 0u) {
                    if (rd32(param_1 + 4u) != 0u) {
                        if (rd32(param_1 + 8u) != 0u) {
                            a.r[0] = r4;
                            a.r[1] = 0u;
                            a.r[2] = (rd32(param_1 + 0x14u) << 2u) & 0xfffffffcu;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(param_1 + 4u);
                            a.r[1] = 0u;
                            a.r[2] = (rd32(param_1 + 0x14u) << 2u) & 0xfffffffcu;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(param_1 + 8u);
                            a.r[1] = 0u;
                            a.r[2] = (rd32(param_1 + 0x14u) << 2u) & 0xfffffffcu;
                            (void)tc_call(0x8000443cu, &a);
                            a.f[0] = (f64)(f32)((f64)rdf32(0x80576c00u) * (f64)rdf32(param_1 + 0x3cu));
                            r3 = tc_call(0x802558e4u, &a);
                            wr32(param_1 + 0x10u, r3);
                            if (r3 == 0u) {
                                wr32(param_1 + 0x10u, 1u);
                            }
                            f3 = (f64)(f32)((f64)rdf32(0x80576c0cu) * (f64)rdf32(param_1 + 0x40u));
                            f0 = (f64)rdf32(0x80576c10u);
                            f2 = (f64)(f32)((f64)rdf32(0x80576c08u) - (f64)rdf32(param_1 + 0x44u));
                            wr32(param_1 + 0xcu, 0u);
                            wr32(param_1 + 0x18u, (u32)px_f2b(px_ctiw(f3, ppc_fctiwz(f3))));
                            if (f2 > f0) {
                                f2 = f0;
                            }
                            f3 = (f64)rdf32(0x80576c0cu);
                            r3 = 1u;
                            f0 = (f64)rdf32(param_1 + 0x54u);
                            f2 = (f64)(f32)(f3 * f2);
                            f1 = (f64)(f32)(f3 * (f64)rdf32(param_1 + 0x50u));
                            wr32(param_1 + 0x1cu, 0u);
                            f0 = (f64)(f32)(f3 * f0);
                            f2 = px_ctiw(f2, ppc_fctiwz(f2));
                            wr32(param_1 + 0x20u, 0u);
                            f1 = px_ctiw(f1, ppc_fctiwz(f1));
                            f0 = px_ctiw(f0, ppc_fctiwz(f0));
                            wr32(param_1 + 0x24u, 0u);
                            wr32(param_1 + 0x28u, (u32)px_f2b(f2));
                            wr32(param_1 + 0x2cu, (u32)px_f2b(f1));
                            wr32(param_1 + 0x30u, (u32)px_f2b(f0));
                            return r3;
                        }
                        r3 = 0u;
                        return r3;
                    }
                    r3 = 0u;
                    return r3;
                }
                r3 = 0u;
                return r3;
            }
        }
        r3 = 0u;
    } else {
        r3 = 0u;
    }
    return r3;
}
