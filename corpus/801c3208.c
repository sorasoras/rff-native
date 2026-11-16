#include "tc_rt.h"

void fn_801c3208(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wrf32d(param_2, (f64)rdf32((u32)param_1 + 0x48u));
    wrf32d(param_2 + 4u, (f64)rdf32((u32)param_1 + 0x58u));
    wrf32d(param_2 + 8u, (f64)rdf32((u32)param_1 + 0x68u));
    a.r[0] = param_2;
    a.r[1] = param_2;
    (void)tc_call(0x802343e4u, &a);
    return;
}
