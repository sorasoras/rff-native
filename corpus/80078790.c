#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_80078790(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f0 = (f64)rdf32(0x80572798u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    wrf32d(0x817fdfccu, f0);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfc4u, f0);
    r0 = rd32(param_3 + 4u);
    wr32(0x817fdfb8u, rd32(param_3));
    wr32(0x817fdfbcu, r0);
    wr32(0x817fdfc0u, rd32(param_3 + 8u));
    a.r[0] = 0x817fdfb8u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfb8u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfb8u;
    f1 = tc_callf(0x80234428u, &a);
    f31 = f1;
    if (f1 < (f64)rdf32(0x805727a0u)) {
        wrf32d(param_1, (f64)rdf32(0x80572798u));
        wrf32d(0x817fdfc4u, (f64)rdf32(param_2));
        wrf32d(0x817fdfc8u, (f64)rdf32(param_2 + 4u));
        wrf32d(0x817fdfccu, (f64)rdf32(param_2 + 8u));
    } else {
        f30 = ppc_fmadds((f64)rdf32(0x817fdfc0u), (f64)rdf32(param_2 + 8u), ppc_fmadds((f64)rdf32(0x817fdfb8u), (f64)rdf32(param_2), (f64)(f32)((f64)rdf32(0x817fdfbcu) * (f64)rdf32(param_2 + 4u))));
        a.r[0] = param_2;
        f1 = tc_callf(0x80234428u, &a);
        f0 = (f64)rdf32(0x80572798u);
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x805727a8u));
        f1 = (f64)(f32)(f31 * f1);
        f1 = ppc_fmsubs(f30, f30, f1);
        if ((f1 < f0) || (f1 == f0)) {
            wrf32d(param_1, (f64)(f32)px_fdiv(-f30, f31));
        } else {
            a.f[0] = f1;
            f1 = tc_callf(0x80262ec0u, &a);
            f1 = (f64)(f32)f1;
            wrf32d(param_1, (f64)(f32)px_fdiv((f64)(f32)(-f30 - f1), f31));
        }
        f1 = (f64)rdf32(param_1);
        f0 = (f64)rdf32(0x80572798u);
        if ((f1 < f0) || (f1 == f0)) {
            wrf32d(param_1, f0);
            wrf32d(0x817fdfc4u, (f64)rdf32(param_2));
            wrf32d(0x817fdfc8u, (f64)rdf32(param_2 + 4u));
            wrf32d(0x817fdfccu, (f64)rdf32(param_2 + 8u));
        } else {
            f0 = (f64)rdf32(0x805727a8u);
            if ((f0 < f1) || (f0 == f1)) {
                wrf32d(param_1, f0);
                wrf32d(0x817fdfc4u, (f64)rdf32(param_3));
                wrf32d(0x817fdfc8u, (f64)rdf32(param_3 + 4u));
                wrf32d(0x817fdfccu, (f64)rdf32(param_3 + 8u));
            } else {
                a.f[0] = f1;
                a.r[0] = 0x817fdfc4u;
                a.r[1] = param_2;
                a.r[2] = param_3;
                (void)tc_call(0x8004c6dcu, &a);
            }
        }
    }
    a.r[0] = 0x817fdfc4u;
    f1 = tc_callf(0x80234428u, &a);
    f0 = (f64)rdf32(0x805727b0u);
    c0lt = f1 < f0;
    return (((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
}
