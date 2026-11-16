#include "tc_rt.h"

void fn_8004cf88(s32 param_1)
{
    f64 f1 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32((u32)param_1 + 0xfcu);
    f4 = (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xdcu));
    a.f[0] = f1;
    a.f[1] = -f1;
    a.f[2] = -f4;
    a.f[3] = f4;
    a.f[4] = (f64)rdf32((u32)param_1 + 0xe0u);
    a.f[5] = (f64)rdf32((u32)param_1 + 0xe4u);
    a.r[0] = (u32)param_1 + 0x58u;
    (void)tc_call(0x802342e8u, &a);
    return;
}
