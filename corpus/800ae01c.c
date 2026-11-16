#include "tc_rt.h"

u32 fn_800ae01c(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80572bc0u);
    f0 = (f64)rdf32((u32)param_1 + 0x18u);
    return (((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) ^ 1u;
}
