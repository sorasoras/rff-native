#include "tc_rt.h"

void fn_801d7a9c(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32((u32)param_1 + 0xd44u);
    f1 = (f64)rdf32((u32)param_1 + 0xd48u);
    f0 = (f64)rdf32((u32)param_1 + 0xd4cu);
    wrf32d((u32)param_1 + 0x84u, f2);
    wrf32d((u32)param_1 + 0x88u, f1);
    wrf32d((u32)param_1 + 0x8cu, f0);
    wrf32d((u32)param_1 + 4u, f2);
    wrf32d((u32)param_1 + 8u, f1);
    wrf32d((u32)param_1 + 0xcu, f0);
    wr32((u32)param_1 + 0xdf8u, 1u);
    return;
}
