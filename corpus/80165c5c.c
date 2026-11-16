#include "tc_rt.h"

void fn_80165c5c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0x13u;
    (void)tc_call(0x800b31a0u, &a);
    a.f[0] = (f64)rdf32(0x80574b88u);
    a.r[0] = (u32)param_1 + 0xf5cu;
    (void)tc_call(0x800f16e0u, &a);
    return;
}
