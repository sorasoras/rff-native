#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

u32 fn_80318f38(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    r5 = 0u;
    r4 = rd32(param_1 + 4u);
    f1 = (f64)rdf32(0x805778e0u);
    f2 = (f64)px_w2f(rd32(param_1));
    r0 = rd32(param_1 + 8u);
    if (!(f2 < f1)) {
        f0 = (f64)rdf32(0x805778e4u);
        if (!(f2 > f0)) {
            if (f0 == f2 || f1 == f2) {
                r5 = 1u;
            }
            f2 = (f64)px_w2f(r4);
            f1 = (f64)rdf32(0x805778e0u);
            if (!(f2 < f1)) {
                f0 = (f64)rdf32(0x805778e4u);
                if (!(f2 > f0)) {
                    if (f0 == f2 || f1 == f2) {
                        r5 = 1u;
                    }
                    f2 = (f64)px_w2f(r0);
                    f1 = (f64)rdf32(0x805778e0u);
                    if (!(f2 < f1)) {
                        f0 = (f64)rdf32(0x805778e4u);
                        if (!(f2 > f0)) {
                            if (r5 != 0u || f0 == f2 || f1 == f2) {
                                r3 = 1u;
                                return r3;
                            }
                            r3 = 2u;
                            return r3;
                        }
                    }
                    r3 = 3u;
                    return r3;
                }
            }
            r3 = 3u;
            return r3;
        }
    }
    r3 = 3u;
    return r3;
}
