#include "tc_rt.h"

void fn_801d4c98(f64 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    f2 = (f64)rdf32(0x8057600cu);
    wr32(0x817fdfccu, 0u);
    f0 = (f64)rdf32(0x80576034u);
    wrf32d(0x817fdfb4u, f2);
    wrf32d(0x817fdfb8u, f2);
    wrf32d(0x817fdfbcu, f0);
    a.r[0] = param_2;
    a.r[1] = 0u;
    a.f[0] = param_1;
    a.f[1] = f2;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
    f31 = f1;
    r3 = rd32(0x817fdfb8u);
    r0 = rd32(0x817fdfbcu);
    wr32(0x817fdfa8u, rd32(0x817fdfb4u));
    wr32(0x817fdfacu, r3);
    wr32(0x817fdfb0u, r0);
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = f31;
    f1 = tc_callf(0x80262b10u, &a);
    f2 = (f64)(f32)f1;
    f1 = (f64)rdf32(0x817fdfb0u);
    f4 = (f64)rdf32(0x817fdfa8u);
    f3 = (f64)(f32)(f1 * f2);
    f2 = -f2;
    f3 = ppc_fmadds(f4, f30, f3);
    wrf32d(0x817fdfb4u, f3);
    wrf32d(0x817fdfbcu, ppc_fmadds(f4, f2, (f64)(f32)(f1 * f30)));
    a.f[0] = param_1;
    a.r[0] = 0x817fdfb4u;
    a.r[1] = 0x817fdfb4u;
    (void)tc_call(0x802343c8u, &a);
    wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdfb4u));
    wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdfb8u));
    wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdfbcu));
    return;
}
