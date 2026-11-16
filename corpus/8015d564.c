#include "tc_rt.h"

void fn_8015d564(s32 param_1, u32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x805749a8u);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = f1;
    a.f[3] = (f64)rdf32(0x805749fcu);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = param_2;
    a.r[2] = 3u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    (void)tc_call(0x8015be94u, &a);
    a.r[0] = (u32)param_1 + 0x10u;
    (void)tc_call(0x8015c5f0u, &a);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = 0u;
    (void)tc_call(0x8015c608u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8015d1ecu, &a);
    (void)tc_call(0x800a7894u, &a);
    return;
}
