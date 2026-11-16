#include "tc_rt.h"

f64 fn_80149df0(u32 param_1, s32 param_2)
{
    return (f64)rdf32(rd32(0x805712f0u) + (rd32(param_1) * 0x16cu) + ((u32)param_2 * 0x24u) + 0x28u);
}
