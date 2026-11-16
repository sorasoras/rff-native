#include "tc_rt.h"

f64 fn_80182abc(s32 param_1, s32 param_2)
{
    f64 f1 = 0.0;
    f1 = (f64)rdf32(0x805750b8u);
    if ((u32)param_2 == 0u) {
        return (f64)rdf32((u32)param_1 + 0x108u);
    }
    if ((u32)param_2 == 1u) {
        return (f64)rdf32((u32)param_1 + 0x108u);
    }
    if ((u32)param_2 == 2u) {
        return (f64)rdf32((u32)param_1 + 0x108u);
    }
    return f1;
}
