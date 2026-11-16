#include "tc_rt.h"

u32 fn_800a993c(f64 param_1, s32 param_2)
{
    u32 c0lt = 0;
    f64 f0 = 0.0;
    f0 = (f64)(f32)ppc_fabs((f64)rdf32((u32)param_2 + 0x2dcu));
    c0lt = f0 < param_1;
    return (((c0lt << 0x1fu) | ((f0 > param_1) << 0x1eu) | ((c0lt || (f0 == param_1)) << 0x1du) | (((f0 != f0) || (param_1 != param_1)) << 0x1cu)) >> 0x1du) & 1u;
}
