#include "tc_rt.h"

void fn_802f909c(s32 param_1, s32 param_2)
{
    wrf32d((u32)param_1 + 0x10u, (f64)rdf32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fcb6378u));
    return;
}
