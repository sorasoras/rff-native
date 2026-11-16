#include "tc_rt.h"

f64 fn_80064f9c(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32(rd32((u32)param_1 + 0x70u) + 0x48u);
    if (r3 != 0u) {
        return (f64)rdf32(r3 + 0x18u);
    }
    return (f64)rdf32(0x80572550u);
}
