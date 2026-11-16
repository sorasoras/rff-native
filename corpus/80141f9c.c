#include "tc_rt.h"

s32 fn_80141f9c(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80574454u);
    wrf32d((u32)param_1 + 0xcu, f0);
    wrf32d((u32)param_1 + 8u, f0);
    wrf32d((u32)param_1 + 4u, f0);
    wrf32d((u32)param_1 + 0x18u, f0);
    wrf32d((u32)param_1 + 0x14u, f0);
    wrf32d((u32)param_1 + 0x10u, f0);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80141fe8u, &a);
    return param_1;
}
