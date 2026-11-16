#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80300b38(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f0 = (f64)rdf32(0x80577700u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    if (f0 == param_1) {
        wrf32d(0x817fdfccu, f0);
        wrf32d(0x817fdfc8u, f0);
        wrf32d(0x817fdfc4u, f0);
    } else {
        f2 = (f64)rdf32(param_3 + 8u);
        f1 = (f64)rdf32(param_3);
        wrf32d(0x817fdfbcu, f0);
        wrf32d(0x817fdfb8u, f1);
        wrf32d(0x817fdfc0u, f2);
        a.r[0] = 0x817fdfb8u;
        f1 = tc_callf(0x80234440u, &a);
        if (f1 > param_2) {
            f2 = (f64)(f32)px_fdiv(param_2, f1);
            f0 = (f64)(f32)((f64)rdf32(0x817fdfc0u) * f2);
            wrf32d(0x817fdfb8u, (f64)(f32)((f64)rdf32(0x817fdfb8u) * f2));
            wrf32d(0x817fdfc0u, f0);
        }
        a.r[0] = 0x817fdfb8u;
        f1 = tc_callf(0x80234440u, &a);
        f3 = (f64)(f32)((f64)rdf32(param_3) * f1);
        f0 = (f64)(f32)((f64)rdf32(param_3 + 8u) * f1);
        wrf32d(0x817fdfc8u, (f64)rdf32(0x80577700u));
        f0 = (f64)(f32)px_fdiv(f0, param_1);
        wrf32d(0x817fdfc4u, (f64)(f32)px_fdiv(f3, param_1));
        wrf32d(0x817fdfccu, f0);
    }
    a.f[0] = (f64)rdf32(0x817fdfc4u);
    a.f[1] = -(f64)rdf32(0x817fdfccu);
    f1 = tc_callf(0x80262c68u, &a);
    wrf32d(param_4, (f64)(f32)f1);
    a.r[0] = 0x817fdfc4u;
    f1 = tc_callf(0x80234440u, &a);
    wrf32d(param_5, (f64)(f32)px_fdiv(f1, param_2));
    return;
}
