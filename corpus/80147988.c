#include "tc_rt.h"

u32 fn_80147988(f64 param_1, u32 param_2)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    r0 = 1u;
    f2 = (f64)rdf32(param_2);
    f0 = (f64)(f32)(param_1 + (f64)rdf32(0x80570828u));
    if ((f2 > f0) || (f2 == f0)) {
        r0 = 0u;
        wrf32d(param_2, (f64)rdf32(0x80574600u));
    }
    return r0;
}
