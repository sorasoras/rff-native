#include "tc_rt.h"

void fn_8012f57c(s32 param_1)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x80574340u);
    a.f[1] = (f64)rdf32(0x80574344u);
    (void)tc_call(0x80059c9cu, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x801309d0u, &a);
    a.r[0] = (u32)param_1 + 0x900u;
    (void)tc_call(0x80119c70u, &a);
    return;
}
