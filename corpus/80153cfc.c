#include "tc_rt.h"

f64 fn_80153cfc(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 4u);
    if (r3 != 0u) {
        return (f64)rdf32(r3 + 0xb0u);
    }
    return (f64)rdf32(0x805748c0u);
}
