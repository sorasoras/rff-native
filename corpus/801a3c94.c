#include "tc_rt.h"

u32 fn_801a3c94(f64 param_1, s32 param_2)
{
    u32 c0gt = 0;
    f64 f0 = 0.0;
    f0 = (f64)rdf32((u32)param_2 + 0xdacu);
    f0 = (f64)(f32)(f0 * f0);
    c0gt = f0 > param_1;
    return ((((f0 < param_1) << 0x1fu) | (c0gt << 0x1eu) | ((c0gt || (f0 == param_1)) << 0x1du) | (((f0 != f0) || (param_1 != param_1)) << 0x1cu)) >> 0x1du) & 1u;
}
