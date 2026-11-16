#include "tc_rt.h"

void fn_80156428(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    a.f[0] = (f64)rdf32(0x8033a60cu);
    a.f[1] = (f64)rdf32(0x8033a610u);
    a.f[2] = (f64)rdf32(0x8033a614u);
    a.r[0] = param_2;
    (void)tc_call(0x80156140u, &a);
    return;
}
