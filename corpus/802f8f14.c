#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_802f8f14(u32 param_1)
{
    f64 f1 = 0.0;
    if (rd32(param_1) == 0u) {
        f1 = (f64)rdf32(0x805775ecu);
        if (f1 == (f64)rdf32(param_1 + 0x10u)) {
            return f1;
        }
    }
    return (f64)(f32)px_fdiv((f64)rdf32(param_1 + 4u), (f64)rdf32(0x805775e8u));
}
