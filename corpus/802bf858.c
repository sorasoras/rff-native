#include "tc_rt.h"

void fn_802bf858(s32 param_1, u32 param_2, u32 param_3)
{
    if ((param_2 & rd32((u32)param_1 + 0x1cu)) != 0u) {
        wrf32d((u32)param_1 + 0xcu, (f64)rdf32(param_3));
        wrf32d((u32)param_1 + 0x10u, (f64)rdf32(param_3 + 4u));
        wrf32d((u32)param_1 + 0x14u, (f64)rdf32(param_3 + 8u));
        wr8((u32)param_1 + 0x18u, 1u);
        return;
    }
    return;
}
