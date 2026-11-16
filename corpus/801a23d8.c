#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801a23d8(f64 param_1, s32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f3 = (f64)rdf32((u32)param_2 + 0xd24u);
    f0 = (f64)rdf32((u32)param_2 + 0x2dcu);
    if (rd32((u32)param_2 + 0xdc0u) != 0u) {
        f3 = (f64)rdf32((u32)param_2 + 0xd30u);
    }
    f0 = ppc_fabs(f0);
    f0 = (f64)(f32)f0;
    if ((f0 > param_1) || (f0 == param_1)) {
        f2 = (f64)rdf32((u32)param_2 + 0x2d8u);
        if ((f64)rdf32(0x805758b8u) < f2) {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x805758c0u));
        } else {
            f0 = (f64)rdf32(0x805758c4u);
            if ((f0 > f2) || (f0 == f2)) {
                f2 = (f64)(f32)((f64)rdf32(0x805758c0u) + f2);
            }
        }
        f0 = (f64)rdf32(0x805758bcu);
        f1 = (f64)(f32)((f64)rdf32(0x805758b8u) * f3);
        wrf32d((u32)param_2 + 0x19cu, f2);
        f0 = (f64)(f32)px_fdiv(f1, f0);
        wrf32d((u32)param_2 + 0x188u, f0);
        return;
    }
    return;
}
