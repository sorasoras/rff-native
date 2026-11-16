#include "tc_rt.h"

void fn_8019a298(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    f5 = (f64)rdf32((u32)param_1 + 0x34u);
    f3 = rdf64(0x80575690u);
    f1 = (f64)rdf32((u32)param_1 + 0xc4u);
    f4 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x43cu) + f5);
    f0 = (f64)(f32)(f1 + (f64)rdf32((u32)param_1 + 0xd0u));
    f2 = (f64)(f32)((f3 * f5) + (f64)rdf32((u32)param_1 + 0x450u));
    wrf32d((u32)param_1 + 0x43cu, f4);
    wrf32d((u32)param_1 + 0x450u, f2);
    if (f4 > f0) {
        f1 = (f64)(f32)(f5 * (f64)rdf32(0x805756d0u));
        f0 = (f3 * f1) + f2;
        wrf32d((u32)param_1 + 0x34u, f1);
        f1 = (f64)(f32)(f4 + f1);
        f0 = (f64)(f32)f0;
        wrf32d((u32)param_1 + 0x43cu, f1);
        wrf32d((u32)param_1 + 0x450u, f0);
    } else {
        if (f4 < f1) {
            f1 = (f64)(f32)(f5 * (f64)rdf32(0x805756d0u));
            wr32((u32)param_1 + 0x458u, rd32((u32)param_1 + 0x458u) + 1u);
            f0 = (f3 * f1) + f2;
            wrf32d((u32)param_1 + 0x34u, f1);
            f1 = (f64)(f32)(f4 + f1);
            f0 = (f64)(f32)f0;
            wrf32d((u32)param_1 + 0x43cu, f1);
            wrf32d((u32)param_1 + 0x450u, f0);
        }
    }
    wr32((u32)param_1 + 0x45cu, rd32((u32)param_1 + 0x45cu) + 1u);
    return;
}
