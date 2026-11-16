#include "tc_rt.h"

f64 fn_8018cc50(void)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x80040a00u, &a);
    f2 = (f64)rdf32(0x80575310u);
    f1 = (f64)(f32)(f1 - f2);
    if (f1 < (f64)rdf32(0x805752d8u)) {
        f1 = (f64)(f32)(f1 - f2);
        f0 = (f64)rdf32(0x805752e8u);
        if (!(f1 < f0)) {
            return f1;
        }
        f1 = f0;
    } else {
        f1 = (f64)(f32)(f2 + f1);
        f0 = (f64)rdf32(0x80575314u);
        if (f1 > f0) {
            f1 = f0;
        }
    }
    return f1;
}
