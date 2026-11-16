#include "tc_rt.h"

void fn_8018ccb0(f64 param_1, s32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32((u32)param_2 + 0x58u);
    f1 = (f64)(f32)((f64)rdf32((u32)param_2 + 0x50u) + param_1);
    f0 = -f2;
    wrf32d((u32)param_2 + 0x50u, f1);
    if ((f1 < f0) || (f1 == f0)) {
        wrf32d((u32)param_2 + 0x50u, f0);
        return;
    }
    if ((f1 > f2) || (f1 == f2)) {
        wrf32d((u32)param_2 + 0x50u, f2);
        return;
    }
    return;
}
