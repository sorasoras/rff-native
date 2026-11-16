#include "tc_rt.h"

void fn_8017e408(f64 param_1, u32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80575048u);
    if (!(f0 > param_1)) {
        f0 = param_1;
    }
    f4 = (f64)rdf32(0x80575058u);
    if (!(f4 < f0)) {
        f4 = f0;
    }
    f5 = (f64)(f32)((f64)rdf32(0x80575058u) - f4);
    f2 = (f64)(f32)((f64)rdf32(0x80575060u) * f4);
    f6 = (f64)(f32)(f4 * (f64)(f32)(f4 * f4));
    f4 = (f64)(f32)(f2 * f4);
    f3 = (f64)(f32)(f5 * (f64)(f32)(f5 * f5));
    f2 = (f64)(f32)(f5 * (f64)(f32)(f2 * f5));
    f4 = (f64)(f32)(f5 * f4);
    f0 = (f64)rdf32(0x80575048u);
    wrf32d(param_3, ppc_fmadds((f64)rdf32(param_2 + 0x24u), f6, ppc_fmadds((f64)rdf32(param_2 + 0x18u), f4, ppc_fmadds((f64)rdf32(param_2), f3, (f64)(f32)((f64)rdf32(param_2 + 0xcu) * f2)))));
    f1 = (f64)(f32)((f64)rdf32(param_2 + 0x10u) * f2);
    f2 = (f64)rdf32(param_2 + 0x1cu);
    f7 = (f64)rdf32(param_2 + 0x28u);
    f1 = ppc_fmadds((f64)rdf32(param_2 + 4u), f3, f1);
    wrf32d(param_3 + 8u, f0);
    wrf32d(param_3 + 4u, ppc_fmadds(f7, f6, ppc_fmadds(f2, f4, f1)));
    a.r[0] = param_2 + 0x30u;
    a.r[1] = param_3;
    a.r[2] = param_3;
    (void)tc_call(0x8023411cu, &a);
    return;
}
