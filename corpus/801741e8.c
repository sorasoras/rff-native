#include "tc_rt.h"

void fn_801741e8(f64 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    a.f[0] = param_1;
    a.f[1] = (f64)rdf32(0x80574e98u);
    a.f[2] = (f64)rdf32(0x80574e9cu);
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = 1u;
    a.r[3] = param_4;
    a.r[4] = 0u;
    (void)tc_call(0x800f4210u, &a);
    return;
}
