#include "tc_rt.h"

u32 fn_8007ef78(u32 param_1)
{
    u32 c0gt = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    f2 = (f64)rdf32(param_1 + 0x19cu);
    if ((f64)rdf32(0x80572874u) < f2) {
        f2 = (f64)(f32)(f2 - (f64)rdf32(0x8057287cu));
    } else {
        f0 = (f64)rdf32(0x80572880u);
        if ((f0 > f2) || (f0 == f2)) {
            f2 = (f64)(f32)((f64)rdf32(0x8057287cu) + f2);
        }
    }
    f1 = (f64)(f32)(f2 - f1);
    if (f1 > (f64)rdf32(0x80572874u)) {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x8057287cu));
    } else {
        if (f1 < (f64)rdf32(0x80572880u)) {
            f1 = (f64)(f32)(f1 + (f64)rdf32(0x8057287cu));
        }
    }
    f1 = ppc_fabs(f1);
    f0 = (f64)rdf32(0x80572878u);
    f1 = (f64)(f32)f1;
    c0gt = f0 > f1;
    return ((((f0 < f1) << 0x1fu) | (c0gt << 0x1eu) | ((c0gt || (f0 == f1)) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1du) & 1u;
}
