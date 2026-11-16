#include "tc_rt.h"

void fn_801a3f0c(u32 param_1, s32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32((u32)param_2 + 4u);
    wrf32d((u32)param_2 + 4u, (f64)(f32)(f1 + (f64)rdf32(param_1 + 0xde4u)));
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    wrf32d(param_1 + 0xde0u, (f64)(f32)((f64)rdf32(param_1 + 0xde0u) + (f64)rdf32(param_1 + 0xde4u)));
    return;
}
