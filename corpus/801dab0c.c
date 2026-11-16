#include "tc_rt.h"

void fn_801dab0c(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    a.f[0] = (f64)rdf32(param_2);
    a.f[1] = (f64)rdf32(param_2 + 8u);
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x80089fc8u, &a);
    return;
}
