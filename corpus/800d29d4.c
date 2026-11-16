#include "tc_rt.h"

u32 fn_800d29d4(f64 param_1, s32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(param_3 + 4u);
    f0 = (f64)rdf32(param_3 + 8u);
    wrf32d((u32)param_2 + 8u, (f64)rdf32(param_3));
    wrf32d((u32)param_2 + 0xcu, f2);
    wrf32d((u32)param_2 + 0x10u, f0);
    wrf32d((u32)param_2 + 0x14u, param_1);
    wr32((u32)param_2 + 4u, 1u);
    return 1u;
}
