#include "tc_rt.h"

void fn_801d0784(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    if (rd32((u32)param_1 + 0x338u) != 0u) {
        f0 = (f64)rdf32(0x80570990u);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x33cu) + (f64)rdf32(0x8057098cu));
        wrf32d((u32)param_1 + 0x33cu, f1);
        if (!((f1 > f0) || (f1 == f0))) {
            return;
        }
        wr32((u32)param_1 + 0x338u, 0u);
        return;
    }
    return;
}
