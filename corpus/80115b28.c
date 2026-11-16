#include "tc_rt.h"

void fn_80115b28(s32 param_1, u32 param_2)
{
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32((u32)param_1 + 0x34u);
    wrf32d(param_2, f1);
    wrf32d(param_2 + 4u, (f64)rdf32((u32)param_1 + 0x38u));
    f2 = (f64)rdf32((u32)param_1 + 0x3cu);
    wrf32d(param_2 + 8u, f2);
    a.f[0] = f1;
    a.f[1] = f2;
    f1 = tc_callf(0x8010f844u, &a);
    wrf32d(param_2 + 4u, f1);
    return;
}
