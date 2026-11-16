#include "tc_rt.h"

void fn_800d3228(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if ((u32)((s32)rd32((u32)param_1 + 0x28u) >> 31) == 0u) {
        if ((f64)rdf32((u32)param_1 + 0x1cu) < (f64)rdf32(0x80573124u)) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800d3188u, &a);
        }
        f0 = (f64)rdf32(0x80573128u);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 4u) + (f64)rdf32((u32)param_1 + 8u));
        wrf32d((u32)param_1 + 4u, f1);
        if (!(f1 < f0)) {
            f1 = f0;
        }
        wrf32d((u32)param_1 + 4u, f1);
    }
    return;
}
