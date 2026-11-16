#include "tc_rt.h"

void fn_800cdd30(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    f3 = (f64)rdf32(0x8057302cu);
    f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x20u) + (f64)rdf32((u32)param_1 + 0xecu));
    if (!(f3 > f0)) {
        f3 = f0;
    }
    f2 = (f64)rdf32(0x8057302cu);
    f0 = (f64)rdf32(0x80573028u);
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xe4u) - f2);
    wrf32d((u32)param_1 + 0x20u, f3);
    wrf32d((u32)param_1 + 0xe4u, f1);
    if (f1 < f0) {
        wrf32d((u32)param_1 + 0xe4u, f0);
        wrf32d((u32)param_1 + 0xecu, f0);
        wrf32d((u32)param_1 + 0xe8u, f2);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800cddb4u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006f778u, &a);
    return;
}
