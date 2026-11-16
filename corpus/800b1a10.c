#include "tc_rt.h"

void fn_800b1a10(s32 param_1, s32 param_2)
{
    if ((u32)param_2 != 0xffffffffu) {
        wrf32d((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x1618u, (f64)rdf32(0x80572c00u));
        return;
    }
    return;
}
