#include "tc_rt.h"

void fn_8007fa14(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32((u32)param_1 + 0x16cu);
    f1 = (f64)rdf32(0x80572860u);
    if (f2 > f1) {
        f0 = (f64)(f32)(f2 - (f64)rdf32(0x80572864u));
        wrf32d((u32)param_1 + 0x16cu, f0);
        if (f0 > f1) {
            wr32((u32)param_1 + 0x148u, rd32((u32)param_1 + 0x148u) | 0x1000000u);
            return;
        }
        wr32((u32)param_1 + 0x148u, rd32((u32)param_1 + 0x148u) & 0xfeffffffu);
        return;
    }
    return;
}
