#include "tc_rt.h"

void fn_801dd990(f64 param_1, s32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x801dc328u, &a);
    wrf32d((u32)param_2 + 0x14u, ppc_fmadds(param_1, f1, (f64)rdf32((u32)param_2 + 0x10u)));
    return;
}
