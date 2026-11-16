#include "tc_rt.h"

f64 fn_80149a14(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    f1 = tc_callf(0x801498fcu, &a);
    f1 = (f64)(f32)((f64)rdf32(rd32(0x805712ecu) + (rd32(param_1) * 0x108u) + 0xa4u) * f1);
    return f1;
}
