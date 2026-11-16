#include "tc_rt.h"

void fn_80176130(s32 param_1)
{
    if (((u32)param_1 + 0x80u) != 0u) {
        wr32((u32)param_1 + 0x98u, 1u);
    }
    wrf32d((u32)param_1 + 0x12cu, (f64)rdf32(0x80574f40u));
    return;
}
