#include "tc_rt.h"

f64 fn_80149b9c(u32 param_1)
{
    return (f64)rdf32(rd32(0x805712ecu) + (rd32(param_1) * 0x108u) + 0xe4u);
}
