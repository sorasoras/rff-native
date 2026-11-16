#include "tc_rt.h"

u32 fn_801c3b7c(u32 param_1, s32 param_2)
{
    u32 c0gt = 0;
    f64 f0 = 0.0, f1 = 0.0;
    (void)param_1;
    f0 = (f64)rdf32(0x80575d28u);
    f1 = (f64)rdf32(rd32((u32)param_2 + 0x70u) + 0x54u);
    c0gt = f1 > f0;
    return ((((f1 < f0) << 0x1fu) | (c0gt << 0x1eu) | ((c0gt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
}
