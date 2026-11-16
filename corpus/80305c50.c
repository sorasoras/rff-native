#include "tc_rt.h"

f64 fn_80305c50(s32 param_1, s32 param_2)
{
    return (f64)rdf32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x3cu);
}
