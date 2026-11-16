#include "tc_rt.h"

u32 fn_8018287c(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    if (rd32((u32)param_1 + 0xf4u) == 0u) {
        f0 = (f64)(f32)((f64)rdf32(param_2) + (f64)rdf32((u32)param_1 + 0x124u));
        wrf32d(param_2, f0);
        f1 = (f64)rdf32((u32)param_1 + 0x12cu);
        if (!((f0 > f1) || (f0 == f1))) {
            return 1u;
        }
        wrf32d(param_2, f1);
        wr32((u32)param_1 + 0xf4u, 1u);
    } else {
        f1 = (f64)rdf32(param_2);
        f0 = (f64)rdf32(0x805750d4u);
        if ((f1 < f0) || (f1 == f0)) {
            wrf32d(param_2, f0);
            return 1u;
        }
        wrf32d(param_2, (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0x128u)));
    }
    return 1u;
}
