#include "tc_rt.h"

void fn_8004b3ec(f64 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = param_1;
    f0 = (f64)rdf32(0x80572198u);
    if (param_1 < f0) {
        f1 = f0;
    }
    f0 = (f64)rdf32(0x8057219cu);
    if (f1 > f0) {
        f1 = f0;
    }
    f0 = (f64)rdf32(0x805721a0u);
    wrf32d(0x8057107cu, f1);
    wr8(0x80571078u, (u8)((((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1du) & 1u) ^ 1u));
    return;
}
