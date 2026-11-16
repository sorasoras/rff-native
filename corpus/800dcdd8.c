#include "tc_rt.h"

f64 fn_800dcdd8(f64 param_1, s32 param_2)
{
    f64 f0 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32((u32)param_2 + 0xcu);
    f0 = (f64)(f32)(f2 - (f64)rdf32((u32)param_2 + 0x10u));
    if ((param_1 > f0) || (param_1 == f0)) {
        f0 = (f64)(f32)(f2 + (f64)rdf32((u32)param_2 + 0x14u));
        if ((param_1 < f0) || (param_1 == f0)) {
            return (f64)rdf32(0x80573a78u);
        }
    }
    return (f64)rdf32(0x80573a68u);
}
