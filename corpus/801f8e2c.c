#include "tc_rt.h"

u32 fn_801f8e2c(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    r0 = 1u;
    f0 = (f64)rdf32(0x80576658u);
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xcu) + (f64)rdf32((u32)param_1 + 0x10u));
    wrf32d((u32)param_1 + 0xcu, f1);
    if (f1 > f0) {
        wrf32d((u32)param_1 + 0xcu, f0);
        r0 = 0u;
    } else {
        f0 = (f64)rdf32(0x80576650u);
        if (f1 < f0) {
            wrf32d((u32)param_1 + 0xcu, f0);
            r0 = 0u;
        }
    }
    return r0;
}
