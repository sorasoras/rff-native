#include "tc_rt.h"

void fn_80036518(u32 param_1)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f0 = (f64)rdf32(0x80571ee0u);
    wr32(0x817fdfdcu, 0u);
    wrf32d(0x817fdfd0u, f0);
    wrf32d(0x817fdfccu, f0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd0u;
    a.r[2] = 0x817fdfccu;
    (void)tc_call(0x80035fccu, &a);
    f4 = (f64)rdf32(0x817fdfccu);
    f3 = (f64)rdf32(0x80571f00u);
    f2 = (f64)rdf32(0x80571efcu);
    f30 = (f64)(f32)(f2 * (f64)(f32)((f64)rdf32(0x80571f04u) - f4));
    f31 = (f64)(f32)(f2 * (f64)(f32)(f3 - (f64)rdf32(0x817fdfd0u)));
    a.f[0] = (f64)rdf32(0x80571ee0u);
    a.f[1] = f30;
    a.f[2] = f3;
    a.f[3] = f4;
    (void)tc_call(0x80036418u, &a);
    r6 = (u32)rd8(0x80570649u);
    r5 = (u32)rd8(0x8057064au);
    r0 = (u32)rd8(0x8057064bu);
    wr8(0x817fdfc8u, rd8(0x80570648u));
    wr8(0x817fdfc9u, (u8)r6);
    wr8(0x817fdfcau, (u8)r5);
    wr8(0x817fdfcbu, (u8)r0);
    a.f[0] = f31;
    a.f[1] = f30;
    a.r[0] = 0x817fdfc8u;
    a.r[1] = param_1;
    (void)tc_call(0x80036120u, &a);
    return;
}
