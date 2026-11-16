#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8007910c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80572798u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    r0 = rd32(param_3 + 4u);
    wr32(0x817fdfccu, rd32(param_3));
    wr32(0x817fdfd0u, r0);
    wr32(0x817fdfd4u, rd32(param_3 + 8u));
    a.r[0] = 0x817fdfccu;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfccu;
    (void)tc_call(0x802343a4u, &a);
    f1 = (f64)rdf32(0x817fdfd0u);
    f0 = (f64)rdf32(0x817fdfd4u);
    wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdfccu));
    wrf32d(0x817fdfe8u, f1);
    wrf32d(0x817fdfecu, f0);
    r0 = rd32(param_1 + 4u);
    wr32(0x817fdfc0u, rd32(param_1));
    wr32(0x817fdfc4u, r0);
    wr32(0x817fdfc8u, rd32(param_1 + 8u));
    a.r[0] = 0x817fdfc0u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfc0u;
    (void)tc_call(0x802343a4u, &a);
    f1 = (f64)rdf32(0x817fdfc4u);
    f0 = (f64)rdf32(0x817fdfc8u);
    wrf32d(0x817fdfd8u, (f64)rdf32(0x817fdfc0u));
    wrf32d(0x817fdfdcu, f1);
    wrf32d(0x817fdfe0u, f0);
    a.r[0] = 0x817fdfe4u;
    (void)tc_call(0x80234440u, &a);
    a.r[0] = 0x817fdfd8u;
    (void)tc_call(0x80234440u, &a);
    f6 = (f64)rdf32(0x817fdfe8u);
    f5 = (f64)rdf32(0x817fdfe4u);
    f3 = (f64)rdf32(0x817fdfecu);
    f0 = (f64)rdf32(0x80572798u);
    f2 = ppc_fmadds(f3, (f64)rdf32(0x817fdfe0u), ppc_fmadds(f5, (f64)rdf32(0x817fdfd8u), (f64)(f32)(f6 * (f64)rdf32(0x817fdfdcu))));
    if ((f2 < f0) || (f2 == f0)) {
        wrf32d(param_4, (f64)rdf32(param_2));
        wrf32d(param_4 + 4u, (f64)rdf32(param_2 + 4u));
        wrf32d(param_4 + 8u, (f64)rdf32(param_2 + 8u));
    } else {
        f0 = ppc_fmadds(f3, f3, ppc_fmadds(f5, f5, (f64)(f32)(f6 * f6)));
        if ((f2 > f0) || (f2 == f0)) {
            a.r[0] = param_1;
            a.r[1] = param_3;
            (void)tc_call(0x802344e8u, &a);
            wrf32d(param_4, (f64)rdf32(param_3));
            wrf32d(param_4 + 4u, (f64)rdf32(param_3 + 4u));
            wrf32d(param_4 + 8u, (f64)rdf32(param_3 + 8u));
        } else {
            r5 = rd32(0x817fdfe8u);
            r0 = rd32(0x817fdfecu);
            wr32(0x817fdfa8u, rd32(0x817fdfe4u));
            wr32(0x817fdfacu, r5);
            wr32(0x817fdfb0u, r0);
            a.f[0] = (f64)(f32)px_fdiv(f2, f0);
            a.r[0] = 0x817fdfa8u;
            a.r[1] = 0x817fdfa8u;
            (void)tc_call(0x802343c8u, &a);
            r0 = rd32(param_2 + 4u);
            wr32(0x817fdfb4u, rd32(param_2));
            wr32(0x817fdfb8u, r0);
            wr32(0x817fdfbcu, rd32(param_2 + 8u));
            a.r[0] = 0x817fdfb4u;
            a.r[1] = 0x817fdfa8u;
            a.r[2] = 0x817fdfb4u;
            (void)tc_call(0x80234380u, &a);
            wrf32d(param_4, (f64)rdf32(0x817fdfb4u));
            wrf32d(param_4 + 4u, (f64)rdf32(0x817fdfb8u));
            wrf32d(param_4 + 8u, (f64)rdf32(0x817fdfbcu));
            a.r[0] = param_4;
            a.r[1] = param_1;
            (void)tc_call(0x802344e8u, &a);
        }
    }
    return;
}
