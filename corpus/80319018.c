#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

u32 fn_80319018(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    r4 = rd32(param_1);
    f3 = (f64)rdf32(0x805778e0u);
    f4 = (f64)px_w2f(rd32(param_1 + 4u));
    r0 = rd32(param_1 + 8u);
    if (!(f4 < f3)) {
        f2 = (f64)rdf32(0x805778e4u);
        if (!(f4 > f2)) {
            f1 = (f64)px_w2f(r4);
            if (f1 < f3 || f1 > f2) {
                r3 = 3u;
                return r3;
            }
            f0 = (f64)px_w2f(r0);
            if (f0 < f3 || f0 > f2) {
                r3 = 3u;
                return r3;
            }
            f1 = (f64)(f32)(f1 * f1);
            f0 = (f64)(f32)(f0 * f0);
            f0 = (f64)(f32)(f1 + f0);
            if (!(f0 > f2)) {
                if (f2 != f0) {
                    if (f3 == f4 || f2 == f4) {
                        r3 = 1u;
                        return r3;
                    }
                    r3 = 2u;
                    return r3;
                }
                r3 = 1u;
                return r3;
            }
            r3 = 3u;
            return r3;
        }
    }
    r3 = 3u;
    return r3;
}
