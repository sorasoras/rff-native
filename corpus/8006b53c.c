#include "tc_rt.h"

void fn_8006b53c(f64 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f1 = param_1;
    f2 = (f64)rdf32(0x805725e8u);
    f0 = (f64)rdf32(0x805725ecu);
    while (f1 < f0) {
        f1 = (f64)(f32)(f1 + f2);
    }
    f2 = (f64)rdf32(0x805725e8u);
    f0 = (f64)rdf32(0x805725e4u);
    while (f1 > f0) {
        f1 = (f64)(f32)(f1 - f2);
    }
    return;
}
