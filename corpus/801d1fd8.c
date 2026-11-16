#include "tc_rt.h"

void fn_801d1fd8(s32 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    if ((u32)param_2 != 0u) {
        f0 = (f64)rdf32(0x80575ea8u);
        wrf32d((u32)param_1 + 0x364u, (f64)rdf32((u32)param_1 + 0x10cu));
        r4 = rd32((u32)param_1 + 0x70u);
        wrf32d((u32)param_1 + 0x10cu, f0);
        wrf32d(r4 + 0x58u, f0);
        return;
    }
    f2 = (f64)rdf32((u32)param_1 + 0x364u);
    f1 = (f64)rdf32(0x80575ea8u);
    if (f2 < f1) {
        f0 = (f64)rdf32((u32)param_1 + 0x10cu);
        if ((f0 > f1) || (f0 == f1)) {
            r5 = rd32((u32)param_1 + 0x70u);
            wrf32d(r5 + 0x54u, (f64)(f32)((f64)rdf32(rd32(r5 + 0x48u) + 0x18u) - (f64)rdf32(0x80575e98u)));
            wrf32d(rd32((u32)param_1 + 0x70u) + 0x60u, f1);
        }
    }
    wrf32d((u32)param_1 + 0x10cu, f2);
    wrf32d(rd32((u32)param_1 + 0x70u) + 0x58u, f2);
    return;
}
