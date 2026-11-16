#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8011b2d8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r8 = 0, r31 = 0;
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
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    r8 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    r31 = r8 + 0x134u;
    r6 = rd32(r8 + 0x144u);
    r0 = rd32(r8 + 0x148u);
    wr32(0x817fdfb4u, rd32(r8 + 0x140u));
    wr32(0x817fdfb8u, r6);
    wr32(0x817fdfbcu, r0);
    a.r[0] = 0x817fdfb4u;
    a.r[1] = r31;
    a.r[2] = 0x817fdfb4u;
    (void)tc_call(0x802343a4u, &a);
    f1 = (f64)rdf32(0x805741f8u);
    r0 = 0u;
    f0 = (f64)rdf32(0x817fdfb4u);
    wrf32d(0x817fdfb8u, f1);
    if ((f1 == f0 && f1 == f1) && f1 == (f64)rdf32(0x817fdfbcu)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = 0x817fdfb4u;
        a.r[1] = 0x817fdfb4u;
        (void)tc_call(0x802343e4u, &a);
    }
    a.r[0] = param_1;
    a.r[1] = 0xffffff9cu;
    a.r[2] = 0x64u;
    r3 = tc_call(0x800adf14u, &a);
    r3 = r3 ^ 0x80000000u;
    wr32(0x817fdfc4u, r3);
    r4 = rd32(0x817fdfb4u);
    wr32(0x817fdfc0u, 0x43300000u);
    r3 = rd32(0x817fdfb8u);
    r0 = rd32(0x817fdfbcu);
    f2 = (f64)rdf32(0x805741fcu);
    f3 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfc0u) - rdf64(0x80574210u)), (f64)rdf32(0x80574200u));
    f1 = (f64)rdf32(0x80574204u);
    f0 = (f64)rdf32(0x80574208u);
    wr32(0x817fdfa8u, r4);
    wr32(0x817fdfacu, r3);
    wr32(0x817fdfb0u, r0);
    f2 = (f64)(f32)(f2 * f3);
    f1 = (f64)(f32)(f1 * f2);
    f30 = (f64)(f32)px_fdiv(f1, f0);
    a.f[0] = f30;
    f1 = tc_callf(0x80262704u, &a);
    f31 = (f64)(f32)f1;
    a.f[0] = f30;
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f1 = (f64)rdf32(0x817fdfb0u);
    f3 = (f64)rdf32(0x817fdfa8u);
    wrf32d(0x817fdfb4u, ppc_fmadds(f3, f31, (f64)(f32)(f1 * f4)));
    wrf32d(0x817fdfbcu, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f31)));
    a.r[0] = 0x817fdfb4u;
    a.r[1] = r31;
    a.r[2] = 0x817fdfb4u;
    (void)tc_call(0x80234380u, &a);
    wrf32d(param_2, (f64)rdf32(0x817fdfb4u));
    wrf32d(param_2 + 4u, (f64)rdf32(0x817fdfb8u));
    wrf32d(param_2 + 8u, (f64)rdf32(0x817fdfbcu));
    return;
}
