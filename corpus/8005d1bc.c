#include "tc_rt.h"

void fn_8005d1bc(f64 param_1, s32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = param_1;
    if ((f64)rdf32(0x805724a8u) < param_1) {
        f1 = (f64)(f32)(param_1 - (f64)rdf32(0x805724acu));
    } else {
        f0 = (f64)rdf32(0x805724b0u);
        if ((f0 > param_1) || (f0 == param_1)) {
            f1 = (f64)(f32)((f64)rdf32(0x805724acu) + param_1);
        }
    }
    wrf32d((u32)param_2 + 0x14u, f1);
    return;
}
