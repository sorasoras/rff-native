#include "tc_rt.h"

f64 fn_801d4e1c(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f1 = (f64)rdf32(0x8057600cu);
    wr32(0x817fdfdcu, 0u);
    f0 = (f64)rdf32(0x80576034u);
    wrf32d(0x817fdfc0u, f1);
    wrf32d(0x817fdfc4u, f1);
    wrf32d(0x817fdfc8u, f0);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    f31 = f1;
    r3 = rd32(0x817fdfc4u);
    r0 = rd32(0x817fdfc8u);
    wr32(0x817fdfa8u, rd32(0x817fdfc0u));
    wr32(0x817fdfacu, r3);
    wr32(0x817fdfb0u, r0);
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = f31;
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f1 = (f64)rdf32(0x817fdfb0u);
    f3 = (f64)rdf32(0x817fdfa8u);
    wrf32d(0x817fdfc0u, ppc_fmadds(f3, f30, (f64)(f32)(f1 * f4)));
    wrf32d(0x817fdfc8u, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f30)));
    a.r[0] = 0x817fdfc0u;
    f1 = tc_callf(0x80234428u, &a);
    if (!(f1 > (f64)rdf32(0x80576038u))) {
        f1 = (f64)rdf32(0x804890ccu);
        f0 = (f64)rdf32(0x804890d0u);
        wrf32d(0x817fdfc0u, (f64)rdf32(0x804890c8u));
        wrf32d(0x817fdfc4u, f1);
        wrf32d(0x817fdfc8u, f0);
    } else {
        f1 = (f64)rdf32(0x8057600cu);
        r0 = 0u;
        if (f1 == (f64)rdf32(0x817fdfc0u) && f1 == (f64)rdf32(0x817fdfc4u) && f1 == (f64)rdf32(0x817fdfc8u)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfc0u;
            a.r[1] = 0x817fdfc0u;
            (void)tc_call(0x802343e4u, &a);
        }
    }
    a.r[0] = 0x817fdfb4u;
    a.r[1] = param_1;
    (void)tc_call(0x801d4938u, &a);
    a.r[0] = 0x817fdfb4u;
    f1 = tc_callf(0x80234428u, &a);
    if (!(f1 > (f64)rdf32(0x80576038u))) {
        f1 = (f64)rdf32(0x804890ccu);
        f0 = (f64)rdf32(0x804890d0u);
        wrf32d(0x817fdfb4u, (f64)rdf32(0x804890c8u));
        wrf32d(0x817fdfb8u, f1);
        wrf32d(0x817fdfbcu, f0);
    } else {
        f1 = (f64)rdf32(0x8057600cu);
        r0 = 0u;
        if (f1 == (f64)rdf32(0x817fdfb4u) && f1 == (f64)rdf32(0x817fdfb8u) && f1 == (f64)rdf32(0x817fdfbcu)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfb4u;
            a.r[1] = 0x817fdfb4u;
            (void)tc_call(0x802343e4u, &a);
        }
    }
    return ppc_fmadds((f64)rdf32(0x817fdfc8u), (f64)rdf32(0x817fdfbcu), ppc_fmadds((f64)rdf32(0x817fdfc0u), (f64)rdf32(0x817fdfb4u), (f64)(f32)((f64)rdf32(0x817fdfc4u) * (f64)rdf32(0x817fdfb8u))));
}
