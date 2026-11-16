#include "tc_rt.h"

void fn_801ca408(f64 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    a.f[0] = param_1;
    a.f[1] = (f64)rdf32(0x80575e20u);
    a.f[2] = (f64)rdf32(0x80575e24u);
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = 7u;
    a.r[3] = param_4;
    a.r[4] = 0u;
    (void)tc_call(0x800f4210u, &a);
    return;
}
