#include "tc_rt.h"

f64 fn_8007fff0(s32 param_1, s32 param_2)
{
    if (rd32((u32)param_1 + 0x29cu) == 0u) {
        return (f64)rdf32((u32)param_1 + 0xb0u);
    }
    return (f64)rdf32(rd32((u32)param_1 + 0x298u) + ((u32)param_2 * 0x14u) + 0x10u);
}
