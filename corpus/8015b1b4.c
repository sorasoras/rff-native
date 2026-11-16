#include "tc_rt.h"

f64 fn_8015b1b4(f64 param_1, f64 param_2)
{
    u32 c0lt = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = param_1;
    f0 = (f64)rdf32(0x80574960u);
    c0lt = param_2 < f0;
    if (param_2 > f0) {
        while ((f1 > param_2) || (f1 == param_2)) {
            f1 = (f64)(f32)(f1 - param_2);
        }
        f0 = (f64)rdf32(0x80574960u);
        while (f1 < f0) {
            f1 = (f64)(f32)(f1 + param_2);
        }
        return f1;
    }
    if (c0lt) {
        while ((f1 < param_2) || (f1 == param_2)) {
            f1 = (f64)(f32)(f1 - param_2);
        }
        f0 = (f64)rdf32(0x80574960u);
        while (f1 > f0) {
            f1 = (f64)(f32)(f1 + param_2);
        }
        return f1;
    }
    return f0;
}
