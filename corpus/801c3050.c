#include "tc_rt.h"

void fn_801c3050(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x1c0u), &a);
    wrf32d(param_1 + 0xd3cu, (f64)(f32)((f64)rdf32(param_1 + 0xd3cu) + (f64)rdf32(param_1 + 0xd38u)));
    return;
}
