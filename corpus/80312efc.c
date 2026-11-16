#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_80312efc(f64 param_1, f64 param_2, f64 param_3, f64 param_4, u32 param_5, u32 param_6)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f30 = (f64)(f32)(param_1 - param_2);
    a.r[0] = param_6;
    a.r[1] = param_5;
    f1 = tc_callf(0x802344c0u, &a);
    f0 = (f64)rdf32(0x8057787cu);
    f31 = f1;
    if (!((f1 < f0) || (f1 == f0))) {
        a.f[0] = f1;
        f1 = tc_callf(0x802eff54u, &a);
        f0 = (f64)(f32)(f31 * f1);
    }
    f0 = (f64)(f32)(f0 - param_2);
    f2 = (f64)(f32)(f30 * param_4);
    f1 = (f64)(f32)(f30 * param_3);
    if (!(f2 > f0)) {
        if (!(f1 < f0)) {
            f3 = (f64)(f32)(f1 - f2);
            f1 = (f64)rdf32(0x8057787cu);
            if (f1 != f3) {
                f1 = (f64)(f32)((f64)rdf32(0x80577894u) - (f64)(f32)px_fdiv((f64)(f32)(f0 - f2), f3));
            }
        } else {
            f1 = (f64)rdf32(0x8057787cu);
        }
    } else {
        f1 = (f64)rdf32(0x80577894u);
    }
    return f1;
}
