#include "tc_rt.h"

u32 fn_800ad9b8(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32((u32)param_1 + 0x84u);
    f0 = (f64)rdf32(0x80572bc0u);
    return (((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1du) & 1u) ^ 1u;
}
