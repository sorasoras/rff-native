#include "tc_rt.h"

f64 fn_80149d04(u32 param_1)
{
    return (f64)rdf32(rd32(0x805712e8u) + (rd32(param_1) * 0x304u) + 0x6cu);
}
