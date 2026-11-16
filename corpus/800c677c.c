#include "tc_rt.h"

u32 fn_800c677c(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r31 = 1u;
    if ((rd32(0x80499094u) & 0x20u) == 0u) {
        a.r[0] = 0x8049e140u;
        a.r[1] = 0x20u;
        r3 = tc_call(0x801a8f18u, &a);
        if (r3 == 0u) {
            r31 = 0u;
        }
    }
    if (r31 == 0u) {
        f2 = (f64)rdf32(rd32(0x805711ccu) + 0x58u);
        if (!((f64)(f32)ppc_fabs(f2) > (f64)rdf32(0x80572f3cu))) {
            f2 = (f64)rdf32(0x80572f38u);
        }
        wrf32d(param_2, f2);
        f2 = (f64)rdf32(rd32(0x805711ccu) + 0x5cu);
        if (!((f64)(f32)ppc_fabs(f2) > (f64)rdf32(0x80572f3cu))) {
            f2 = (f64)rdf32(0x80572f38u);
        }
        f1 = (f64)rdf32(0x80572f38u);
        r3 = 0u;
        f0 = (f64)rdf32(param_2);
        wrf32d(param_2 + 8u, f2);
        wrf32d(param_2 + 4u, f1);
        if (f1 != f0) {
            r3 = 1u;
        }
        if ((f64)rdf32(0x80572f38u) != (f64)rdf32(param_2 + 8u)) {
            r3 = r3 | 2u;
        }
    } else {
        f0 = (f64)rdf32(0x80572f38u);
        r3 = 0u;
        wrf32d(param_2 + 8u, f0);
        wrf32d(param_2 + 4u, f0);
        wrf32d(param_2, f0);
    }
    return r3;
}
