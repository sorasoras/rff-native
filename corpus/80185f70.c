#include "tc_rt.h"

s32 fn_80185f70(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2 + 8u);
    wrf32d((u32)param_1 + 0x28u, (f64)rdf32(param_2));
    wrf32d((u32)param_1 + 0x2cu, f1);
    wrf32d((u32)param_1 + 0x30u, f0);
    return (s32)((u32)param_1 + 0x28u);
}
