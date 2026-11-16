#include "tc_rt.h"

void fn_801d71e0(u32 param_1)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x80374784u);
    a.r[0] = param_1;
    a.r[1] = 4u;
    a.r[2] = 0u;
    (void)tc_call(0x801d5c7cu, &a);
    a.r[0] = param_1;
    (void)tc_call(0x801d5a0cu, &a);
    return;
}
