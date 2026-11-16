#include "tc_rt.h"

u32 fn_8018ceb4(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f0 = (f64)rdf32((u32)param_1 + 0x50u);
    f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x58u) * (f64)rdf32(0x80575310u));
    f3 = (f64)rdf32(0x80575318u);
    f1 = -f2;
    if (((f1 < f0) || (f1 == f0)) && ((f0 < f2) || (f0 == f2))) {
        return 0u;
    }
    f0 = (f64)rdf32((u32)param_1 + 0x50u);
    f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x58u) * f3);
    f1 = -f2;
    if (((f1 < f0) || (f1 == f0)) && ((f0 < f2) || (f0 == f2))) {
        return 1u;
    }
    return 2u;
}
