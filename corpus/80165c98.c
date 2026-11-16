#include "tc_rt.h"

void fn_80165c98(u32 param_1)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x80574b8cu);
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    return;
}
