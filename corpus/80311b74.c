#include "tc_rt.h"

void fn_80311b74(f64 param_1, f64 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r6 = 0;
    f64 f0 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r6 = (u32)param_3 + 0x10000u;
    f3 = (f64)rdf32(param_4 + 4u);
    f0 = (f64)rdf32(param_4 + 8u);
    wrf32d(r6 - 0x3fe0u, (f64)rdf32(param_4));
    wrf32d(r6 - 0x3fdcu, f3);
    wrf32d(r6 - 0x3fd8u, f0);
    a.r[0] = param_5;
    a.r[1] = r6 - 0x3fd4u;
    (void)tc_call(0x8023376cu, &a);
    r3 = (u32)param_3 + 0x10000u;
    wrf32d(r3 - 0x3fa0u, param_1);
    wrf32d(r3 - 0x3fa4u, param_2);
    return;
}
