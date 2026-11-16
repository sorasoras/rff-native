#include "tc_rt.h"

u32 fn_801cff90(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32((u32)param_1 + 0x2e0u);
    r0 = 0xbu;
    f0 = (f64)rdf32((u32)param_1 + 0xde8u);
    if ((f1 < f0) || (f1 == f0)) {
        r0 = 1u;
    }
    return r0;
}
