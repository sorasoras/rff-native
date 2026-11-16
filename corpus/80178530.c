#include "tc_rt.h"

void fn_80178530(s32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1 + 0x10cu;
    a.r[0] = r3;
    a.r[1] = (u32)param_1 + 0x118u;
    a.r[2] = r3;
    (void)tc_call(0x80234380u, &a);
    f0 = (f64)rdf32((u32)param_1 + 0x134u);
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x198u) + (f64)rdf32((u32)param_1 + 0x110u));
    wrf32d((u32)param_1 + 0x198u, f1);
    if ((f1 > f0) || (f1 == f0)) {
        wrf32d((u32)param_1 + 0x198u, f0);
    }
    wrf32d((u32)param_1 + 0x20u, (f64)rdf32((u32)param_1 + 0x198u));
    return;
}
