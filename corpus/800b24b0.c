#include "tc_rt.h"

void fn_800b24b0(s32 param_1, u32 param_2)
{
    u32 r5 = 0;
    if (rd32(param_2) != 0u) {
        r5 = rd32((u32)param_1 + 0xe88u);
        wrf32d((u32)param_1 + 0x15f8u, (f64)rdf32(param_2 + 8u));
        wrf32d((u32)param_1 + 0x15fcu, (f64)rdf32(param_2 + 0xcu));
        wrf32d((u32)param_1 + 0x1600u, (f64)rdf32(param_2 + 0x10u));
        wr32((u32)param_1 + 0xe88u, r5 | (r5 ^ 0x40u));
        return;
    }
    return;
}
