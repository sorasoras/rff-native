#include "tc_rt.h"

f64 fn_8014a060(u32 param_1)
{
    return (f64)rdf32(rd32(0x805712f8u) + (rd32(param_1) * 0xacu) + 0x58u);
}
