#include "tc_rt.h"

s32 fn_8011f754(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 4u, 0u);
    wr32((u32)param_1 + 8u, 0u);
    a.r[0] = (u32)param_1 + 0x10u;
    (void)tc_call(0x8011e378u, &a);
    f0 = (f64)rdf32(0x805742a4u);
    wrf32d((u32)param_1 + 0x5cu, f0);
    wrf32d((u32)param_1 + 0x58u, f0);
    wrf32d((u32)param_1 + 0x54u, f0);
    return param_1;
}
