#include "tc_rt.h"

void fn_800bfc9c(u32 param_1)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x80572e78u);
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = 0u;
    (void)tc_call(0x800bf1d4u, &a);
    return;
}
