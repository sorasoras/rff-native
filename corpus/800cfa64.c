#include "tc_rt.h"

u32 fn_800cfa64(f64 param_1, f64 param_2, s32 param_3, u32 param_4)
{
    f64 f0 = 0.0, f3 = 0.0;
    f3 = (f64)rdf32(param_4 + 4u);
    f0 = (f64)rdf32(param_4 + 8u);
    wrf32d((u32)param_3 + 8u, (f64)rdf32(param_4));
    wrf32d((u32)param_3 + 0xcu, f3);
    wrf32d((u32)param_3 + 0x10u, f0);
    wrf32d((u32)param_3 + 0x14u, param_1);
    wrf32d((u32)param_3 + 0x18u, param_2);
    wr32((u32)param_3 + 4u, 1u);
    return 1u;
}
