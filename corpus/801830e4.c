#include "tc_rt.h"

void fn_801830e4(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x805750d0u);
    f0 = (f64)rdf32(0x805750d8u);
    wrf32d((u32)param_1 + 0x108u, (f64)rdf32(0x80575134u));
    wrf32d((u32)param_1 + 0x114u, f1);
    wrf32d((u32)param_1 + 0x10cu, f0);
    return;
}
