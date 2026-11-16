#include "tc_rt.h"

void fn_80062998(f64 param_1, s32 param_2)
{
    u32 r5 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(0x80572550u);
    if (param_1 < f2) {
        f0 = (f64)rdf32((u32)param_2 + 0x10cu);
        if ((f0 > f2) || (f0 == f2)) {
            r5 = rd32((u32)param_2 + 0x70u);
            wrf32d(r5 + 0x54u, (f64)(f32)((f64)rdf32(rd32(r5 + 0x48u) + 0x18u) - (f64)rdf32(0x80572554u)));
            wrf32d(rd32((u32)param_2 + 0x70u) + 0x60u, f2);
        }
    }
    wrf32d((u32)param_2 + 0x10cu, param_1);
    wrf32d(rd32((u32)param_2 + 0x70u) + 0x58u, (f64)(f32)param_1);
    return;
}
