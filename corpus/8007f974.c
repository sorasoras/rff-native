#include "tc_rt.h"

u32 fn_8007f974(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32((u32)param_1 + 0x244u);
    f0 = (f64)rdf32(0x805728a0u);
    do {
        if ((f1 < f0) || (f1 == f0)) {
            f0 = (f64)rdf32(0x805728a4u);
            if ((f1 > f0) || (f1 == f0)) {
                wr32((u32)param_1 + 0x230u, 0u);
                break;
            }
        }
        if (f1 > (f64)rdf32(0x805728a0u)) {
            f0 = (f64)rdf32(0x805728a8u);
            if ((f1 < f0) || (f1 == f0)) {
                wr32((u32)param_1 + 0x230u, 1u);
            }
        }
    } while (0);
    if (f1 < (f64)rdf32(0x805728a4u)) {
        f0 = (f64)rdf32(0x805728acu);
        if ((f1 > f0) || (f1 == f0)) {
            wr32((u32)param_1 + 0x230u, 3u);
            return rd32((u32)param_1 + 0x230u);
        }
    }
    wr32((u32)param_1 + 0x230u, 2u);
    return rd32((u32)param_1 + 0x230u);
}
