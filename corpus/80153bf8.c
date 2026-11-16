#include "tc_rt.h"

void fn_80153bf8(f64 param_1, f64 param_2, s32 param_3)
{
    if ((f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32((u32)param_3 + 0x38u) - param_1)) < param_2) {
        wr32((u32)param_3 + 0x34u, rd32((u32)param_3 + 0x34u) + 1u);
    } else {
        wr32((u32)param_3 + 0x34u, 0u);
    }
    wrf32d((u32)param_3 + 0x38u, param_1);
    return;
}
