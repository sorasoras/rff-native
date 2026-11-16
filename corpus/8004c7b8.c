#include "tc_rt.h"

void fn_8004c7b8(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f2 = -(f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2 + 8u);
    f7 = -(f64)rdf32(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    f9 = -f0;
    f8 = (f64)(f32)f2;
    f1 = (f64)rdf32(param_3 + 4u);
    f6 = (f64)(f32)f7;
    wrf32d(0x817fdff4u, f7);
    f0 = (f64)rdf32(0x805721c4u);
    f4 = (f64)(f32)f9;
    f7 = (f64)(f32)(f8 * f1);
    f5 = (f64)rdf32(param_3);
    wrf32d(0x817fdff8u, f2);
    f1 = (f64)(f32)(f0 * f1);
    f2 = (f64)(f32)(f0 * f5);
    f3 = (f64)rdf32(param_3 + 8u);
    f5 = ppc_fmadds(f6, f5, f7);
    wrf32d(0x817fdffcu, f9);
    f0 = (f64)(f32)(f0 * f3);
    f3 = ppc_fmadds(f4, f3, f5);
    f2 = ppc_fmsubs(f2, f3, f6);
    f1 = ppc_fmsubs(f1, f3, f8);
    f0 = ppc_fmsubs(f0, f3, f4);
    wrf32d(0x817fdfe8u, f2);
    wrf32d(0x817fdfecu, f1);
    wrf32d(0x817fdff0u, f0);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = param_1;
    (void)tc_call(0x802343e4u, &a);
    return;
}
