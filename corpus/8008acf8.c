#include "tc_rt.h"

u32 fn_8008acf8(u32 param_1, u32 param_2)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80572944u);
    f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(param_1) - (f64)rdf32(param_2)));
    r0 = ((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u;
    if (r0 != 0u) {
        f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(param_1 + 4u) - (f64)rdf32(param_2 + 4u)));
        r0 = ((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u;
    }
    if (r0 != 0u) {
        f0 = (f64)rdf32(0x80572944u);
        f1 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(param_1 + 8u) - (f64)rdf32(param_2 + 8u)));
        r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
    }
    return r0;
}
