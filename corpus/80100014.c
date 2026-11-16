#include "tc_rt.h"

void fn_80100014(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(param_2 + 4u);
    f1 = (f64)rdf32(param_2 + 8u);
    f0 = (f64)rdf32(param_2 + 0xcu);
    wrf32d((u32)param_1 + 0x28u, (f64)rdf32(param_2));
    wrf32d((u32)param_1 + 0x2cu, f2);
    wrf32d((u32)param_1 + 0x30u, f1);
    wrf32d((u32)param_1 + 0x34u, f0);
    return;
}
