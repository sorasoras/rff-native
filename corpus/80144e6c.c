#include "tc_rt.h"

s32 fn_80144e6c(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80574550u);
    wrf32d((u32)param_1 + 0x7cu, f0);
    wrf32d((u32)param_1 + 0x78u, f0);
    wrf32d((u32)param_1 + 0x74u, f0);
    return param_1;
}
