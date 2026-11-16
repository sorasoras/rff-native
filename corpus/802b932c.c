#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

u32 fn_802b932c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    r8 = (u32)param_1 + 0xc4u;
    r0 = (u32)param_1 + 0xf4u;
    f5 = (f64)rdf32((u32)param_1 + 0xb0u);
    f0 = (f64)rdf32((u32)param_1 + 0x4b8u);
    f3 = (f64)rdf32((u32)param_1 + 0xb4u);
    f1 = (f64)rdf32((u32)param_1 + 0x4bcu);
    f4 = (f64)(f32)(f5 * f0);
    f2 = (f64)(f32)(f3 * f0);
    f0 = (f64)rdf32((u32)param_1 + 0x4a0u);
    f3 = (f64)(f32)(f3 * f1);
    f1 = (f64)(f32)(f5 * f1);
    f7 = (f64)(f32)((f64)(f32)(f4 + f3) * f0);
    f8 = (f64)(f32)((f64)(f32)(f2 - f1) * f0);
    for (;;) {
        if ((u32)(s8)rd8(r8 + 8u) != 0u) {
            r8 = r8 + 0xcu;
            if (r8 >= r0) {
                r3 = 0u;
                return r3;
            }
        } else {
            f2 = (f64)rdf32(r8);
            f0 = (f64)rdf32(r8 + 4u);
            f1 = (f64)(f32)(f2 - f7);
            f3 = (f64)rdf32((u32)param_1 + 0x4f4u);
            f6 = (f64)(f32)(f0 - f8);
            f5 = (f64)(f32)(f2 + f7);
            f4 = (f64)(f32)(f0 + f8);
            wrf32d(0x817fdff0u, f1);
            if (!(f1 < f3) && f1 != f3) {
                f2 = (f64)rdf32((u32)param_1 + 0x4fcu);
                if (!(f1 > f2) && f1 != f2) {
                    f1 = (f64)rdf32((u32)param_1 + 0x4f8u);
                    if (!(f6 < f1) && f6 != f1) {
                        f0 = (f64)rdf32((u32)param_1 + 0x500u);
                        if (!((f6 > f0) || (f6 == f0))) {
                            if ((f5 < f3) || (f5 == f3) || (f5 > f2) || (f5 == f2) || (f4 < f1) || (f4 == f1) || (f4 > f0) || (f4 == f0)) break;
                            r8 = r8 + 0xcu;
                            if (r8 < r0) continue;
                            r3 = 0u;
                            return r3;
                        }
                    }
                }
            }
            f1 = (f64)px_w2f(ppc_single_bits(f5));
            if (!(f1 > (f64)rdf32((u32)param_1 + 0x4f4u)) || !(f1 < (f64)rdf32((u32)param_1 + 0x4fcu))) {
                r8 = r8 + 0xcu;
                if (r8 >= r0) {
                    r3 = 0u;
                    return r3;
                }
            } else {
                f1 = (f64)px_w2f(ppc_single_bits(f4));
                if (f1 > (f64)rdf32((u32)param_1 + 0x4f8u) && f1 < (f64)rdf32((u32)param_1 + 0x500u)) {
                    r7 = rd32(r8 + 4u);
                    r6 = rd32(0x817fdff0u);
                    wr32((u32)param_1 + 0x100u, rd32(r8));
                    wr32((u32)param_1 + 0x104u, r7);
                    wr32((u32)param_1 + 0x108u, rd32(r8 + 8u));
                    wr32((u32)param_1 + 0xf4u, r6);
                    wr32((u32)param_1 + 0xf8u, ppc_single_bits(f6));
                    wr8((u32)param_1 + 0xfcu, 0u);
                    wr8((u32)param_1 + 0xfdu, 0xffu);
                    r3 = 0xffffffffu;
                    return r3;
                }
                r8 = r8 + 0xcu;
                if (r8 >= r0) {
                    r3 = 0u;
                    return r3;
                }
            }
        }
    }
    r7 = rd32(r8 + 4u);
    wr32((u32)param_1 + 0xf4u, rd32(r8));
    wr32((u32)param_1 + 0xf8u, r7);
    wr32((u32)param_1 + 0xfcu, rd32(r8 + 8u));
    wr32((u32)param_1 + 0x100u, ppc_single_bits(f5));
    wr32((u32)param_1 + 0x104u, ppc_single_bits(f4));
    wr8((u32)param_1 + 0x108u, 0u);
    wr8((u32)param_1 + 0x109u, 0xffu);
    r3 = 0xffffffffu;
    return r3;
}
