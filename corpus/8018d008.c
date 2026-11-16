#include "tc_rt.h"

u32 fn_8018d008(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32((u32)param_1 + 0x50u);
    f1 = (f64)(f32)((f64)rdf32(0x80575310u) * (f64)rdf32((u32)param_1 + 0x58u));
    f0 = -f1;
    if (f2 < f0) {
        return 1u;
    }
    if (((f0 < f2) || (f0 == f2)) && ((f2 < f1) || (f2 == f1))) {
        return 0u;
    }
    return 2u;
}
