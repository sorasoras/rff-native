#include "tc_rt.h"

void fn_800a8aa8(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    f0 = (f64)rdf32(0x80572b78u);
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x2f0u) - (f64)rdf32(0x80572b7cu));
    wrf32d((u32)param_1 + 0x2f0u, f1);
    if (f1 < f0) {
        wrf32d((u32)param_1 + 0x2f0u, f0);
    }
    f0 = (f64)rdf32(0x80572b78u);
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x2ecu) - (f64)rdf32(0x80572b7cu));
    wrf32d((u32)param_1 + 0x2ecu, f1);
    if (f1 < f0) {
        wrf32d((u32)param_1 + 0x2ecu, f0);
        return;
    }
    return;
}
