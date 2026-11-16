#include "tc_rt.h"

void fn_80169770(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    a.f[0] = (f64)rdf32(0x80574c58u);
    a.r[0] = param_2;
    a.r[1] = 0xcu;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    a.r[0] = param_2;
    a.r[1] = 0xed6u;
    (void)tc_call(0x800aefd0u, &a);
    return;
}
