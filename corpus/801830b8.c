#include "tc_rt.h"

void fn_801830b8(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80575160u);
    f0 = (f64)rdf32(0x805750bcu);
    wrf32d((u32)param_1 + 0x108u, (f64)rdf32(0x8057515cu));
    wrf32d((u32)param_1 + 0x114u, f1);
    wrf32d((u32)param_1 + 0x10cu, f0);
    wr32((u32)param_1 + 0xe0u, 0u);
    wr32((u32)param_1 + 0x170u, 2u);
    return;
}
