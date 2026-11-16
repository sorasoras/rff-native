#include "tc_rt.h"

u32 fn_800d33a4(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32((u32)param_1 + 0x1cu);
    r0 = 0u;
    f0 = (f64)rdf32(0x80573124u);
    if ((f1 > f0) || (f1 == f0)) {
        f0 = (f64)rdf32((u32)param_1 + 4u);
        if ((f0 > f1) || (f0 == f1)) {
            r0 = 1u;
        }
    }
    return r0;
}
