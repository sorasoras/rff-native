#include "tc_rt.h"

u32 fn_80196a3c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    f4 = (f64)rdf32((u32)param_1 + 0x3f0u);
    f3 = (f64)rdf32((u32)param_1 + 0x3f4u);
    f2 = (f64)(f32)(f4 + (f64)rdf32((u32)param_1 + 0x3fcu));
    f0 = (f64)rdf32(param_2);
    f1 = (f64)(f32)(f3 + (f64)rdf32((u32)param_1 + 0x400u));
    if (f4 < f0 && f0 < f2) {
        f0 = (f64)rdf32(param_2 + 4u);
        if (f3 < f0 && f0 < f1) {
            r3 = 1u;
            wr8(param_3, 0x15u);
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
